// Do not remove the include below
#include "Arduino_base.h"

MotorController motorController;
Steering steering;
PrintOut printOut;

I2C i2c;

int16_t speedVals[2] = {0, 0};


//Test

void setup()
{
	printOut.versionPrintOut();

	initInterrupts(MOTOR_LEFT_HALL_F);
	setWheelCounterValues(BOTH);

	motorController.setSpeed(speedVals);
}

void loop()
{
	//motorController.setSpeed(speedVals);
	//delay(200);

	//speedVals[0] = speedVals[0] + 5;
	//speedVals[1] = speedVals[1] + 5;
}

// callback for received data

