#ifndef ALARM_H
#define ALARM_H

#include "Sensor.h"

class Alarm {
public:
	Alarm();
	void check();
	bool isAlarmOn();
	static const double LOW_PRESSURE_THRESHOLD;
	static const double HIGH_PRESSURE_THRESHOLD;
private:
	Sensor* sensor;
	bool alarmOn;
};

#endif /* ALARM_H */