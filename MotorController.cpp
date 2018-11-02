/*
 * MotorController.cpp
 *
 *  Created on: 25 okt. 2018
 *      Author: Wouter
 */

#include "MotorController.h"

MotorController::MotorController() {
	pinMode(MOTOR_LEFT_POWER, OUTPUT);
	pinMode(MOTOR_LEFT_DIRECTION, OUTPUT);

	analogWrite(MOTOR_LEFT_POWER, false);
	digitalWrite(MOTOR_LEFT_DIRECTION, false);
}

MotorController::~MotorController() {
	// TODO Auto-generated destructor stub
}

void MotorController::setSpeed(int8_t speeds[2])
{
	bool directions[2];

	for(int i=0; i<2; i++)
	{
		if(speeds[i] < 0) { directions[i] = true; }
		else { directions[i] = false; }
	}
	setDirection(directions);

	analogWrite(MOTOR_LEFT_POWER, abs(speeds[0]));
	analogWrite(MOTOR_RIGHT_POWER, abs(speeds[1]));
}

void MotorController::setDirection(bool directions[2])
{
	digitalWrite(MOTOR_LEFT_DIRECTION, directions[0]);
	digitalWrite(MOTOR_RIGHT_DIRECTION, directions[1]);
}

