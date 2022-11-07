/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);

int main()
{
    double pi=1.12345;
    printf("Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
    pi=4*atan(1.0);
    printf("Print float %f\n", pi);
    pi=0;
    while (true)
    {
        led1 = !led1;
        printf("Print float %f\n", pi);
        pi=pi+1;
        thread_sleep_for(WAIT_TIME_MS);
    }
}
