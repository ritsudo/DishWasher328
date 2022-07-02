#define F_CPU 6000000

/*--------------------------------------------------------------------*/

#define DDR_OUT DDRD	//DEFINE OUTPUT PORT AS D - ������� ���� ��� ��������� ����� (� ��� ���� D)
#define PORT_OUT PORTD	//DEFINE OUTPUT PORT AS D - ������� ���� ��� ��������� ����� (� ��� ���� D)

#define O_HEATER 0		//PIN NUMBER FOR HEATER - ����� ���� ��� ����
#define O_DRAIN 1		//PIN NUMBER FOR DRAIN - ����� ���� ��� ������� �����
#define O_TANK 2		//PIN NUMBER FOR TANK - ����� ���� ��� ��������� ����
#define O_DISPENSER 3	//PIN NUMBER FOR DISPENSER - ����� ���� ��� ��������
#define O_INLET 4		//PIN NUMBER FOR INLET - ����� ���� ��� ������ ����
#define O_PUMPL 5		//PIN NUMBER FOR PUMP Low speed - ����� ���� ��� �� (������ ��������)
#define O_PUMPH 6		//PIN NUMBER FOR PUMP High speed - ����� ���� ��� �� (������� ��������)

/*--------------------------------------------------------------------*/

#define DDR_IN DDRC		//DEFINE INPUT PORT AS C - ������� ���� ��� �������� ����� (� ��� ���� C)
#define PORT_IN PORTC	//DEFINE INPUT PORT AS C - ������� ���� ��� �������� ����� (� ��� ���� C)
#define PIN_IN PINC		//DEFINE INPUT PORT AS C - ������� ���� ��� �������� ����� (� ��� ���� C)

#define IN_RS 0			//INPUT FOR THERMORESISTOR - ���� �������������� (���)
#define IN_FM 1			//INPUT FOR FLUID METER - ���� ���������� ������ ��������
#define IN_IAQS 2		//INPUT FOR AQUASTOP - ���� ������������� ��������� (������)
#define IN_ISS 3		//INPUT FOR SALT METER - ���� ���������� ������ ����

#define IN_ISB -1		//INPUT FOR DOOR WASHER SWITCH - ���� ���������� �������������� � ����� TODO define
#define IN_DOOR -1		//INPUT FOR DOOR OPEN SWITCH - ���� ��� ������� ����� TODO define

/*--------------------------------------------------------------------*/

#define DDR_LCD DDRB	//DEFINE OUTPUT PORT AS D - ������� ���� ��� ������. LCD (� ��� ���� B). �������� ����� �����. LCD1602
#define PORT_LCD PORTB	//DEFINE OUTPUT PORT AS D - ������� ���� ��� ������. LCD (� ��� ���� B). �������� ����� �����. LCD1602

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