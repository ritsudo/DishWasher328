/* BASED ON LCD1602 by narodstream.ru */

#include "lcd1602.h"

void sendData(unsigned char c) {
	c <<= LCD_D4;
	e1;
	_delay_us(50);
	PORT_LCD&=~(0xF<<LCD_D4); //CLEAR LCD
	PORT_LCD|=c;	
	e0;
	_delay_us(50);
}

void sendByte(unsigned char c, unsigned char mode) {
	// # 0 for CMD | 1 for DATA
	if (mode==0) rs0;
	else rs1;
	unsigned char hc=0;
	hc=c>>4;
	sendData(hc);
	sendData(c);
}

void clearDisplay() {
	sendByte(0x1, 0);
	_delay_ms(1);
}

void LCD_init(void) {
	DDR_LCD = 0xFF;
	PORT_LCD = 0x00;
  	_delay_ms(15); //CMD base init 4 bit mode
  	sendData(0b00000011);
  	_delay_ms(4);
  	sendData(0b00000011);
 	_delay_us(100);
 	sendData(0b00000011);
 	_delay_ms(1);
	sendData(0b00000010);
	_delay_ms(1);
	sendByte(0b00101000, 0); //CMD set mode 4 bit, 2 line, font size
	_delay_ms(1);
	sendByte(0b00001100, 0); //controls display (en), cursor (dis) and cursor blink (dis)
	_delay_ms(1);
}

void sendLetter(char letter) {
	sendByte(0b00000110, 0);
	sendByte(letter, 1);
	_delay_ms(1);
}

void lcdLog(char str1[]) {
	clearDisplay();
	sendLetter(0x20);
	wchar_t n;
	for(n=0;str1[n]!='\0';n++) {
		sendLetter(str1[n]);
	}
}