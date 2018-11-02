#include <Arduino.h>

#include "src/Macros.h"
#include "src/InterruptHandlers.h"
#include "src/MotorController.h"
#include "src/Steering.h"

MotorController motorController;
Steering steering;

int8_t speedVals[2] = {0, 0};

void setup()
{
	// Init wheel encoder interrupts
	initInterrupts(MOTOR_LEFT_HALL_F);
	setWheelCounterValues(BOTH);
	MotorController motorController;
}

void loop()
{
	motorController.setSpeed(speedVals);
	delay(200);
	speedVals[0] = speedVals[0] + 5;
	speedVals[1] = speedVals[1] + 5;
}
