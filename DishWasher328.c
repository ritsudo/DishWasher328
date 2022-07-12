// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

unsigned char running = 0; //CURRENT MACHINE STATE 0 - STOPPED; 1 - RUNNING

void initialize() {
	DDR_OUT = 0xFF;
	DDR_IN = 0x00;
	PORT_IN = 0x00;
	LCD_init();
	TimerISRInit();
	lcdLog(MACHINE_NAME);
}

void procedureStop() {
	TimerPause();
	PORT_OUT = 0x00;
	lcdLog("STOP by user");
	if (AQS_TRIGGERED) lcdLog("AQS TRIGGERED");
	//if (HATCH_OPENED) lcdLog("DOOR IS OPENED");
	running = 0;
	_delay_ms(100); //100 ms delay to avoid reclick
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
	//MAIN PREINIT

	initialize();
	
    while(1)
    {	
//		debugInputLog();
		
 		if (running == 1) {
 			if (BTN_POWER_ACTIVE || AQS_TRIGGERED) {
				 procedureStop();
			 }
 		}
		 
 		else {
			 if (BTN_POWER_ACTIVE) {
				if (running == 0) running = 1;
				 _delay_ms(50); //50ms delay to avoid reclick
				 DoWashing(0);
			 }
 		}
    }
}