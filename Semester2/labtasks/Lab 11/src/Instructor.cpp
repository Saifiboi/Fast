/*
 * Instructor.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#include "Instructor.h"
#include<iostream>
using namespace std;
Instructor::Instructor() {
	this->First_name="\0";
	this->Last_name="\0";
	this->Office_number="\0";
	this->Designation="\0";
}
Instructor::Instructor(string f_name,string l_name,string Office,string des)
{
	this->First_name=f_name;
	this->Last_name=l_name;
	this->Office_number=Office;
	this->Designation=des;
}
void Instructor::set(string f_name,string l_name,string Office,string des)
{
	this->First_name=f_name;
	this->Last_name=l_name;
	this->Office_number=Office;
	this->Designation=des;
}
void Instructor::print()
{
	cout<<"\nFirst name="<<this->First_name<<endl;
	cout<<"\nLast name="<<this->Last_name<<endl;
	cout<<"\nOffice number="<<this->Office_number<<endl;
	cout<<"\nDesignation="<<this->Designation<<endl;

}
Instructor::~Instructor() {
	// TODO Auto-generated destructor stub
}

