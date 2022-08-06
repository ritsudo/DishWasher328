#include "MainCycle.h"

void DoWashing(unsigned int step) {
	switch(step) {
		
/*
-------------------------------------------------------------------
		INFILL PHASE
-------------------------------------------------------------------
*/
		
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
			TimerInit(40, 2); //INIT TIME WITH 60 SECONDS, NEXT PHASE IS 1
			break;
		case 2:
			INLET_ENABLE;
			PUMPL_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 2");
			TimerInit(17, 10);
			break;
			
/*
-------------------------------------------------------------------
		MAIN PROGRAM PHASE
-------------------------------------------------------------------
*/
			
		case 10:
			PUMPH_ENABLE;
			HEATER_ENABLE;
			lcdLog("HACOC PABOTAET");
			TimerInit(900, 11); //15 MIN HEATER TEST
			break;
		case 11:
			DRAIN_ENABLE;
			lcdLog("IDET SLIV");
			TimerInit(30, 12);
			break;
		case 12:
			lcdLog("KONEC PROGRAMMY");
			TimerInit(0, 100); // 100 - END 
			break;
			
/*
-------------------------------------------------------------------
		100 - PROGRAM END
-------------------------------------------------------------------
*/
	}
}