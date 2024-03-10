/*
 * HourlyEmployee.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(int hi ,int id,string na ):Employee(na,id){
	this->hourlyIncome=hi;

}
float HourlyEmployee::calculate_the_hourly_income(int hrs)
{
	return hrs*this->hourlyIncome;
}
HourlyEmployee::~HourlyEmployee() {
	// TODO Auto-generated destructor stub
}

