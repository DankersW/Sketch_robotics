#include <Arduino.h>

#include "src/Macros.h"
#include "src/InterruptHandlers.h"
#include "src/MotorController.h"

MotorController motorController;

void setup()
{
	// Init wheel encoder interrupts
	initInterrupts(MOTOR_LEFT_HALL_F);
	setWheelCounterValues(BOTH);
}

void loop()
{

}
