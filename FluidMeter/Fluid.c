#include "Fluid.h"
#define FLUID_HOLD (PIN_IN>>IN_FM&0x01)==1

unsigned int currentFluidCount = 0;
//PCINT ISR AS FLUID TICK

ISR(PCINT1_vect)
 {
	 if (FLUID_HOLD) {
		 _delay_ms(20);
		 if (FLUID_HOLD) {	//IF STILL HOLD AFTER 20MS
			 currentFluidCount += 1;
		 }
	 }
 }

void InitFluidMeter() {
		sei();
		PCICR |= (1<<1); // 1 - PCINT group
		PCMSK1 |= (1<<2); // PCINT10
}

void CountFluid(unsigned int requiredCount, unsigned int nextPhase) {
}

void ShowFluidMeter() {
		char fldVal[] = "0000";
		fldVal[0] =     currentFluidCount/1000+0x30;
		fldVal[1] =   (currentFluidCount%1000)/100+0x30;
		fldVal[2] =   (currentFluidCount%100)/10+0x30;
		fldVal[3] =   currentFluidCount%10+0x30;
		lcdLog(fldVal);
		_delay_ms(50);
}