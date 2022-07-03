// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

int main(void)
{
	
	LCD_init();
	lcdLog(MACHINE_NAME);
	TimerStart(10);
	
	//EXAMPLE MINI PROGRAM USING DELAYS
	DDR_OUT = 0xFF;
	StartWashing();
	
    while(1)
    {	
    }
}