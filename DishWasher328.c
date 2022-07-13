// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

unsigned char running = 0; //CURRENT MACHINE STATE 0 - STOPPED; 1 - RUNNING


int main(void)
{
	//MAIN PREINIT

	initialize();
	if (ISS_EMPTY) errorNoSalt();
	
    while(1)
    {	
//		debugInputLog();
		
 		if (running == 1) {
 			if (BTN_POWER_ACTIVE || AQS_TRIGGERED) {
				 procedureStop();
				 running = 0;
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