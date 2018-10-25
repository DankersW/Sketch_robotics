/*
 * InterruptHandlers.h
 *
 *  Created on: 20 okt. 2018
 *      Author: Wouter
 */

#ifndef INTERRUPTHANDLERS_H_
#define INTERRUPTHANDLERS_H_

#include <Arduino.h>

enum WHEEL {LEFT, RIGHT, BOTH};

extern unsigned long leftWheelCounter;
extern unsigned long rightWheelCounter;

void initInterrupts(char pin);
void leftWheelTickInterruptRoutine();
void rightWheelTickInterruptRoutine();
void setWheelCounterValues(WHEEL wheel);
unsigned long getWheelCounterValue(WHEEL wheel);

#endif /* INTERRUPTHANDLERS_H_ */
