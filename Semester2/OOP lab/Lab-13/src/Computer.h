/*
 * Computer.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include <string>
#include <iostream>
using namespace std;
class Computer {
	string companyName;
	float price;
public:
	Computer(string="\0",float =0.0);
	virtual void show();
	virtual ~Computer();
};

#endif /* COMPUTER_H_ */
