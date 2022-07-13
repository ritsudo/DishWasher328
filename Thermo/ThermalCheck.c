#include "ThermalCheck.h"

void InitThermometer() {
	ADCSRA |= (1<<ADEN)
	|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
	ADMUX |= (0<<REFS1)|(1<<REFS0); //5V internal to AREF pin
	ADMUX |= IN_RS; //input 5
}

unsigned int CheckTemperature() {
	ADCSRA |= (1<<ADSC); 
	while((ADCSRA & (1<<ADSC))); 
	return (unsigned int) ADCW;
}