/*
 * MotorController.cpp
 *
 *  Created on: 25 okt. 2018
 *      Author: Wouter
 */

#include "MotorController.h"

MotorController::MotorController() {
	pinMode(MOTOR_LEFT_ENABLE, OUTPUT);
	pinMode(MOTOR_LEFT_DIRECTION, OUTPUT);

	digitalWrite(MOTOR_LEFT_ENABLE, false);
	digitalWrite(MOTOR_LEFT_DIRECTION, false);
}

MotorController::~MotorController() {
	// TODO Auto-generated destructor stub
}

void setSpeed(int speeds[2])
{

}

void setDirection(bool directions[2])
{

}

