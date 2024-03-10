/*
 * Course.h
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#ifndef COURSE_H_
#define COURSE_H_
#include"Instructor.h"
#include"TextBook.h"
class Course {
	Instructor I;
	TextBook J;
public:
	Course();
	void setval(string f_name,string l_name,string Office,string des,string title,string author,int book);
	void printcal();
	virtual ~Course();
};

#endif /* COURSE_H_ */
