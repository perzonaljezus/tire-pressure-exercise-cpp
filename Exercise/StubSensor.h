/* 
 * File:   StubSensor.h
 * Author: benwu
 *
 * Created on July 11, 2014, 9:59 PM
 */

#ifndef STUBSENSOR_H
#define	STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
    void arrangeReturnPressureValue(double);
    void arrangeReturnPressureValues(double, double, double);
    double popNextPressurePsiValue() override;
private:
    double *pressureValues[3];

};

#endif	/* STUBSENSOR_H */

