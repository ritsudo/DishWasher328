#include "CountdownTimer.h"

unsigned int CountdownValue = 0;

void TimerInit() {
	
}

void TimerStart(unsigned int TimeValue) {
	CountdownValue = TimeValue;
	while(CountdownValue > 0) {
		_delay_ms(100);
		CountdownValue -= 1;
	}
}

void TimerPause() {
	
}