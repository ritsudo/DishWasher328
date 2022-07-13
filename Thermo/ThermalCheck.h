/*
 * ThermalCheck.h
 *
 * Created: 12.07.2022 7:41:20
 *  Author: Victor
 */ 


#ifndef THERMALCHECK_H_
#define THERMALCHECK_H_

#include <avr/io.h>
#include "../DishWasher328.h"

void InitThermometer();
unsigned int CheckTemperature();


#endif /* THERMALCHECK_H_ */