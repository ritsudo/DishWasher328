#define F_CPU 6000000

/*--------------------------------------------------------------------*/

#define DDR_OUT DDRD	//DEFINE OUTPUT PORT AS D - указать шину для выходного порта (у нас порт D)
#define PORT_OUT PORTD	//DEFINE OUTPUT PORT AS D - указать шину для выходного порта (у нас порт D)

#define O_HEATER 0		//PIN NUMBER FOR HEATER - номер пина для ТЭНа
#define O_DRAIN 1		//PIN NUMBER FOR DRAIN - номер пина для сливной помпы
#define O_TANK 2		//PIN NUMBER FOR TANK - номер пина для соленоида бака
#define O_DISPENSER 3	//PIN NUMBER FOR DISPENSER - номер пина для дозатора
#define O_INLET 4		//PIN NUMBER FOR INLET - номер пина для залива воды
#define O_PUMPL 5		//PIN NUMBER FOR PUMP Low speed - номер пина для ЦН (низкая скорость)
#define O_PUMPH 6		//PIN NUMBER FOR PUMP High speed - номер пина для ЦН (высокая скорость)

/*--------------------------------------------------------------------*/

#define DDR_IN DDRC		//DEFINE INPUT PORT AS C - указать шину для входного порта (у нас порт C)
#define PORT_IN PORTC	//DEFINE INPUT PORT AS C - указать шину для входного порта (у нас порт C)
#define PIN_IN PINC		//DEFINE INPUT PORT AS C - указать шину для входного порта (у нас порт C)

#define IN_RS 0			//INPUT FOR THERMORESISTOR - вход терморезистора (АЦП)
#define IN_FM 1			//INPUT FOR FLUID METER - вход измерителя уровня жидкости
#define IN_IAQS 2		//INPUT FOR AQUASTOP - вход переключателя аквастопа (защиты)
#define IN_ISS 3		//INPUT FOR SALT METER - вход измерителя уровня соли

#define IN_ISB -1		//INPUT FOR DOOR WASHER SWITCH - вход измерителя ополаскивателя в двери TODO define
#define IN_DOOR -1		//INPUT FOR DOOR OPEN SWITCH - вход для датчика двери TODO define

/*--------------------------------------------------------------------*/

#define DDR_LCD DDRB	//DEFINE OUTPUT PORT AS D - указать шину для выходн. LCD (у нас порт B). Названия пинов соотв. LCD1602
#define PORT_LCD PORTB	//DEFINE OUTPUT PORT AS D - указать шину для выходн. LCD (у нас порт B). Названия пинов соотв. LCD1602

#define LCD_RS 0
#define LCD_E 1
#define LCD_D4 2		
#define LCD_D5 3		
#define LCD_D6 4		
#define LCD_D7 5		

/*--------------------------------------------------------------------*/

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDR_OUT = 0xFF;
	
    while(1) //PORTD TEST PROGRAM
    {
		PORT_OUT |= (1<<O_HEATER);
        unsigned int i = 0;
		while (i <= 6) {
			PORT_OUT = (1<<i);
			i += 1;
			_delay_ms(1000);
		}
			
    }
}