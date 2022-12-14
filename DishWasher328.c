// Created by Kekovsky 07.2022 - 08.2022

//MAIN OUT: HEATER, DRAIN, TANK, DISPENSER, INLET, PUMPL, PUMPH (ENABLE/DISABLE)
//LCD OUT: PORTB

//#define INFILL_PARROTS 600 // MAX VALUE TO INFILL

#include "DishWasher328.h"

unsigned int CountdownValue = 0; // ??????? ???????? ???????? in seconds
unsigned int CurrentPhase = 0; //??????? ???? ?????????
unsigned int currentFluidCount = 0; //FLUID METER COUNT 

// HEATER SECTION
unsigned int adcValue = 0; //CURRENT TEMPERATURE
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
			adcValue = CheckTemperature();
			if (adcValue < 300) {
				_delay_ms(10);
				adcValue = CheckTemperature();
				if (adcValue < 300) {
					HEATER_DISABLE;
				}
			}
		}
		
		if (adcValue < 100 || adcValue > 960) { // IF T > 80 OR T < 5 C
			_delay_ms(1);
			adcValue = CheckTemperature();
			if (adcValue < 100 || adcValue > 960) {
				_delay_ms(10);
				adcValue = CheckTemperature();
				if (adcValue < 100 || adcValue > 960) {
					error("MINTEMP ERR");
				}
			}
		}
		
		
    }
}