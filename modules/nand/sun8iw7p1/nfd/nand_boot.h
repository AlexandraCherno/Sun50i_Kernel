/*
 * SPDX-License-Identifier: GPL-2.0
 * nand_boot.h for  SUNXI NAND .
 *
 * Copyright (C) 2016 Allwinner.
 *
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __NAND_BOOT_H__
#define __NAND_BOOT_H__

#define STAMP_VALUE                     0x5F0A6C39

typedef struct boot_nand_para{
	unsigned int ChannelCnt;
	/*count of total nand chips are currently connecting on the CE pin*/
	unsigned int ChipCnt;
	/*chip connect info, bit=1 means one chip connecting on the CE pin*/
	unsigned int ChipConnectInfo;
	unsigned int RbCnt;
	/*connect info of all rb  chips are connected*/
	unsigned int RbConnectInfo;
	unsigned int RbConnectMode;	/*rb connect mode*/
	/*count of banks in one nand chip, multi banks can support Inter-Leave*/
	unsigned int BankCntPerChip;
	/*count of dies in one nand chip, block management is based on Die*/
	unsigned int DieCntPerChip;
	/*count of planes in one die, >1 can support multi-plane operation*/
	unsigned int PlaneCntPerDie;
	/*count of sectors in one single physic page, one sector is 0.5k*/
	unsigned int SectorCntPerPage;
	/*count of physic pages in one physic block*/
	unsigned int PageCntPerPhyBlk;
	/*count of physic blocks in one die, include valid and invalid blocks*/
	unsigned int BlkCntPerDie;
	/*mask of operation types which current nand flash can support support*/
	unsigned int OperationOpt;
	/*parameter of hardware access clock, based on 'MHz'*/
	unsigned int FrequencePar;
	/*Ecc Mode for nand chip, 0: bch-16, 1:bch-28, 2:bch_32*/
	unsigned int EccMode;
	/*nand chip id of current connecting nand chip*/
	unsigned char NandChipId[8];
	/*ratio of valid physical blocks, based on 1024*/
	unsigned int ValidBlkRatio;
	unsigned int good_block_ratio; /*good block ratio get from hwscan*/
	unsigned int ReadRetryType; /*read retry type*/
	unsigned int DDRType;
	unsigned int Reserved[32];
} boot_nand_para_t;

typedef struct _normal_gpio_cfg {
	unsigned char port;
	unsigned char port_num;
	char mul_sel;
	char pull;
	char drv_level;
	char data;
	unsigned char reserved[2];
} normal_gpio_cfg;

/******************************************************************************/
/*                              head of Boot0                                 */
/******************************************************************************/
typedef struct _boot0_private_head_t {
	unsigned int prvt_head_size;
	char prvt_head_vsn[4];	/* the version of boot0_private_head_t*/
	unsigned int dram_para[32];	/* Original values is arbitrary*/
	int uart_port;
	normal_gpio_cfg uart_ctrl[2];
	int enable_jtag;	/* 1 : enable,  0 : disable*/
	normal_gpio_cfg jtag_gpio[5];
	normal_gpio_cfg storage_gpio[32];
	char storage_data[512 - sizeof(normal_gpio_cfg) * 32];
}
boot0_private_head_t;

typedef struct standard_Boot_file_head {
	unsigned int jump_instruction;	/* one intruction jumping to real code*/
	/* ="eGON.BT0" or "eGON.BT1",  not C-style string*/
	unsigned char magic[8];
	unsigned int check_sum;	/* generated by PC*/
	unsigned int length;	/* generated by PC*/
	unsigned int pub_head_size;	/* size of boot_file_head_t*/
	unsigned char pub_head_vsn[4];	/* version of boot_file_head_t*/
	/* version of boot0_file_head_t or boot1_file_head_t*/
	unsigned char file_head_vsn[4];
	unsigned char Boot_vsn[4];	/* Boot version*/
	unsigned char eGON_vsn[4];	/* eGON version*/
	unsigned char platform[8];	/* platform information*/
} standard_boot_file_head_t;

typedef struct _boot0_file_head_t {
	standard_boot_file_head_t boot_head;
	boot0_private_head_t prvt_head;
} boot0_file_head_t;

typedef struct _boot_core_para_t {
	unsigned int user_set_clock;
	unsigned int user_set_core_vol;
	unsigned int vol_threshold;
} boot_core_para_t;

/******************************************************************************/
/*                                   head of Boot1                            */
/******************************************************************************/
typedef struct _boot1_private_head_t {
	unsigned int dram_para[32];
	int run_clock;		/* Mhz*/
	int run_core_vol;	/* mV*/
	int uart_port;
	normal_gpio_cfg uart_gpio[2];
	int twi_port;
	normal_gpio_cfg twi_gpio[2];
	int work_mode;
	int storage_type;	/* 0nand   1sdcard    2: spinor*/
	normal_gpio_cfg nand_gpio[32];
	char nand_spare_data[256];
	normal_gpio_cfg sdcard_gpio[32];
	char sdcard_spare_data[256];
	int reserved[6];
} boot1_private_head_t;

typedef struct _Boot_file_head {
	unsigned int jump_instruction;	/* one intruction jumping to real code*/
	unsigned char magic[8];	/* ="u-boot"*/
	unsigned int check_sum;	/* generated by PC*/
	unsigned int align_size;	/* align size in byte*/
	unsigned int length;	/* the size of all file*/
	unsigned int uboot_length;	/* the size of uboot*/
	unsigned char version[8];	/* uboot version*/
	unsigned char platform[8];	/* platform information*/
	int reserved[1];	/*stamp space, 16bytes align*/
} boot_file_head_t;

typedef struct _boot1_file_head_t {
	boot_file_head_t boot_head;
	boot1_private_head_t prvt_head;
} boot1_file_head_t;

typedef struct sbrom_toc0_config {
	unsigned char config_vsn[4];
	unsigned int dram_para[32];
	int uart_port;
	normal_gpio_cfg uart_ctrl[2];
	int enable_jtag;
	normal_gpio_cfg jtag_gpio[5];
	normal_gpio_cfg storage_gpio[50];
	char storage_data[384];
	unsigned int secure_dram_mbytes;
	unsigned int drm_start_mbytes;
	unsigned int drm_size_mbytes;
	unsigned int res[8];
} sbrom_toc0_config_t;

typedef struct {
	u8 name[8];
	u32 magic;
	u32 check_sum;

	u32 serial_num;
	u32 status;

	u32 items_nr;
	u32 length;
	u8 platform[4];
	u32 reserved[2];
	u32 end;

} toc0_private_head_t;
#define SBROM_TOC0_HEAD_SPACE 0x80

#endif
