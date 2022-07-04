// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

int main(void)
{
	unsigned char running = 0;
	//MAIN PREINIT
	DDR_OUT = 0xFF;
	LCD_init();
	TimerISRInit();
	lcdLog(MACHINE_NAME);
	
//	TimerStart(600, 0);
	
    while(1)
    {	
		if (running == 1) {
			
		}
		else {
			running = 1;
			DoWashing(0);	
		}
    }
}