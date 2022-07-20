#include "MainCycle.h"

void DoWashing(unsigned int step) {
	switch(step) {
		case 0: 		//PHASE 0
			lcdLog("3AJIBKA");
			_delay_ms(200);
			_delay_ms(200);
			INLET_ENABLE;
			TimerInit(25, 1); //INIT TIME WITH 60 SECONDS, NEXT PHASE IS 1
			break;
		case 1:
			PUMPH_ENABLE;
			lcdLog("HACOC PABOTAET");
			TimerInit(60, 2);
			break;
		case 2:
			DRAIN_ENABLE;
			lcdLog("IDET SLIV");
			TimerInit(30, 3);
			break;
		case 3:
			lcdLog("KONEC PROGRAMMY");
			TimerInit(0, 100); // 100 - END 
			break;
	}
}