#ifndef CONFIG_H_
#define CONFIG_H_

/*--------------------------------------------------------------------*/
#define MACHINE_NAME "Hansa / welcome"

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

#define IN_RS 2			//INPUT FOR THERMORESISTOR - ���� �������������� (���)
#define IN_FM 3			//INPUT FOR FLUID METER - ���� ���������� ������ ��������
#define IN_IAQS 4		//INPUT FOR AQUASTOP - ���� ������������� ��������� (������)
#define IN_ISS 5		//INPUT FOR SALT METER - ���� ���������� ������ ����

#define BTN_POWER 0		//BUTTON INPUT 1 - ���� ������ 1
#define BTN_CANCEL 1	//BUTTON INPUT 2 - ���� ������ 2

#define IN_ISB -1		//INPUT FOR DOOR WASHER SWITCH - ���� ���������� �������������� � ����� TODO define
#define IN_DOOR -1		//INPUT FOR DOOR OPEN SWITCH - ���� ��� ������� ����� TODO define


/*--------------------------------------------------------------------*/

#endif /* CONFIG_H_ */