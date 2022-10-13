#include "mbed.h"
#define WAIT_TIME_MS 1000 


// DigitalOut redLED(PC_2,1);
// DigitalOut yellowLED(PC_3,1);
// DigitalOut greenLED(PC_6,1);

BusOut lights(PC_2, PC_3, PC_6,PC_7);
//BusOut lights(PC_2, PC_3, PC_6, PB_0, PB_7, PB_14);

int main()
{
    pin_mode(PC_7, OpenDrainNoPull);
    //All OFF
    lights = 0b0000;
    wait_us(2000000);
    lights = 5;
wait_us(2000000);

    while (true)
    {
        int count = 0;
        while (count <= 15) 
        {
            printf("count = %d\n", count);
            lights = count;
            wait_us(1000000);

            count = count + 1;
        }
    }
}
