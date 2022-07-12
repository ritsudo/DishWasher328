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
#define BTN_POWER_ACTIVE_STATE 0 //0 is button port active state
#define AQS_ACTIVE_STATE 0 //0 is aqs port active state
#define FM_ACTIVE_STATE 0
#define ISS_ACTIVE_STATE 0
#define ISB_ACTIVE_STATE 0
#define DOOR_ACTIVE_STATE 0


/*--------------------------------------------------------------------*/

#define BTN_POWER_ACTIVE (PIN_IN>>BTN_POWER&0x01)==BTN_POWER_ACTIVE_STATE //Define POWER KEY is pressed (when set to 0)
#define AQS_TRIGGERED (PIN_IN>>IN_IAQS&0x01)==AQS_ACTIVE_STATE
#define FM_FILLED (PIN_IN>>IN_FM&0x01)==FM_ACTIVE_STATE //Define IAQS is triggered (when set to 0)
#define ISS_FILLED (PIN_IN>>IN_ISS&0x01)==ISS_ACTIVE_STATE //Define IAQS is triggered (when set to 0)

//#define HATCH_OPENED

/*--------------------------------------------------------------------*/

#endif /* CONFIG_H_ */