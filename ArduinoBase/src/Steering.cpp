/*
 * Steering.cpp
 *
 *  Created on: 12 nov. 2018
 *      Author: Wouter
 */

#include "Steering.h"

Steering::Steering()
{
	leftServo.attach(STEERING_LEFT);
	rightServo.attach(STEERING_RIGHT);

	uint8_t servoPos[2] = {STRAIGHT_WHEEL_LEFT, STRAIGHT_WHEEL_RIGHT};
	MoveWheel(servoPos);
}

Steering::~Steering()
{

}

void Steering::MoveWheel(uint8_t servoPosition[2] )
{
	leftServo.write(servoPosition[0]);
	rightServo.write(servoPosition[1]);
}
