/*
 * lcd1602.h
 *
 * Created: 03.07.2022 3:53:53
 *  Author: Victor
 */ 


#ifndef LCD1602_H_
#define LCD1602_H_

#include <stddef.h>

#include "../DishWasher328.h"
#include "../Config.h"

void sendData(unsigned char c);
void sendByte(unsigned char c, unsigned char mode);
void LCD_init(void);
void sendLetter(char letter);
void lcdLog(char str1[]);

/*--------------------------------------------------------------------*/

#define DDR_LCD DDRB	//DEFINE OUTPUT PORT AS D - указать шину для выходн. LCD (у нас порт B). Названия пинов соотв. LCD1602
#define PORT_LCD PORTB	//DEFINE OUTPUT PORT AS D - указать шину для выходн. LCD (у нас порт B). Названия пинов соотв. LCD1602

#define LCD_RS 0
#define LCD_E 1
#define LCD_D4 2 //DEFINE LCD_D4 PIN AS FIRST, D5 AS D4+1 ETC. EXAMPLE: 2-6

/*--------------------------------------------------------------------*/

#define e1 PORT_LCD|=(1<<LCD_E)
#define e0 PORT_LCD&=~(1<<LCD_E)
#define rs1 PORT_LCD|=(1<<LCD_RS)
#define rs0 PORT_LCD&=~(1<<LCD_RS)

/*--------------------------------------------------------------------*/




#endif /* LCD1602_H_ */