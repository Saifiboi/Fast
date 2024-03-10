/*
 * Student.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#include "Student.h"
using namespace std;
Student::Student() {
	// TODO Auto-generated constructor stub
	cout<<"Default Constructor";
}
Student::Student(string n,int a)
{
	name=n;
	age=a;
}
Student::~Student() {
	// TODO Auto-generated destructor stub
}
void Student::Setname(string n)
{
	name =n;
}
void Student::Setid(string i)
{
	id =i;
}

void Student::Setage(int a)
{
	age =a;
}
void Student::Setcgpa(double c)
{
	cgpa =c;
}
string Student::Getname()
{
	return name ;
}
string Student::Getid()
{
	return id ;
}

int  Student::Getage()
{
	return age ;
}
double Student::Getcgpa()
{
	return cgpa ;
}
void Student::printStudent ()
{
	cout<<"Name:"<<name<<endl;
	cout<<"ID:"<<id<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"CGPA:"<<(cgpa)<<endl;
}

