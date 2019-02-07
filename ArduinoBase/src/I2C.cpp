/*
 * I2C.cpp
 *
 *  Created on: 24 jan. 2019
 *      Author: a293795
 */

#include "I2C.h"

#include <Arduino.h>

int command = 0;

I2C::I2C() {
	// TODO Auto-generated constructor stub
	Wire.begin(SLAVE_ADDRESS);

	//command=0;

	Wire.onReceive(receiveData);
	Wire.onRequest(sendData);

	Serial.begin(9600);
	Serial.println("Test");

}

I2C::~I2C() {
	// TODO Auto-generated destructor stub
}

void receiveData(int byteCount){
	/*
	while (Wire.available()) {
		command = Wire.read();
		//Serial.print("data received: ");
		//Serial.println(commande);
	}
	*/
	command=0;
}

// callback for sending data
void sendData(){
	/*
	Wire.write(command);
	switch (command)
	{
		case 0x00:
			//Serial.println("Default");
			break;

		case 0x01:
			//Serial.println("Set speed");
			break;

		default:
			break;
	}
	*/
}

