/*
 * Computer.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "Computer.h"

Computer::Computer(string n,float p) {
	this->companyName=n;
	this->price=p;
}
void Computer::show()
{
	cout<<"\nCompany Name="<<this->companyName<<endl;
	cout<<"\nPrice ="<<this->price<<endl;
}
Computer::~Computer() {
	// TODO Auto-generated destructor stub
}

