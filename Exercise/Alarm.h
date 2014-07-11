#ifndef ALARM_H
#define ALARM_H

#include "Sensor.h"
#include "Transducer.h"

class Alarm {
public:
	Alarm();
        Alarm(Transducer *transducer);
	void check();
	bool isAlarmOn();
	static const double LOW_PRESSURE_THRESHOLD;
	static const double HIGH_PRESSURE_THRESHOLD;
private:
	Sensor* sensor;
	bool alarmOn;
        Transducer *transducer;
};

#endif /* ALARM_H */