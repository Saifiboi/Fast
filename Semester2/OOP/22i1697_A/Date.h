//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 1
// FILE        : DATE.H
//============================================================================
/*
 * Date.h
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */
 // Header guard to prevent multiple inclusions
#ifndef DATE_H_
#define DATE_H_

#include<iostream>
//#include "Calender.h"
#include<string>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

// Class declaration for Date
class Date {
	int day;
	int month;
	int year;
public:
	// Default constructor
	Date();
	// Parameterized constructor
	Date(int d,int m,int y);

	// Function to calculate difference between two dates
	int SubtractDate(Date,Date);

	// Overloaded operator to calculate difference between two dates
	void operator-(Date &);

	// Function to calculate number of weeks between two dates
	void calweeks(Date &D);

	// Function to calculate the date ahead
	void dateahead();

	// Function to calculate the date before
	void datebeyoned();

	// Destructor
	virtual ~Date();

};

#endif /* DATE_H_ */
