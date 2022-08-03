#ifndef DISHWASHER328_H_
#define DISHWASHER328_H_

#include "Substitutions.h"
#include "LCD/lcd1602.h"
#include "Timer/CountdownTimer.h"
#include "Programs/MainCycle.h"
#include "Thermo/ThermalCheck.h"
#include "FluidMeter/Fluid.h"
#include "Machinery.h"

#define F_CPU 6000000

#include <avr/io.h>
#include <util/delay.h>

unsigned int CountdownValue;
unsigned int CurrentPhase;
unsigned int currentFluidCount;
unsigned int adcValue;
unsigned char running;

void initialize();

#endif /* DISHWASHER328_H_ */