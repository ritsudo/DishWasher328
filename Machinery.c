/*
 * Machinery.c
 *
 * Created: 13.07.2022 3:13:29
 *  Author: Victor
 */ 

#include "Machinery.h"

void initialize() {
	DDR_OUT = 0xFF;
	DDR_IN = 0x00;
	PORT_IN = 0x00;
	LCD_init();
	TimerISRInit();
	InitThermometer();
	InitFluidMeter();
	adcValue = CheckTemperature();
	lcdLog(MACHINE_NAME);
}

void errorNoSalt() {
	lcdLog("WARN: LOW SALT");
}

void clearOutputPort() {
	PORT_OUT = 0x00;
}

void error(char errText[]) {
	procedureStop();
	lcdLog(errText);
	_delay_ms(100);
}

void procedureStop() {
	TimerPause();
	clearOutputPort();
	lcdLog("STOP by user");
}

void debugFullLog() {
	char lcdVal[] = "F000 C0000 00:00";
	adcValue = CheckTemperature();
	
	lcdVal[1] =   (currentFluidCount%1000)/100+0x30;
	lcdVal[2] =   (currentFluidCount%100)/10+0x30;
	lcdVal[3] =   currentFluidCount%10+0x30;
	
	lcdVal[6] =     adcValue/1000+0x30;
	lcdVal[7] =   (adcValue%1000)/100+0x30;
	lcdVal[8] =   (adcValue%100)/10+0x30;
	lcdVal[9] =   adcValue%10+0x30;
	
	lcdVal[11] = 0x30 + (CountdownValue / 600);
	lcdVal[12] = 0x30 + ((CountdownValue % 600)/60);
	lcdVal[14] = 0x30 + ((CountdownValue-((CountdownValue/60)*60))/10);
	lcdVal[15] = 0x30 + ((CountdownValue-((CountdownValue/60)*60))%10);
	
	lcdLog(lcdVal);
}

void debugInputLog() {
	char pinin[] = "000000  ";
	pinin[0] = 0x30 + (PIN_IN>>BTN_POWER & 0x01);
	pinin[1] = 0x30 + (PIN_IN>>BTN_CANCEL & 0x01);
	pinin[2] = 0x30 + (PIN_IN>>IN_RS & 0x01);
	pinin[3] = 0x30 + (PIN_IN>>IN_FM & 0x01);
	pinin[4] = 0x30 + (PIN_IN>>IN_IAQS & 0x01);
	pinin[5] = 0x30 + (PIN_IN>>IN_ISS & 0x01);
	lcdLog(pinin);
	_delay_ms(200);
}
