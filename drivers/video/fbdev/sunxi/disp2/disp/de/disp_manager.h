/*
 * Allwinner SoCs display driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __DISP_MANAGER_H__
#define __DISP_MANAGER_H__

#include "disp_private.h"

#ifndef		CONFIG_SUNXI_ANDROID
extern enum disp_dvi_hdmi   g_output_dvi_hdmi;
#endif

s32 disp_init_mgr(struct disp_bsp_init_para *para);

#if defined(CONFIG_SUNXI_IOMMU)
#define DE_MASTOR_ID 0
extern void sunxi_enable_device_iommu(unsigned int mastor_id, bool flag);
#endif

extern s32 __disp_config_transfer2inner(
	struct disp_layer_config_inner *config_inner,
	struct disp_layer_config *config);
extern s32 __disp_config2_transfer2inner(
	struct disp_layer_config_inner *config_inner,
	struct disp_layer_config2 *config);

s32 disp_mgr_set_rtwb_layer(struct disp_manager *mgr,
			    struct disp_layer_config2 *config,
			    struct disp_capture_info2 *p_cptr_info,
			    unsigned int layer_num);

#endif
