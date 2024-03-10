/*
 * Course.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#include "Course.h"

Course::Course() {
	// TODO Auto-generated constructor stub

}
void Course::setval(string f_name,string l_name,string Office,string des,string title,string author,int book){
	this->I.set(f_name, l_name, Office, des);
	this->J.setBook(title, author, book);
}
void Course::printcal()
{
	this->I.print();
	this->J.Display();
}
Course::~Course() {
	// TODO Auto-generated destructor stub
}

