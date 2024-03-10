/*
 * Instructor.h
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_
#include<string>
using namespace std;
class Instructor {
	string First_name;
	string Last_name;
	string Office_number;
	string Designation;
public:
	Instructor();
	Instructor(string f_name,string l_name,string Office,string des);
	void set(string f_name,string l_name,string Office,string des);
	void print();
	virtual ~Instructor();
};

#endif /* INSTRUCTOR_H_ */
