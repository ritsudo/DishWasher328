/*
 * Machinery.h
 *
 * Created: 13.07.2022 3:13:59
 *  Author: Victor
 */ 


#ifndef MACHINERY_H_
#define MACHINERY_H_

#include "DishWasher328.h"

void initialize();
void errorNoSalt();
void procedureStop();
void aqsTriggered();
void debugFullLog();
void debugInputLog();
void clearOutputPort();


#endif /* MACHINERY_H_ */