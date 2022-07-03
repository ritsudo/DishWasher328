#include "MainCycle.h"

void StartWashing() {
		INLET_ENABLE;
		lcdLog("3AJIBKA");
		TimerStart(127);
		INLET_DISABLE;
		PUMPH_ENABLE;
		lcdLog("HACOC PABOTAET");
		TimerStart(255);
		PUMPH_DISABLE;
		DRAIN_ENABLE;
		lcdLog("IDET SLIV");
		TimerStart(127);
		DRAIN_DISABLE;
		lcdLog("KONEC PROGRAMMY");
}