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

	// Set the wheel speeds to zero in the beginning
	int16_t initSpeeds[NUMBER_OF_MOTORS];
	for(int i=0; i<NUMBER_OF_MOTORS; i++)
	{
		initSpeeds[i] = 0;
	}
}

MotorController::~MotorController() {
	// TODO Auto-generated destructor stub
}

void MotorController::setSpeed(int16_t speeds[NUMBER_OF_MOTORS])
{
	bool directions[NUMBER_OF_MOTORS];

	for(int i=0; i<NUMBER_OF_MOTORS; i++)
	{
		// find out the direction of each motor
		if(speeds[i] < 0) { directions[i] = true; }
		else { directions[i] = false; }

		// make sure a underflow/overflow doesn't occur
		speeds[i] = constrain(speeds[i], -255, 255);
	}
	setDirection(directions);

	analogWrite(MOTOR_LEFT_POWER, abs(speeds[0]));
	analogWrite(MOTOR_RIGHT_POWER, abs(speeds[1]));
}

void MotorController::setDirection(bool directions[NUMBER_OF_MOTORS])
{
	digitalWrite(MOTOR_LEFT_DIRECTION, directions[0]);
	digitalWrite(MOTOR_RIGHT_DIRECTION, directions[1]);
}
