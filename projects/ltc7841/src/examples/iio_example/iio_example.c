/***************************************************************************//**
 *   @file   iio_example.c
 *   @brief  IIO example source file for ltc7841 project.
 *   @author Marvin Cabuenas (marvinneil.cabuenas@analog.com)
********************************************************************************
 * Copyright 2025(c) Analog Devices, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. “AS IS” AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL ANALOG DEVICES, INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
#include "iio_app.h"
#include "iio_ltc7841.h"
#include "common_data.h"
#include "no_os_print_log.h"

int example_main(void)
{
	int ret;
	struct ltc7841_iio_desc *ltc7841_iio_desc;
	struct ltc7841_iio_desc_init_param ltc7841_iio_ip = {
		.ltc7841_init_param = &ltc7841_ip,
		.LTC7841_rsense_value = RSENSE_VALUE_DC2798A
	};
	struct iio_app_desc *app;
	struct iio_app_init_param app_init_param = { 0 };

	ret = ltc7841_iio_init(&ltc7841_iio_desc, &ltc7841_iio_ip);
	if (ret)
		goto exit;

	struct iio_app_device iio_devices[] = {
		{
			.name = "ltc7841",
			.dev = ltc7841_iio_desc,
			.dev_descriptor = ltc7841_iio_desc->iio_dev,
		}
	};
	app_init_param.devices = iio_devices;
	app_init_param.nb_devices = NO_OS_ARRAY_SIZE(iio_devices);
	app_init_param.uart_init_params = uart_ip;

	ret = iio_app_init(&app, app_init_param);
	if (ret)
		goto remove_iio_ltc7841;

	ret = iio_app_run(app);

	iio_app_remove(app);

remove_iio_ltc7841:
	ltc7841_iio_remove(ltc7841_iio_desc);
exit:
	if (ret)
		pr_err("Error!\n");

	return ret;
}

