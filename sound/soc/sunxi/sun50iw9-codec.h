/*
 * sound\soc\sunxi\sun50iw9-codec.h
 * (C) Copyright 2014-2018
 * allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 * yumingfeng <yumingfeng@allwinnertech.com>
 *
 * some simple description for this code
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */
#ifndef _SUN50IW9_CODEC_H
#define _SUN50IW9_CODEC_H

#define SUNXI_CODEC_CPUDAI_RX_CHANNELS_MAX 4
#define SUNXI_CODEC_CPUDAI_TX_CHANNELS_MAX 2

#define SUNXI_DAC_DPC		0x00
#define SUNXI_DAC_FIFO_CTL	0x10
#define SUNXI_DAC_FIFO_STA	0x14

/* left blank */
#define SUNXI_DAC_TXDATA	0X20
#define SUNXI_DAC_CNT		0x24
#define SUNXI_DAC_DG_REG	0x28

#define	SUNXI_ADC_FIFO_CTL	0x30
#define SUNXI_ADC_FIFO_STA	0x34
#define SUNXI_ADC_RXDATA	0x40
#define SUNXI_ADC_CNT		0x44
#define SUNXI_ADC_DG_REG	0x4C

/*left blank */
#define SUNXI_DAC_DAP_CTL	0xf0
#define SUNXI_ADC_DAP_CTL	0xf8

/* DAC */
#define AC_DAC_REG		0x310
#define AC_MIXER_REG		0x314
#define AC_RAMP_REG		0x31c

/* SUNXI_DAC_DPC:0x00 */
#define EN_DA			31
#define MODQU			25
#define DWA_EN			24
#define HPF_EN			18
#define DVOL			12
#define DAC_HUB_EN		0

/* SUNXI_DAC_FIFO_CTL:0x10 */
#define DAC_FS			29
#define FIR_VER			28
#define SEND_LASAT		26
#define DAC_FIFO_MODE		24
#define DAC_DRQ_CLR_CNT		21
#define TX_TRIG_LEVEL		8
#define DAC_MONO_EN		6
#define TX_SAMPLE_BITS		5
#define DAC_DRQ_EN		4
#define DAC_IRQ_EN		3
#define DAC_FIFO_UNDERRUN_IRQ_EN	2
#define DAC_FIFO_OVERRUN_IRQ_EN	1
#define DAC_FIFO_FLUSH		0

/* SUNXI_DAC_FIFO_STA:0x14 */
#define	DAC_TX_EMPTY		23
#define	DAC_TXE_CNT			8
#define	DAC_TXE_INT			3
#define	DAC_TXU_INT			2
#define	DAC_TXO_INT			1

/* SUNXI_DAC_DG_REG:0x28 */
#define	DAC_MODU_SELECT		11
#define	DAC_PATTERN_SEL		9
#define	CODEC_CLK_SEL		8
#define	DA_SWP			6
#define	ADDA_LOOP_MODE		0

/* SUNXI_ADC_FIFO_CTL:0x30 */
#define ADC_FS			29
#define EN_AD			28
#define ADCFDT			26
#define ADCDFEN			25
#define RX_FIFO_MODE		24
#define RX_SAMPLE_BITS		16
#define ADCY_EN			15
#define ADCX_EN			14
#define ADCR_EN			13
#define ADCL_EN			12
#define ADC_CHAN_SEL		12
#define RX_FIFO_TRG_LEVEL	4
#define ADC_DRQ_EN		3
#define ADC_IRQ_EN		2
#define ADC_OVERRUN_IRQ_EN	1
#define ADC_FIFO_FLUSH		0

/* SUNXI_ADC_FIFO_STA:0x38 */
#define	ADC_RXA			23
#define	ADC_RXA_CNT		8
#define	ADC_RXA_INT		3
#define	ADC_RXO_INT		1

/* SUNXI_ADC_DG_REG:0x4c */
#define	ADXY_SWP		25
#define	ADLR_SWP		24

/* SUNXI_DAC_DAP_CTL:0xf0 */
#define	DDAP_EN			31
#define	DDAP_DRC_EN		29
#define	DDAP_HPF_EN		28

/* SUNXI_ADC_DAP_CTR:0xf8 */
#define	ADC_DAP0_EN		31
#define	ADC_DRC0_EN		29
#define	ADC_HPF0_EN		28
#define	ADC_DAP1_EN		27
#define	ADC_DRC1_EN		25
#define	ADC_HPF1_EN		24

#define AC_DAC_DRC_HHPFC	(0x100)
#define AC_DAC_DRC_LHPFC	(0x104)
#define AC_DAC_DRC_CTL		(0x108)
#define AC_DAC_DRC_LPFHAT	(0x10c)
#define AC_DAC_DRC_LPFLAT	(0x110)
#define AC_DAC_DRC_RPFHAT	(0x114)
#define AC_DAC_DRC_RPFLAT	(0x118)
#define AC_DAC_DRC_LPFHRT	(0x11c)
#define AC_DAC_DRC_LPFLRT	(0x120)
#define AC_DAC_DRC_RPFHRT	(0x124)
#define AC_DAC_DRC_RPFLRT	(0x128)
#define AC_DAC_DRC_LRMSHAT	(0x12c)
#define AC_DAC_DRC_LRMSLAT	(0x130)
#define AC_DAC_DRC_RRMSHAT	(0x134)
#define AC_DAC_DRC_RRMSLAT	(0x138)
#define AC_DAC_DRC_HCT		(0x13c)
#define AC_DAC_DRC_LCT		(0x140)
#define AC_DAC_DRC_HKC		(0x144)
#define AC_DAC_DRC_LKC		(0x148)
#define AC_DAC_DRC_HOPC		(0x14c)
#define AC_DAC_DRC_LOPC		(0x150)
#define AC_DAC_DRC_HLT		(0x154)
#define AC_DAC_DRC_LLT		(0x158)
#define AC_DAC_DRC_HKI		(0x15c)
#define AC_DAC_DRC_LKI		(0x160)
#define AC_DAC_DRC_HOPL		(0x164)
#define AC_DAC_DRC_LOPL		(0x168)
#define AC_DAC_DRC_HET		(0x16c)
#define AC_DAC_DRC_LET		(0x170)
#define AC_DAC_DRC_HKE		(0x174)
#define AC_DAC_DRC_LKE		(0x178)
#define AC_DAC_DRC_HOPE		(0x17c)
#define AC_DAC_DRC_LOPE		(0x180)
#define AC_DAC_DRC_HKN		(0x184)
#define AC_DAC_DRC_LKN		(0x188)
#define AC_DAC_DRC_SFHAT	(0x18c)
#define AC_DAC_DRC_SFLAT	(0x190)
#define AC_DAC_DRC_SFHRT	(0x194)
#define AC_DAC_DRC_SFLRT	(0x198)
#define AC_DAC_DRC_MXGHS	(0x19c)
#define AC_DAC_DRC_MXGLS	(0x1a0)
#define AC_DAC_DRC_MNGHS	(0x1a4)
#define AC_DAC_DRC_MNGLS	(0x1a8)
#define AC_DAC_DRC_EPSHC	(0x1ac)
#define AC_DAC_DRC_EPSLC	(0x1b0)
#define AC_DAC_DRC_OPT		(0x1b4)
#define AC_DAC_DRC_HPFHGAIN	(0x1b8)
#define AC_DAC_DRC_HPFLGAIN	(0x1bc)

/*
 *      DAC_DRC Control Register
 *      AC_DAC_DRC_CTL:codecbase+0x108
 */
#define DAC_DRC_CTL_COMPLETE		(15)
#define DAC_DRC_CTL_SIGNAL_DEL_TIMESET	(8)
#define DAC_DRC_CTL_DELAY_USE_BUF	(7)
#define DAC_DRC_CTL_GAIN_MAXLIM_EN	(6)
#define DAC_DRC_CTL_GAIN_MINLIM_EN	(5)
#define DAC_DRC_CTL_CONTROL_DRC_EN	(4)
#define DAC_DRC_CTL_SIGNAL_FUN_SEL	(3)
#define DAC_DRC_CTL_DEL_FUN_EN		(2)
#define DAC_DRC_CTL_DRC_LT_EN		(1)
#define DAC_DRC_CTL_DRC_ET_EN		(0)

/*
 *      DAC_DRC Left Peak Filter High Attack Time Coef Register
 *      AC_DAC_DRC_LPFHAT:codecbase+0x10c
 */
#define DAC_DRC_LPFHAT_ATT_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left Peak Filter Low Attack Time Coef Register
 *      AC_DAC_DRC_LPFLAT:codecbase+0x110
 */
#define DAC_DRC_LPFLAT_ATT_TIME_PARA_SET (0)

/*
 *      DAC_DRC Right Peak Filter High Attack Time Coef Register
 *      AC_DAC_DRC_RPFHAT:codecbase+0x114
 */
#define DAC_DRC_RPFHAT_ATT_TIME_PARA_SET (0)

/*
 *      DAC_DRC Right Peak Filter Low Attack Time Coef Register
 *      AC_DAC_DRC_RPFLAT:codecbase+0x118
 */
#define DAC_DRC_RPFLAT_ATT_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left Peak Filter High Release Time Coef Register
 *      AC_DAC_DRC_LPFHRT:codecbase+0x11c
 */
#define DAC_DRC_LPFHRT_REL_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left Peak Filter Low Release Time Coef Register
 *      AC_DAC_DRC_LPFLRT:codecbase+0x120
 */
#define DAC_DRC_LPFLRT_REL_TIME_PARA_SET (0)

/*
 *      DAC_DRC Right Peak Filter High Release Time Coef Register
 *      AC_DAC_DRC_RPFHRT:codecbase+0x124
 */
#define DAC_DRC_RPFHRT_REL_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left Peak Filter Low Release Time Coef Register
 *      AC_DAC_DRC_RPFLRT:codecbase+0x128
 */
#define DAC_DRC_RPFLRT_REL_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left RMS Filter High Coef Register
 *      AC_DAC_DRC_LRMSHAT:codecbase+0x12c
 */
#define DAC_DRC_LRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      DAC_DRC Left RMS Filter Low Coef Register
 *      AC_DAC_DRC_LRMSLAT:codecbase+0x130
 */
#define DAC_DRC_LRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      DAC_DRC Right RMS Filter High Coef Register
 *      AC_DAC_DRC_RRMSHAT:codecbase+0x134
 */
#define DAC_DRC_RRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      DAC_DRC Right RMS Filter Low Coef Register
 *      AC_DAC_DRC_RRMSLAT:codecbase+0x138
 */
#define DAC_DRC_RRMSLAT_AVE_TIME_PARA_SET (0)

/*
 *      DAC_DRC Compressor Theshold High Setting Register
 *      AC_DAC_DRC_HCT:codecbase+0x13c
 */
#define DAC_DRC_HCT_COMP_THRES_SET (0)

/*
 *      DAC_DRC Compressor Theshold Low Setting Register
 *      AC_DAC_DRC_LCT:codecbase+0x140
 */
#define DAC_DRC_LCT_COMP_THRES_SET (0)

/*
 *      DAC_DRC Compressor Slope High Setting Register
 *      AC_DAC_DRC_HKC:codecbase+0x144
 */
#define DAC_DRC_HKC_SLOPE_SET (0)

/*
 *      DAC_DRC Compressor Slope Low Setting Register
 *      AC_DAC_DRC_LKC:codecbase+0x148
 */
#define DAC_DRC_LKC_SLOPE_SET (0)

/*
 *      DAC_DRC Compressor High Output at Compressor Threshold Register
 *      AC_DAC_DRC_HOPC:codecbase+0x14c
 */
#define DAC_DRC_HOPC_COMP_OUT (0)

/*
 *      DAC_DRC Compressor Low Output at Compressor Threshold Register
 *      AC_DAC_DRC_LOPC:codecbase+0x150
 */
#define DAC_DRC_LOPC_COMP_OUT (0)

/*
 *      DAC_DRC Limiter Threshold High Setting Register
 *      AC_DAC_DRC_HLT:codecbase+0x154
 */
#define DAC_DRC_HLT_LIM_THRES_SET (0)

/*
 *      DAC_DRC Limiter Threshold Low Setting Register
 *      AC_DAC_DRC_LLT:codecbase+0x158
 */
#define DAC_DRC_LLT_LIM_THRES_SET (0)

/*
 *      DAC_DRC Limiter Slope High Setting Register
 *      AC_DAC_DRC_HKI:codecbase+0x15c
 */
#define DAC_DRC_HKI_LIM_SLOPE_SET (0)

/*
 *      DAC_DRC Limiter Slope Low Setting Register
 *      AC_DAC_DRC_LKI:codecbase+0x160
 */
#define DAC_DRC_LKI_LIM_SLOPE_SET (0)

/*
 *      DAC_DRC Limiter High Output at Limiter Threshold
 *      AC_DAC_DRC_HOPL:codecbase+0x164
 */
#define DAC_DRC_HOPL_LIM_THRES_OUT (0)

/*
 *      DAC_DRC Limiter Low Output at Limiter Threshold
 *      AC_DAC_DRC_LOPL:codecbase+0x168
 */
#define DAC_DRC_LOPL_LIM_THRES_OUT (0)

/*
 *      DAC_DRC Expander Theshold High Setting Register
 *      AC_DAC_DRC_HET:codecbase+0x16c
 */
#define DAC_DRC_HET_EXPAN_THRES_SET (0)

/*
 *      DAC_DRC Expander Theshold Low Setting Register
 *      AC_DAC_DRC_LET:codecbase+0x170
 */
#define DAC_DRC_LET_EXPAN_THRES_SET (0)

/*
 *      DAC_DRC Expander Slope High Setting Register
 *      AC_DAC_DRC_HKE:codecbase+0x174
 */
#define DAC_DRC_HKE_EXPAN_SLOPE_SET (0)

/*
 *      DAC_DRC Expander Slope Low Setting Register
 *      AC_DAC_DRC_LKE:codecbase+0x178
 */
#define DAC_DRC_LKE_EXPAN_SLOPE_SET (0)

/*
 *      DAC_DRC Expander High Output at Expander Threshold
 *      AC_DAC_DRC_HOPE:codecbase+0x17c
 */
#define DAC_DRC_HOPE_EXPAN_DET_EQU (0)

/*
 *      DAC_DRC Expander Low Output at Expander Threshold
 *      AC_DAC_DRC_LOPE:codecbase+0x180
 */
#define DAC_DRC_LOPE_EXPAN_DET_EQU (0)

/*
 *      DAC_DRC Linear Slope High Setting Register
 *      AC_DAC_DRC_HKN:codecbase+0x184
 */
#define DAC_DRC_HKN_SLOPE_LIN_DET_EQU (0)

/*
 *      DAC_DRC Linear Slope Low Setting Register
 *      AC_DAC_DRC_LKN:codecbase+0x188
 */
#define DAC_DRC_LKN_SLOPE_LIN_DET_EQU (0)

/*
 *      DAC_DRC Smooth filter Gain High Attack Time Coef Register
 *      AC_DAC_DRC_SFHAT:codecbase+0x18c
 */
#define DAC_DRC_SFHAT_ATT_TIME_PARAM_SET (0)

/*
 *      DAC_DRC Smooth filter Gain Low Attack Time Coef Register
 *      AC_DAC_DRC_SFLAT:codecbase+0x190
 */
#define DAC_DRC_SFLAT_ATT_TIME_PARAM_SET (0)

/*
 *      DAC_DRC Smooth filter Gain High Release Time Coef Register
 *      AC_DAC_DRC_SFHRT:codecbase+0x194
 */
#define DAC_DRC_SFHRT_REL_TIME_PARAM_SET (0)

/*
 *      DAC_DRC Smooth filter Gain Low Release Time Coef Register
 *      AC_DAC_DRC_SFLRT:codecbase+0x198
 */
#define DAC_DRC_SFLRT_REL_TIME_PARAM_SET (0)

/*
 *      DAC_DRC MAX Gain High Setting Register
 *      AC_DAC_DRC_MXGHS:codecbase+0x19c
 */
#define DAC_DRC_MXGHS_GAIN_SET_DET_EUQ (0)

/*
 *      DAC_DRC MAX Gain Low Setting Register
 *      AC_DAC_DRC_MXGLS:codecbase+0x1A0
 */
#define DAC_DRC_MXGLS_GAIN_SET_DET_EUQ (0)

/*
 *      DAC_DRC Min Gain High Setting Register
 *      AC_DAC_DRC_MNGHS:codecbase+0x1A4
 */
#define DAC_DRC_MNGHS_GAIN_SET_DET_EUQ (0)

/*
 *      DAC_DRC Min Gain Low Setting Register
 *      AC_DAC_DRC_MNGHS:codecbase+0x1A8
 */
#define DAC_DRC_MNGLS_GAIN_SET_DET_EUQ (0)

/*
 *      DAC_DRC Expander Smooth Time High Coef Register
 *      AC_DAC_DRC_EPSHC:codecbase+0x1AC
 */
#define DAC_DRC_EPSHC_GAIN_FILT_REL_ATT_PARA (0)

/*
 *      DAC_DRC Expander Smooth Time Low Coef Register
 *      AC_DAC_DRC_EPSLC:codecbase+0x1B0
 */
#define DAC_DRC_EPSLC_GAIN_FILT_REL_ATT_PARA (0)

/*
 *      DAC_DRC Optimum Register
 *      AC_DAC_DRC_OPT:codecbase+0x1B4
 */
#define DAC_DRC_OPT_GS_EXP_COEFF_USE_SEL	(10)
#define DAC_DRC_OPT_GS_COEFF_MOD_SEL		(9)
#define DAC_DRC_OPT_MIN_ENERGY			(8)
#define DAC_DRC_OPT_RMS_DET_MOD			(7)
#define DAC_DRC_OPT_DATA_OUTPUT			(6)
#define DAC_DRC_OPT_GAIN_DEFAULT_VAL 		(5)
#define DAC_DRC_OPT_HYS_GAIN_SMOOTH_DEL_TIME	(0)

/*
 *      DAC_DRC HPF Gain High Coef Register
 *      AC_DAC_DRC_HPFHGAIN:codecbase+0x1B8
 */
#define DAC_DRC_HPFHGAIN_GAIN_HPF_COEFF_SET (0)

/*
 *      DAC_DRC HPF Gain Low Coef Register
 *      AC_DAC_DRC_HPFLGAIN:codecbase+0x1Bc
 */
#define DAC_DRC_HPFLGAIN_GAIN_HPF_COEFF_SET (0)


/*
 * ADC DRC
 */
#define AC_ADC_DRC_HHPFC	(0x200)
#define AC_ADC_DRC_LHPFC 	(0x204)
#define AC_ADC_DRC_CTRL		(0x208)
#define AC_ADC_DRC_LPFHAT	(0x20c)
#define AC_ADC_DRC_LPFLAT	(0x210)
#define AC_ADC_DRC_RPFHAT	(0x214)
#define AC_ADC_DRC_RPFLAT	(0x218)
#define AC_ADC_DRC_LPFHRT	(0x21c)
#define AC_ADC_DRC_LPFLRT	(0x220)
#define AC_ADC_DRC_RPFHRT	(0x224)
#define AC_ADC_DRC_RPFLRT	(0x228)
#define AC_ADC_DRC_LRMSHAT	(0x22c)
#define AC_ADC_DRC_LRMSLAT	(0x230)
#define AC_ADC_DRC_RRMSHAT	(0x234)
#define AC_ADC_DRC_RRMSLAT	(0x238)
#define AC_ADC_DRC_HCT		(0x23c)
#define AC_ADC_DRC_LCT		(0x240)
#define AC_ADC_DRC_HKC		(0x244)
#define AC_ADC_DRC_LKC		(0x248)
#define AC_ADC_DRC_HOPC		(0x24c)
#define AC_ADC_DRC_LOPC		(0x250)
#define AC_ADC_DRC_HLT		(0x254)
#define AC_ADC_DRC_LLT		(0x258)
#define AC_ADC_DRC_HKI		(0x25c)
#define AC_ADC_DRC_LKI		(0x260)
#define AC_ADC_DRC_HOPL		(0x264)
#define AC_ADC_DRC_LOPL		(0x268)
#define AC_ADC_DRC_HET		(0x26c)
#define AC_ADC_DRC_LET		(0x270)
#define AC_ADC_DRC_HKE		(0x274)
#define AC_ADC_DRC_LKE		(0x278)
#define AC_ADC_DRC_HOPE		(0x27c)
#define AC_ADC_DRC_LOPE		(0x280)
#define AC_ADC_DRC_HKN		(0x284)
#define AC_ADC_DRC_LKN		(0x288)
#define AC_ADC_DRC_SFHAT	(0x28c)
#define AC_ADC_DRC_SFLAT	(0x290)
#define AC_ADC_DRC_SFHRT	(0x294)
#define AC_ADC_DRC_SFLRT	(0x298)
#define AC_ADC_DRC_MXGHS	(0x29c)
#define AC_ADC_DRC_MXGLS	(0x2a0)
#define AC_ADC_DRC_MNGHS	(0x2a4)
#define AC_ADC_DRC_MNGLS	(0x2a8)
#define AC_ADC_DRC_EPSHC	(0x2ac)
#define AC_ADC_DRC_EPSLC	(0x2b0)
#define AC_ADC_DRC_OPT		(0x2b4)
#define AC_ADC_DRC_HPFHGAIN	(0x2b8)
#define AC_ADC_DRC_HPFLGAIN	(0x2bc)

#define AC_VERSION		(0x2c0)


/*
 *      ADC_DRC High HPF Coef Register
 *      AC_ADC_DRC_HHPFC:codecbase+0x200
 */
#define ADC_DRC_HHPFC_COEF_SET (0)

/*
 *      ADC_DRC Low HPF Coef Register
 *      AC_ADC_DRC_LHPFC:codecbase+0x204
 */
#define ADC_DRC_LHPFC_COEF_SET (0)

/*
 *      ADC_DRC Control Register
 *      AC_ADC_DRC_CTRL:codecbase+0x208
 */
#define ADC_DRC_CTL_COMPLETE (15)
#define ADC_DRC_CTL_SIGNAL_DEL_TIMESET (8)
#define ADC_DRC_CTL_DELAY_USE_BUF (7)
#define ADC_DRC_CTL_GAIN_MAXLIM_EN (6)
#define ADC_DRC_CTL_GAIN_MINLIM_EN (5)
#define ADC_DRC_CTL_CONTROL_DRC_EN (4)
#define ADC_DRC_CTL_SIGNAL_FUN_SEL (3)
#define ADC_DRC_CTL_DEL_FUN_EN (2)
#define ADC_DRC_CTL_DRC_LT_EN (1)
#define ADC_DRC_CTL_DRC_ET_EN (0)

/*
 *      ADC_DRC Left Peak Filter High Attack Time Coef Register
 *      AC_ADC_DRC_LPFHAT:codecbase+0x20c
 */
#define ADC_DRC_LPFHAT_ATT_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left Peak Filter Low Attack Time Coef Register
 *      AC_ADC_DRC_LPFLAT:codecbase+0x210
 */
#define ADC_DRC_LPFLAT_ATT_TIME_PARA_SET (0)

/*
 *      ADC_DRC Right Peak Filter High Attack Time Coef Register
 *      AC_ADC_DRC_RPFHAT:codecbase+0x214
 */
#define ADC_DRC_RPFHAT_ATT_TIME_PARA_SET (0)

/*
 *      ADC_DRC Right Peak Filter Low Attack Time Coef Register
 *      AC_ADC_DRC_RPFLAT:codecbase+0x218
 */
#define ADC_DRC_RPFLAT_ATT_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left Peak Filter High Release Time Coef Register
 *      AC_ADC_DRC_LPFHRT:codecbase+0x21c
 */
#define DRC7_LPFHRT_REL_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left Peak Filter Low Release Time Coef Register
 *      AC_ADC_DRC_LPFLRT:codecbase+0x220
 */
#define ADC_DRC_LPFLRT_REL_TIME_PARA_SET (0)

/*
 *      ADC_DRC Right Peak Filter High Release Time Coef Register
 *      AC_ADC_DRC_RPFHRT:codecbase+0x224
 */
#define ADC_DRC_RPFHRT_REL_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left Peak Filter Low Release Time Coef Register
 *      AC_ADC_DRC_RPFLRT:codecbase+0x228
 */
#define ADC_DRC_RPFLRT_REL_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left RMS Filter High Coef Register
 *      AC_ADC_DRC_LRMSHAT:codecbase+0x22c
 */
#define ADC_DRC_LRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      ADC_DRC Left RMS Filter Low Coef Register
 *      AC_ADC_DRC_LRMSLAT:codecbase+0x230
 */
#define ADC_DRC_LRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      ADC_DRC Right RMS Filter High Coef Register
 *      AC_ADC_DRC_RRMSHAT:codecbase+0x234
 */
#define ADC_DRC_RRMSHAT_AVE_TIME_PARA_SET (0)

/*
 *      ADC_DRC Right RMS Filter Low Coef Register
 *      AC_ADC_DRC_RRMSLAT:codecbase+0x238
 */
#define ADC_DRC_RRMSLAT_AVE_TIME_PARA_SET (0)

/*
 *      ADC_DRC Compressor Theshold High Setting Register
 *      AC_ADC_DRC_HCT:codecbase+0x23c
 */
#define ADC_DRC_HCT_COMP_THRES_SET (0)

/*
 *      ADC_DRC Compressor Theshold Low Setting Register
 *      AC_ADC_DRC_LCT:codecbase+0x240
 */
#define ADC_DRC_LCT_COMP_THRES_SET (0)

/*
 *      ADC_DRC Compressor Slope High Setting Register
 *      AC_ADC_DRC_HKC:codecbase+0x244
 */
#define ADC_DRC_HKC_SLOPE_SET (0)

/*
 *      ADC_DRC Compressor Slope Low Setting Register
 *      AC_ADC_DRC_LKC:codecbase+0x248
 */
#define ADC_DRC_LKC_SLOPE_SET (0)

/*
 *      ADC_DRC Compressor High Output at Compressor Threshold Register
 *      AC_ADC_DRC_HOPC:codecbase+0x24c
 */
#define ADC_DRC_HOPC_COMP_OUT (0)

/*
 *      ADC_DRC Compressor Low Output at Compressor Threshold Register
 *      AC_ADC_DRC_LOPC:codecbase+0x250
 */
#define ADC_DRC_LOPC_COMP_OUT (0)

/*
 *      ADC_DRC Limiter Threshold High Setting Register
 *      AC_ADC_DRC_HLT:codecbase+0x254
 */
#define ADC_DRC_HLT_LIM_THRES_SET (0)

/*
 *      ADC_DRC Limiter Threshold Low Setting Register
 *      AC_ADC_DRC_LLT:codecbase+0x258
 */
#define ADC_DRC_LLT_LIM_THRES_SET (0)

/*
 *      ADC_DRC Limiter Slope High Setting Register
 *      AC_ADC_DRC_HKI:codecbase+0x25c
 */
#define ADC_DRC_HKI_LIM_SLOPE_SET (0)

/*
 *      ADC_DRC Limiter Slope Low Setting Register
 *      AC_ADC_DRC_LKI:codecbase+0x260
 */
#define ADC_DRC_LKI_LIM_SLOPE_SET (0)

/*
 *      ADC_DRC Limiter High Output at Limiter Threshold
 *      AC_ADC_DRC_HOPL:codecbase+0x264
 */
#define ADC_DRC_HOPL_LIM_THRES_OUT (0)

/*
 *      ADC_DRC Limiter Low Output at Limiter Threshold
 *      AC_ADC_DRC_LOPL:codecbase+0x268
 */
#define ADC_DRC_LOPL_LIM_THRES_OUT (0)

/*
 *      ADC_DRC Expander Theshold High Setting Register
 *      AC_ADC_DRC_HET:codecbase+0x26c
 */
#define ADC_DRC_HET_EXPAN_THRES_SET (0)

/*
 *      ADC_DRC Expander Theshold Low Setting Register
 *      AC_ADC_DRC_LET:codecbase+0x270
 */
#define ADC_DRC_LET_EXPAN_THRES_SET (0)

/*
 *      ADC_DRC Expander Slope High Setting Register
 *      AC_ADC_DRC_HKE:codecbase+0x274
 */
#define ADC_DRC_HKE_EXPAN_SLOPE_SET (0)

/*
 *      ADC_DRC Expander Slope Low Setting Register
 *      AC_ADC_DRC_LKE:codecbase+0x278
 */
#define ADC_DRC_LKE_EXPAN_SLOPE_SET (0)

/*
 *      ADC_DRC Expander High Output at Expander Threshold
 *      AC_ADC_DRC_HOPE:codecbase+0x27c
 */
#define ADC_DRC_HOPE_EXPAN_DET_EQU (0)

/*
 *      ADC_DRC Expander Low Output at Expander Threshold
 *      AC_ADC_DRC_LOPE:codecbase+0x280
 */
#define ADC_DRC_LOPE_EXPAN_DET_EQU (0)

/*
 *      ADC_DRC Linear Slope High Setting Register
 *      AC_ADC_DRC_HKN:codecbase+0x284
 */
#define ADC_DRC_HKN_SLOPE_LIN_DET_EQU (0)

/*
 *      ADC_DRC Linear Slope Low Setting Register
 *      AC_ADC_DRC_LKN:codecbase+0x288
 */
#define ADC_DRC_LKN_SLOPE_LIN_DET_EQU (0)

/*
 *      ADC_DRC Smooth filter Gain High Attack Time Coef Register
 *      AC_ADC_DRC_SFHAT:codecbase+0x28c
 */
#define ADC_DRC_SFHAT_ATT_TIME_PARAM_SET (0)

/*
 *      ADC_DRC Smooth filter Gain Low Attack Time Coef Register
 *      AC_ADC_DRC_SFLAT:codecbase+0x290
 */
#define ADC_DRC_SFLAT_ATT_TIME_PARAM_SET (0)

/*
 *      ADC_DRC Smooth filter Gain High Release Time Coef Register
 *      AC_ADC_DRC_SFHRT:codecbase+0x294
 */
#define ADC_DRC_SFHRT_REL_TIME_PARAM_SET (0)

/*
 *      ADC_DRC Smooth filter Gain Low Release Time Coef Register
 *      AC_ADC_DRC_SFLRT:codecbase+0x298
 */
#define ADC_DRC_SFLRT_REL_TIME_PARAM_SET (0)

/*
 *      ADC_DRC MAX Gain High Setting Register
 *      AC_ADC_DRC_MXGHS:codecbase+0x29c
 */
#define ADC_DRC_MXGHS_GAIN_SET_DET_EUQ (0)

/*
 *      ADC_DRC MAX Gain Low Setting Register
 *      AC_ADC_DRC_MXGLS:codecbase+0x2A0
 */
#define ADC_DRC_MXGLS_GAIN_SET_DET_EUQ (0)

/*
 *      ADC_DRC Min Gain High Setting Register
 *      AC_ADC_DRC_MNGHS:codecbase+0x2A4
 */
#define ADC_DRC_MNGHS_GAIN_SET_DET_EUQ (0)

/*
 *      ADC_DRC Min Gain Low Setting Register
 *      AC_ADC_DRC_MNGHS:codecbase+0x2A8
 */
#define ADC_DRC_MNGLS_GAIN_SET_DET_EUQ (0)

/*
 *      ADC_DRC Expander Smooth Time High Coef Register
 *      AC_ADC_DRC_EPSHC:codecbase+0x2AC
 */
#define ADC_DRC_EPSHC_GAIN_FILT_REL_ATT_PARA (0)

/*
 *      ADC_DRC Expander Smooth Time Low Coef Register
 *      AC_ADC_DRC_EPSLC:codecbase+0x2B0
 */
#define ADC_DRC_EPSLC_GAIN_FILT_REL_ATT_PARA (0)

/*
 *      ADC_DRC Optimum Register
 *      AC_ADC_DRC_OPT:codecbase+0x2B4
 */
#define ADC_DRC_OPT_GS_EXP_COEFF_USE_SEL	(10)
#define ADC_DRC_OPT_GS_COEFF_MOD_SEL		(9)
#define ADC_DRC_OPT_MIN_ENERGY			(8)
#define ADC_DRC_OPT_RMS_DET_MOD			(7)
#define ADC_DRC_OPT_DATA_OUTPUT			(6)
#define ADC_DRC_OPT_GAIN_DEFAULT_VAL		(5)
#define ADC_DRC_OPT_HYS_GAIN_SMOOTH_DEL_TIME	(0)

/*
 *      ADC_DRC HPF Gain High Coef Register
 *      AC_ADC_DRC_HPFHGAIN:codecbase+0x2B8
 */
#define ADC_DRC_HPFHGAIN_GAIN_HPF_COEFF_SET (0)

/*
 *      ADC_DRC HPF Gain Low Coef Register
 *      AC_ADC_DRC_HPFLGAIN:codecbase+0x2Bc
 */
#define ADC_DRC_HPFLGAIN_GAIN_HPF_COEFF_SET (0)


/* DAC */
/* AC_DAC_REG */
#define CURRENT_TEST_SEL	23
#define IOPVRS			20
#define ILINEOUTAMPS		18
#define IOPDACS			16
#define DACLEN			15
#define DACREN			14
#define LINEOUTL_EN		13
#define LMUTE			12
#define LINEOUTR_EN		11
#define RMUTE			10
#define RSWITCH			9
#define RAMPEN			8
#define LINEOUTL_SEL		6
#define LINEOUTR_SEL		5
#define LINEOUT_VOL		0

/* AC_MIXER_REG	*/
#define LMIX_LINEINL		23
#define LMIX_FMINL		22
#define LMIX_LDAC		21
#define LMIX_RDAC		20
#define LMIXMUTE		20
#define RMIX_LINEINR		19
#define RMIX_FMINR		18
#define RMIX_RDAC		17
#define RMIX_LDAC		16
#define RMIXMUTE		16
#define LMIXEN			11
#define RMIXEN			10
#define IOPMIXS			8
#define LINEING			4
#define FMING			0

/* AC_RAMP_REG */
#define RAMP_STEP		4
#define RMDEN			3
#define RMUEN			2
#define RMCEN			1
#define RDEN			0

#define LABEL(constant)		{#constant, constant, 0}
#define LABEL_END               {NULL, 0, -1}

struct audiocodec_reg_label {
	const char *name;
	const unsigned int address;
	int value;
};

struct spk_config {
	bool used;
	bool pa_ctl_level;
	u32 gpio;
	u32 pa_msleep_time;
	u32 ramp_func_used;
};

struct gain_config {
	u32 lineout_vol;
	u32 linein_gain;
	u32 fmin_gain;
	u32 digital_vol;
};

struct codec_hw_config {
	u8 adcdrc_cfg;
	u8 dacdrc_cfg;
	u8 adchpf_cfg;
	u8 dachpf_cfg;
};

struct voltage_supply {
	struct regulator *cpvdd;
	struct regulator *avcc;
};

struct sunxi_codec_info {
	struct device *dev;
	struct regmap *regmap;
	void __iomem *digitbase;
	struct clk *pllclk;
	struct clk *pllclkx4;
	struct clk *moduleclk;
	/* self user config params */
	struct spk_config spk_cfg;
	struct gain_config gain_cfg;
	struct voltage_supply vol_supply;
	struct codec_hw_config hw_cfg;

	u32 dac_en;
	u32 adc_en;
	u32 dacdap_en;
	u32 adcdap_en;
};

#endif /* __SUN50IW9_CODEC_H */
