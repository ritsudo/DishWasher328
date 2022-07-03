#ifndef SUBSTITUTIONS_H_
#define SUBSTITUTIONS_H_

#include "Config.h"

/*--------------------------------------------------------------------*/

#define HEATER_ENABLE PORT_OUT|=(1<<O_HEATER)				//ENABLE HEATER - включение ТЭНа
#define HEATER_DISABLE PORT_OUT&=~(1<<O_HEATER)				//DISABLE HEATER - выключение ТЭНа
#define DRAIN_ENABLE PORT_OUT|=(1<<O_DRAIN)					//ENABLE DRAIN - включение сливной помпы
#define DRAIN_DISABLE PORT_OUT&=~(1<<O_DRAIN)				//DISABLE DRAIN - выключение сливной помпы
#define TANK_ENABLE PORT_OUT|=(1<<O_TANK)					//ENABLE TANK - включение соленоида бака
#define TANK_DISABLE PORT_OUT&=~(1<<O_TANK)					//DISABLE TANK - выключение соленоида бака
#define DISPENSER_ENABLE PORT_OUT|=(1<<O_DISPENSER)			//ENABLE DISPENSER - включение дозатора
#define DISPENSER_DISABLE PORT_OUT&=~(1<<O_DISPENSER)		//DISABLE DISPENSER - выключение дозатора
#define INLET_ENABLE PORT_OUT|=(1<<O_INLET)					//ENABLE INLET - включение залива воды
#define INLET_DISABLE PORT_OUT&=~(1<<O_INLET)				//DISABLE INLET - выключение залива воды
#define PUMPL_ENABLE PORT_OUT|=(1<<O_PUMPL)					//ENABLE PUMPL - включение ЦН (низкая скорость)
#define PUMPL_DISABLE PORT_OUT&=~(1<<O_PUMPL)				//DISABLE PUMPL - выключение ЦН (низкая скорость)
#define PUMPH_ENABLE PORT_OUT|=(1<<O_PUMPH)					//ENABLE PUMPH - включение ЦН (высокая скорость)
#define PUMPH_DISABLE PORT_OUT&=~(1<<O_PUMPH)				//DISABLE PUMPH - выключение ЦН (высокая скорость)


/*--------------------------------------------------------------------*/




#endif /* SUBSTITUTIONS_H_ */