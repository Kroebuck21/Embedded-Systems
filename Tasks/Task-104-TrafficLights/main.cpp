#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);
Buttons buttons;
LCD_16X2_DISPLAY lcd;

int main()
{
    while (true)
    {
     green = 1;
     amber = 0;
     red = 0;

        if(buttons.BlueButton == 1)
        {
            wait_us(1000000); 
            green= 0;

            amber = 1;
            lcd.cls();
            lcd.puts("Amber");
            wait_us(2000000);

            red = 1;
            amber = 0;
            lcd.cls();
            lcd.puts("Red");    
            wait_us(10000000);

            amber = 1;
            wait_us(2000000);
    
            red = 0;
            amber = 0;
            green = 1; 
            lcd.puts("Green");
            wait_us(10000000);
        }




    

    
    }
}
