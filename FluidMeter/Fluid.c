#include "Fluid.h"

// unsigned int currentFluidCount = 0;
// unsigned char running = 0; //CURRENT MACHINE STATE 0 - STOPPED; 1 - RUNNING
//PCINT ISR AS FLUID TICK

ISR(PCINT1_vect)
 {
	 if (FLUID_HOLD) {
		 _delay_ms(20);
		 if (FLUID_HOLD) {	//IF STILL HOLD AFTER 20MS
			 currentFluidCount += 1;
		 }
	 }
 	 if (BTN_POWER_ACTIVE) {
 		 _delay_ms(20);
		  if (BTN_POWER_ACTIVE) {
			  _delay_ms(100);
				if (running == 0) {
					running = 1;
					DoWashing(0);
				} else {
					running = 0;
					procedureStop();	
				}
		  }
 	 }
 }

void InitFluidMeter() {
		sei();
		PCICR |= (1<<1); // 1 - PCINT group
		PCMSK1 |= (1<<0); // PCINT8
		PCMSK1 |= (1<<2); // PCINT10
}

void CountFluid(unsigned int requiredCount, unsigned int nextPhase) {
}