// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

unsigned int CountdownValue = 0; // текущее значение счетчика in seconds
unsigned int CurrentPhase = 0; //текущая фаза программы
unsigned int currentFluidCount = 0; //FLUID METER COUNT 
unsigned int adcValue; //CURRENT TEMPERATURE
unsigned char running = 0; //CURRENT MACHINE STATE 0 - STOPPED; 1 - RUNNING


int main(void)
{
	//MAIN PREINIT

	initialize();
	if (ISS_EMPTY) errorNoSalt();
	
    while(1)
    {	
		if(AQS_TRIGGERED) {
			error("AQS TRIGGERED");
		}
		
		if (adcValue < 5 || adcValue > 1020) {
			error("MINTEMP ERR");
		}
    }
}