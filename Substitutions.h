#ifndef SUBSTITUTIONS_H_
#define SUBSTITUTIONS_H_

#include "Config.h"

/*--------------------------------------------------------------------*/

#define HEATER_ENABLE PORT_OUT|=(1<<O_HEATER)				//ENABLE HEATER - включение ТЭНа
#define DRAIN_ENABLE PORT_OUT|=(1<<O_DRAIN)					//ENABLE DRAIN - включение сливной помпы
#define TANK_ENABLE PORT_OUT|=(1<<O_TANK)					//ENABLE TANK - включение соленоида бака
#define DISPENSER_ENABLE PORT_OUT|=(1<<O_DISPENSER)			//ENABLE DISPENSER - включение дозатора
#define INLET_ENABLE PORT_OUT|=(1<<O_INLET)					//ENABLE INLET - включение залива воды
#define PUMPL_ENABLE PORT_OUT|=(1<<O_PUMPL)					//ENABLE PUMPL - включение ЦН (низкая скорость)
#define PUMPH_ENABLE PORT_OUT|=(1<<O_PUMPH)					//ENABLE PUMPH - включение ЦН (высокая скорость)

#define HEATER_DISABLE PORT_OUT&=~(1<<O_HEATER)				//DISABLE HEATER - выключение ТЭНа
#define DISPENSER_DISABLE PORT_OUT&=~(1<<O_DISPENSER)		//DISABLE DISPENSER - выключение дозатора

/*--------------------------------------------------------------------*/

#define BTN_POWER_ACTIVE (PIN_IN>>BTN_POWER&0x01)==BTN_POWER_ACTIVE_STATE //Define POWER KEY is pressed (when set to 0)
#define AQS_TRIGGERED (PIN_IN>>IN_IAQS&0x01)==AQS_ACTIVE_STATE
#define FLUID_HOLD (PIN_IN>>IN_FM&0x01)==FM_ACTIVE_STATE //Define FM is triggered
#define ISS_EMPTY (PIN_IN>>IN_ISS&0x01)==ISS_ACTIVE_STATE //Define ISS is triggered (when set to 0)
#define ISB_EMPTY (PIN_IN>>IN_ISB&0x01)==ISB_ACTIVE_STATE //Define ISB is triggered (when set to 0)
#define DOOR_OPENED (PIN_IN>>IN_DOOR&0x01)==DOOR_ACTIVE_STATE //Define IAQS is triggered (when set to 0)

/*--------------------------------------------------------------------*/


#endif /* SUBSTITUTIONS_H_ */