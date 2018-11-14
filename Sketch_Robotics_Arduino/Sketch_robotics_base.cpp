#include <Arduino.h>

#include "src/Macros.h"
#include "src/InterruptHandlers.h"
#include "src/MotorController.h"
#include "src/Steering.h"
#include "src/PrintOut.h"


PrintOut printOut;
MotorController motorController;
Steering steering;

int16_t speedVals[2] = {0, 0};

void setup()
{
	printOut.versionPrintOut();

	initInterrupts(MOTOR_LEFT_HALL_F);
	setWheelCounterValues(BOTH);
}

void loop()
{
	//motorController.setSpeed(speedVals);
	//delay(200);

	//speedVals[0] = speedVals[0] + 5;
	//speedVals[1] = speedVals[1] + 5;

	//Serial.print("Speeds: \t");
	//Serial.println(speedVals[0]);
	//Serial.println(speedVals[0] + "\t" + speedVals[1]);
	//Serial.println("testing");
}
