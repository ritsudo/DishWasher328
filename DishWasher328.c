// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

int main(void)
{
	
	LCD_init();
	lcdLog(MACHINE_NAME);
	
//	lcdLog("1234567890abcdef");
	//EXAMPLE MINI PROGRAM USING DELAYS
	
/*	DDR_OUT = 0xFF;
	INLET_ENABLE;
	for (uint8_t i=0; i<127; i++) _delay_ms(100);
	INLET_DISABLE;
	PUMPH_ENABLE;
	for (uint8_t i=0; i<255; i++) _delay_ms(100);
	PUMPH_DISABLE;
	DRAIN_ENABLE;
	for (uint8_t i=0; i<127; i++) _delay_ms(100);
	DRAIN_DISABLE;

*/
	
	
	
    while(1)
    {	
    }
}