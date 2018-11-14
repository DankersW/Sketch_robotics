/*
 * PrintOut.h
 *
 *  Created on: 14 nov. 2018
 *      Author: Wouter
 */

#ifndef SRC_PRINTOUT_H_
#define SRC_PRINTOUT_H_

#include <Arduino.h>

#include "Macros.h"

class PrintOut {
public:
	PrintOut();
	virtual ~PrintOut();
	void versionPrintOut();
};

#endif /* SRC_PRINTOUT_H_ */
