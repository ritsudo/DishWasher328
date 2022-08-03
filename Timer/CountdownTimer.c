//TIMER INIT BASED ON LIB BY narodstream.ru

#include "CountdownTimer.h"

//TODO TIMER

void TimerISRInit() { //PREINIT TIMER B VALUES
	TCCR1B |= (1<<WGM12);
	OCR1AH = 0b00010110;
	OCR1AL = 0b11100011;
	TCCR1B |= ((1<<CS12)|(1<<CS10));
	sei();
}

void TimerInit(unsigned int TimeValue, unsigned int NextPhase) {
	if (NextPhase > 0) {
		CountdownValue = TimeValue;
		CurrentPhase = NextPhase - 1;
		TimerStart();
	}
}

void TimerStart() {
	TIMSK1 |= (1<<OCIE1A);
}

// ISR_COMPA_VECT AS TIMER TICK

ISR (TIMER1_COMPA_vect) {
	if (CountdownValue > 0) {
		debugFullLog(); //log time if timer is still counting
		CountdownValue -= 1; //decrease time
	}
	else {
		lcdLog("Timer finished");
		if (CurrentPhase < 99) { //Mov to next program phase if timer finished
			clearOutputPort(); //clears output port state
			DoWashing(CurrentPhase + 1);
		} else {
			lcdLog("Program finished");
			TimerPause();
		}
	}
}

//
void TimerPause() {
	TIMSK1 &=~(1<<OCIE1A);
//	lcdLog("Timer disabled");
}