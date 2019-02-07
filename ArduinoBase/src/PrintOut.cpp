/*
 * PrintOut.cpp
 *
 *  Created on: 14 nov. 2018
 *      Author: Wouter
 */

#include "PrintOut.h"

PrintOut::PrintOut() {
	// TODO Auto-generated constructor stub

}

PrintOut::~PrintOut() {
	// TODO Auto-generated destructor stub
}

void PrintOut::versionPrintOut()
{
	Serial.begin(9600);
	Serial.println("---------------------------------------");
	Serial.print("|  SKETCH ROBOTICS  |  Version: ");
	Serial.print(PROGRAM_VERSION);
	Serial.println("  |");
	Serial.println("---------------------------------------");
}

void PrintOut::Debug(String debugOutput)
{

}
