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
	void setSpeed(int8_t speeds[2]);
private:
	void setDirection(bool directions[2]);
};

#endif /* SRC_MOTORCONTROLLER_H_ */
