/*
 * Copyright (c) 2013, 2018-2019 The Linux Foundation. All rights reserved.
 * Copyright (C) 2017-2021 The LineageOS Project
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * *    * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __POWER_COMMON_H__
#define __POWER_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

#define INTERACTIVE_GOVERNOR "interactive"
#define SCHEDUTIL_GOVERNOR "schedutil"

#define INPUT_EVENT_WAKUP_MODE_OFF 4
#define INPUT_EVENT_WAKUP_MODE_ON 5

#define HINT_HANDLED (0)
#define HINT_NONE (-1)

#include <hardware/power.h>

enum CPU_GOV_CHECK { CPU0 = 0, CPU1 = 1, CPU2 = 2, CPU3 = 3 };

enum {
    PROFILE_POWER_SAVE = 0,
    PROFILE_BALANCED,
    PROFILE_HIGH_PERFORMANCE,
    PROFILE_BIAS_POWER,
    PROFILE_BIAS_PERFORMANCE
};

void power_init(void);
void power_hint(power_hint_t hint, void* data);
void set_interactive(int on);
int get_number_of_profiles();
void set_power_profile(int profile);

#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#define CHECK_HANDLE(x) ((x) > 0)

#ifdef __cplusplus
}
#endif

#endif  //__POWER_COMMON_H___
