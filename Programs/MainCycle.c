#include "MainCycle.h"

void DoWashing(unsigned int step) {
	switch(step) {
		
/*
-------------------------------------------------------------------
		INFILL PHASE
-------------------------------------------------------------------
*/
		
		case 0:						//ENTRY POINT
		_delay_ms(200);
			DRAIN_ENABLE;
			_delay_ms(5);
			lcdLog("PRE-DRAIN");
			TimerInit(15, 1);
			break;
		case 1: 		
			currentFluidCount = 0; //CLEAR FLUID METER
			INLET_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 1-1");
			TimerInit(40, 2);
			break;
		case 2:
			INLET_ENABLE;
			PUMPL_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 1-2");
			TimerInit(17, 10);
			break;
			
/*
-------------------------------------------------------------------
		10 - MAIN PROGRAM PHASE
-------------------------------------------------------------------
*/
			
		case 10:
			PUMPH_ENABLE;
			DISPENSER_ENABLE;
			lcdLog("DISPENSING");
			TimerInit(1, 11);
			break;
		case 11:
			PUMPH_ENABLE;
			HEATER_ENABLE;
			lcdLog("HACOC PABOTAET");
			TimerInit(1200, 12); //20 MIN WASHING CYCLE
			break;
		case 12:
			DRAIN_ENABLE;
			lcdLog("IDET SLIV 1");
			TimerInit(40, 20);
			break;
						
/*
-------------------------------------------------------------------
		20 - 2ND INFILL
-------------------------------------------------------------------
*/
		case 20: 		
			currentFluidCount = 0; //CLEAR FLUID METER
			INLET_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 2-1");
			TimerInit(40, 21);
			break;
		case 21:
			INLET_ENABLE;
			PUMPL_ENABLE;
			_delay_ms(5);
			lcdLog("3AJIBKA 2-2");
			TimerInit(17, 30);
			break;	
			
			
/*
-------------------------------------------------------------------
		30 - 2ND WASH (RINSE)
-------------------------------------------------------------------
*/		
		case 30:
			PUMPH_ENABLE;
			lcdLog("HACOC PABOTAET 2");
			TimerInit(300, 31); //5 MIN RINSE
			break;
		case 31:
			DRAIN_ENABLE;
			lcdLog("IDET SLIV 2");
			TimerInit(40, 32);
			break;
		case 32:
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