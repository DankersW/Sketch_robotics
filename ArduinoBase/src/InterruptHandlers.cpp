/*
 * InterruptHandlers.cpp
 *
 *  Created on: 21 okt. 2018
 *      Author: wouter
 */

#include "InterruptHandlers.h"

unsigned long leftWheelCounter = 0;
unsigned long rightWheelCounter = 0;

void initInterrupts(char channel)
{
	pinMode(channel, INPUT_PULLUP);
	if(channel == 2)
	{
		// left wheel --> int0
		attachInterrupt(digitalPinToInterrupt(channel), leftWheelTickInterruptRoutine, RISING);
	}
	else if(channel == 3)
	{
		// right wheel --> int1
		attachInterrupt(digitalPinToInterrupt(channel), rightWheelTickInterruptRoutine, RISING);
	}
}

void leftWheelTickInterruptRoutine()
{
	leftWheelCounter++;
}

void rightWheelTickInterruptRoutine()
{
	rightWheelCounter++;
}

void setWheelCounterValues(WHEEL wheel)
{
	switch (wheel)
	{
		case LEFT:
			leftWheelCounter = 0;
			break;
		case RIGHT:
			rightWheelCounter = 0;
			break;
		case BOTH:
			leftWheelCounter = 0;
			rightWheelCounter = 0;
			break;
		default:
			break;
	}
}

unsigned long getWheelCounterValue(WHEEL wheel)
{
	switch (wheel)
	{
		case LEFT:
			return leftWheelCounter;
		case RIGHT:
			return rightWheelCounter;
		default:
			return -1;
	}
}
