/*
 * Laptop.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef LAPTOP_H_
#define LAPTOP_H_
#include "Computer.h"
class Laptop:public Computer {
	string color;
	string size;
	string weight;
	string processor;
public:
	Laptop(string ="\0",string="\0",string ="\0",string="\0",string="\0",float=0.0);
	virtual void show();
	virtual ~Laptop();
};

#endif /* LAPTOP_H_ */
