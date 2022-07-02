// Created by Kekovsky 07.2022

#include "DishWasher328.h"

int main(void)
{
	DDR_OUT = 0xFF;
	
    while(1) //PORTD TEST PROGRAM
    {	
			_delay_ms(1000);
			
			HEATER_ENABLE;
			
			_delay_ms(1000);
			
			HEATER_DISABLE;
    }
}