/*
 * I2C.h
 *
 *  Created on: 24 jan. 2019
 *      Author: a293795
 */

#ifndef SRC_I2C_H_
#define SRC_I2C_H_

#include "Wire.h"

#include "Macros.h"




class I2C {
public:
	I2C();
	virtual ~I2C();

};

void receiveData(int byteCount);
void sendData();

#endif /* SRC_I2C_H_ */
