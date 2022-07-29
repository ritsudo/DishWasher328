// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"



int main(void)
{
	//MAIN PREINIT

	initialize();
	if (ISS_EMPTY) errorNoSalt();
	
    while(1)
    {	
		if(AQS_TRIGGERED) {
			aqsTriggered();
		}
    }
}