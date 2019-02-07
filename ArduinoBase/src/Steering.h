/*
 * Steering.h
 *
 *  Created on: 12 nov. 2018
 *      Author: Wouter
 */

#ifndef SRC_STEERING_H_
#define SRC_STEERING_H_

#include <Arduino.h>

#include "Macros.h"
#include "Servo.h"

class Steering {
private:
	Servo leftServo;
	Servo rightServo;
public:
	Steering();
	virtual ~Steering();
	void MoveWheel(uint8_t servoPosition[2]);
};

#endif /* SRC_STEERING_H_ */
