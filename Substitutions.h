#ifndef SUBSTITUTIONS_H_
#define SUBSTITUTIONS_H_

#include "Config.h"

/*--------------------------------------------------------------------*/

#define HEATER_ENABLE PORT_OUT|=(1<<O_HEATER)				//ENABLE HEATER - ��������� ����
#define HEATER_DISABLE PORT_OUT&=~(1<<O_HEATER)				//DISABLE HEATER - ���������� ����
#define DRAIN_ENABLE PORT_OUT|=(1<<O_DRAIN)					//ENABLE DRAIN - ��������� ������� �����
#define DRAIN_DISABLE PORT_OUT&=~(1<<O_DRAIN)				//DISABLE DRAIN - ���������� ������� �����
#define TANK_ENABLE PORT_OUT|=(1<<O_TANK)					//ENABLE TANK - ��������� ��������� ����
#define TANK_DISABLE PORT_OUT&=~(1<<O_TANK)					//DISABLE TANK - ���������� ��������� ����
#define DISPENSER_ENABLE PORT_OUT|=(1<<O_DISPENSER)			//ENABLE DISPENSER - ��������� ��������
#define DISPENSER_DISABLE PORT_OUT&=~(1<<O_DISPENSER)		//DISABLE DISPENSER - ���������� ��������
#define INLET_ENABLE PORT_OUT|=(1<<O_INLET)					//ENABLE INLET - ��������� ������ ����
#define INLET_DISABLE PORT_OUT&=~(1<<O_INLET)				//DISABLE INLET - ���������� ������ ����
#define PUMPL_ENABLE PORT_OUT|=(1<<O_PUMPL)					//ENABLE PUMPL - ��������� �� (������ ��������)
#define PUMPL_DISABLE PORT_OUT&=~(1<<O_PUMPL)				//DISABLE PUMPL - ���������� �� (������ ��������)
#define PUMPH_ENABLE PORT_OUT|=(1<<O_PUMPH)					//ENABLE PUMPH - ��������� �� (������� ��������)
#define PUMPH_DISABLE PORT_OUT&=~(1<<O_PUMPH)				//DISABLE PUMPH - ���������� �� (������� ��������)


/*--------------------------------------------------------------------*/




#endif /* SUBSTITUTIONS_H_ */