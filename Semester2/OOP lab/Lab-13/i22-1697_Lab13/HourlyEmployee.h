/*
 * HourlyEmployee.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef HOURLYEMPLOYEE_H_
#define HOURLYEMPLOYEE_H_
#include<string>
#include "Employee.h"
using namespace std;
class HourlyEmployee:public Employee {
	float hourlyIncome;
public:
	HourlyEmployee(int=0 ,int=0,string="\0" );
	float calculate_the_hourly_income(int hrs);
	virtual ~HourlyEmployee();
};

#endif /* HOURLYEMPLOYEE_H_ */
