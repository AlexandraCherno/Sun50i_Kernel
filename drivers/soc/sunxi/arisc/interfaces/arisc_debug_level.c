/*
 *  drivers/arisc/interfaces/arisc_debug_level.c
 *
 * Copyright (c) 2012 Allwinner.
 * 2012-05-01 Written by sunny (sunny@allwinnertech.com).
 * 2012-10-01 Written by superm (superm@allwinnertech.com).
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "../arisc_i.h"

/**
 * set arisc debug level.
 * @level: arisc debug level;
 *
 * return: 0 - set arisc debug level successed, !0 - set arisc debug level failed;
 */
int arisc_set_debug_level(unsigned int level)
{
	int result;

	result = invoke_scp_fn_smc(ARM_SVC_ARISC_SET_DEBUG_LEVEL, level, 0, 0);

	return result;
}

int arisc_set_crashdump_mode(void)
{
	invoke_scp_fn_smc(ARM_SVC_ARISC_CRASHDUMP_START, 0, 0, 0);

	while (1)
		cpu_relax();
}

int arisc_set_uart_baudrate(u32 baudrate)
{
	int result;

	result = invoke_scp_fn_smc(ARM_SVC_ARISC_SET_UART_BAUDRATE,
		baudrate, 0, 0);

	return result;
}
