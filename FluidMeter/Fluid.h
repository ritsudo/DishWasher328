/*
 * Fluid.h
 *
 * Created: 18.07.2022 17:06:51
 *  Author: Victor
 */ 


#ifndef FLUID_H_
#define FLUID_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "../DishWasher328.h"

void InitFluidMeter();
void CountFluid(unsigned int requiredCount, unsigned int nextPhase);

#endif /* FLUID_H_ */