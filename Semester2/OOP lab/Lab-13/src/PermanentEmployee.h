/*
 * PermanentEmployee.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef PERMANENTEMPLOYEE_H_
#define PERMANENTEMPLOYEE_H_
#include <string>
#include "Employee.h"
using namespace std;
class PermanentEmployee:public Employee {
	float hourlyIncome;
public:
	PermanentEmployee(int=0 ,int=0,string="\0" );
	float calculate_the_hourly_income();
	virtual ~PermanentEmployee();
};

#endif /* PERMANENTEMPLOYEE_H_ */
