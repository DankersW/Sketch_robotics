/*
 * MotorController.h
 *
 *  Created on: 25 okt. 2018
 *      Author: Wouter
 */

#ifndef SRC_MOTORCONTROLLER_H_
#define SRC_MOTORCONTROLLER_H_

#include <Arduino.h>

#include "Macros.h"


class MotorController {
public:
	MotorController();
	virtual ~MotorController();
	void setSpeed(int16_t speeds[NUMBER_OF_MOTORS]);
private:
	void setDirection(bool directions[NUMBER_OF_MOTORS]);
};

#endif /* SRC_MOTORCONTROLLER_H_ */
