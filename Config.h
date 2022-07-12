#ifndef CONFIG_H_
#define CONFIG_H_

/*--------------------------------------------------------------------*/
#define MACHINE_NAME "Hansa / welcome"

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

#define IN_RS 2			//INPUT FOR THERMORESISTOR - вход терморезистора (АЦП)
#define IN_FM 3			//INPUT FOR FLUID METER - вход измерителя уровня жидкости
#define IN_IAQS 4		//INPUT FOR AQUASTOP - вход переключателя аквастопа (защиты)
#define IN_ISS 5		//INPUT FOR SALT METER - вход измерителя уровня соли

#define BTN_POWER 0		//BUTTON INPUT 1 - вход кнопки 1
#define BTN_CANCEL 1	//BUTTON INPUT 2 - вход кнопки 2

#define IN_ISB -1		//INPUT FOR DOOR WASHER SWITCH - вход измерителя ополаскивателя в двери TODO define
#define IN_DOOR -1		//INPUT FOR DOOR OPEN SWITCH - вход для датчика двери TODO define


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