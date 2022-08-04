#include "ThermalCheck.h"
#define K_TEMP 13

void InitThermometer() {
	ADCSRA |= (1<<ADEN)
	|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
	ADMUX |= (0<<REFS1)|(0<<REFS0); //AREF pin
	ADMUX |= IN_RS; //input 5
}

unsigned int CheckTemperature() {
	ADCSRA |= (1<<ADSC); 
	while((ADCSRA & (1<<ADSC))); 
	return (unsigned int) ADCW;
}

unsigned int getCelsiumTemperature() {
	return (unsigned int) ((1024-adcValue)/K_TEMP);
}