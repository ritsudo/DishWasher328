// Created by Kekovsky 07.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

#include "DishWasher328.h"

unsigned int CountdownValue = 0; // текущее значение счетчика in seconds
unsigned int CurrentPhase = 0; //текущая фаза программы
unsigned int currentFluidCount = 0; //FLUID METER COUNT 

// HEATER SECTION
unsigned int adcValue; //CURRENT TEMPERATURE
unsigned int requiredTemperature = 0; //REQUIRED TEMPERATURE FOR HEATING
unsigned char preHeated = 0; //SET IF HEATER'S READY
//

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
		
		if (adcValue < 300) { //300 FOR 60C TEMP
			_delay_ms(1);
			if (adcValue < 300) {
				_delay_ms(10);
				if (adcValue < 300) {
					HEATER_DISABLE;
				}
			}
		}
		
		if (adcValue < 10 || adcValue > 1020) {
			_delay_ms(1);
			if (adcValue < 10 || adcValue > 1020) {
				_delay_ms(10);
				if (adcValue < 10 || adcValue > 1020) {
					error("MINTEMP ERR");
				}
			}
		}
		
		
    }
}