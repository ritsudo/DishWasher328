
#ifndef COUNTDOWNTIMER_H_
#define COUNTDOWNTIMER_H_

#include <avr/interrupt.h>
#include "../DishWasher328.h"
#include "../Config.h"

void TimerISRInit();
void TimerInit(unsigned int TimeValue, unsigned int NextPhase);
void TimerStart();
void TimerPause();

#endif /* COUNTDOWNTIMER_H_ */