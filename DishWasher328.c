// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

void initialize() {
	DDR_OUT = 0xFF;
	DDR_IN = 0x00;
	PORT_IN = 0x00;
	LCD_init();
	TimerISRInit();
	lcdLog(MACHINE_NAME);
}

void debugInputLog() {
			char pinin[] = "000000  ";
			pinin[0] = 0x30 + (PIN_IN>>BTN_POWER & 0x01);
			pinin[1] = 0x30 + (PIN_IN>>BTN_CANCEL & 0x01);
			pinin[2] = 0x30 + (PIN_IN>>IN_RS & 0x01);
			pinin[3] = 0x30 + (PIN_IN>>IN_FM & 0x01);
			pinin[4] = 0x30 + (PIN_IN>>IN_IAQS & 0x01);
			pinin[5] = 0x30 + (PIN_IN>>IN_ISS & 0x01);
			lcdLog(pinin);
			_delay_ms(200);
}

int main(void)
{
	unsigned char running = 0;
	//MAIN PREINIT

	initialize();
	
    while(1)
    {	
//		debugInputLog();
		
 		if (running == 1) {
 			
 		}
		 
 		else {
			 if ((PIN_IN>>BTN_POWER & 0x01) == 0) {
				 running = 1;
				 DoWashing(0);
			 }
 		}
    }
}