/* 
 * File:   StubSensor.cpp
 * Author: benwu
 * 
 * Created on July 11, 2014, 9:59 PM
 */

#include "StubSensor.h"

void StubSensor::arrangeReturnPressureValue(double pressureValue) {
  pressureValues[0] = pressureValue;
}

void StubSensor::arrangeReturnPressureValues(double valueNormal
  , double valueOutOfRange, double valueNormalAgain) {
  pressureValues[0] = valueNormal;
  pressureValues[1] = valueOutOfRange;
  pressureValues[2] = valueNormalAgain;
}

double StubSensor::popNextPressurePsiValue() {
  return returnPressureValue;
}
