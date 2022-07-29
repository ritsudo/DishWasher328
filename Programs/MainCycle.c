#include "MainCycle.h"

void DoWashing(unsigned int step) {
	switch(step) {
		case 0:
		_delay_ms(200);
			DRAIN_ENABLE;
			_delay_ms(5);
			lcdLog("PRE-DRAIN");
			TimerInit(15, 1);
			break;
		case 1: 		//PHASE 0
			INLET_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 1");
			TimerInit(30, 2); //INIT TIME WITH 60 SECONDS, NEXT PHASE IS 1
			break;
		case 2:
			INLET_ENABLE;
			PUMPH_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 2");
			TimerInit(17, 3);
			break;
		case 3:
			PUMPH_ENABLE;
//			HEATER_ENABLE;
			lcdLog("HACOC PABOTAET");
			TimerInit(300, 4);
			break;
		case 4:
			DRAIN_ENABLE;
			lcdLog("IDET SLIV");
			TimerInit(30, 5);
			break;
		case 5:
			lcdLog("KONEC PROGRAMMY");
			TimerInit(0, 100); // 100 - END 
			break;
	}
}