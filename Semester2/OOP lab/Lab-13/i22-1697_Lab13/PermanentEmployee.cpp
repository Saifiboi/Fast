/*
 * PermanentEmployee.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "PermanentEmployee.h"

PermanentEmployee::PermanentEmployee(int hi ,int id,string na ):Employee(na,id){
	this->hourlyIncome=hi;

}
float PermanentEmployee::calculate_the_hourly_income()
{
	return 240*this->hourlyIncome;
}
PermanentEmployee::~PermanentEmployee() {
	// TODO Auto-generated destructor stub
}

