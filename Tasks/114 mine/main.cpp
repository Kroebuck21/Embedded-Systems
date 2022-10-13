/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


#define WAIT_TIME_MS 500 
DigitalOut redled   (PC_2,1);
DigitalOut amberled (PC_3,1);
DigitalOut greenled (PC_6,1);


int main()
{
while(true)
{  
    redled = 1; 
    greenled = 0;
    amberled = 0;
    wait_us(2000000);
    amberled = 1;
    wait_us(2000000);
    greenled = 1;
    amberled = 0;
    redled = 0;
    wait_us(2000000);
    greenled = 0;
    int a = 0;
    while(a < 4)
    {
        amberled= 1;
        wait_us(500000);
        amberled = 0;
        a = a+1;
        wait_us(500000);
    }






}
}