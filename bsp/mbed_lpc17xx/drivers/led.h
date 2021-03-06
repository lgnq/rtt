/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 */
#ifndef __LED_H__
#define __LED_H__

#include <rtthread.h>

#define LED0    0
#define LED1    1
#define LED2    2
#define LED3    3

void rt_hw_led_init(void);
void rt_hw_led_on (rt_uint32_t led);
void rt_hw_led_off(rt_uint32_t led);

#endif
