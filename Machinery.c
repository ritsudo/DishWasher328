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
	lcdLog(MACHINE_NAME);
}

void errorNoSalt() {
	lcdLog("WARN: LOW SALT");
}

void clearOutputPort() {
	PORT_OUT = 0x00;
}

void procedureStop() {
	TimerPause();
	clearOutputPort();
	lcdLog("STOP by user");
	if (AQS_TRIGGERED) lcdLog("AQS TRIGGERED");
	//if (HATCH_OPENED) lcdLog("DOOR IS OPENED");
	_delay_ms(200); //200 ms delay to avoid reclick
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

