/*
 * Student.h
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include<string>
#include<iostream>
using namespace std;
class Student {
	private:
	string name;
	string id;
	int age;
	double cgpa;
public:
	Student();
	Student(string n,int a);
	void Setname(string n);
	void Setid(string i);
	void Setage(int a);
	void Setcgpa(double c);
	string Getname();
	string Getid();
	int Getage();
	double Getcgpa();
	void printStudent ();
	~Student();
};

#endif /* STUDENT_H_ */
