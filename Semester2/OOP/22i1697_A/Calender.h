//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 1
// FILE        : CALENDER.H
//============================================================================
/*
 * Calender.h
 *
 *  Created on: Apr 3, 2023
 *      Author: safi
 */

#ifndef CALENDER_H_
#define CALENDER_H_
#include<iostream>
#include <ctime>
#include <iomanip>
using namespace std;
class Calender {
public:
	Calender();
	void Display(int, int );
	void printCal();
	virtual ~Calender();
};

#endif /* CALENDER_H_ */
bool LeapYear(int year)
{
	if((year)%4==0) // Check if the year is divisible by 4
	{
		if(year%100==0) // Check if the year is divisible by 100
		{
			if((year)%400==0) // Check if the year is divisible by 400
			{
				return 1; // Return true if it's a leap year
			}
			else
			{
				return 0; // Return false if it's not a leap year
			}
		}
		else
		{
			return 1; // Return true if it's a leap year
		}
	}
	else
	{
		return 0; // Return false if it's not a leap year
	}
}

int Daynum(int day,int month,int year )
{
	int magicmonth[12]={0,3,3,6,1,4,6,2,5,0,3,5}; // Array of "magic numbers" for each month
	int magicmonthleap[12]={6,2,3,6,1,4,6,2,5,0,3,5}; // Array of "magic numbers" for each month in a leap year
	int m_num=0; // Initialize the "magic number" for the month
	if(LeapYear(year)) // Check if the year is a leap year
	{
		m_num=magicmonthleap[month-1]; // Use the "magic number" for a leap year
	}
	else
	{
		m_num=magicmonth[month-1]; // Use the "magic number" for a regular year
	};
	int yearcen=0; // Initialize the year century
	yearcen=year/100; // Calculate the year century
	int yearmagic[4]={6,4,2,0}; // Array of "magic numbers" for each year century
	int y_ind=0; // Initialize the year number index
	int y_num=0; // Initialize the year number
	y_ind=yearcen%4; // Calculate the year number index
	y_num=yearmagic[y_ind]; // Get the "magic number" for the year number index
	yearcen=year%100; // Get the year number
	int mod4=yearcen/4; // Calculate the mod 4 of the year number
	int sum=day+m_num+y_num+mod4+yearcen; // Calculate the total sum
	return sum%7; // Return the day number
}
string nameMonth(int i)
{
	string month;
	switch(i)
	{
		case 1:
			month="JANUARY"; // January
			break;
		case 2:
			month="FEBRUARY"; // February
			break;
		case 3:
			month="MARCH"; // March
			break;
		case 4:
			month="APRIL"; // April
			break;
		case 5:
		month="MAY"; // May
			break;
		case 6:
			month="JUNE"; // June
			break;
		case 7:
			month="JULY"; // July
			break;
		case 8:
			month="AUGUST"; // August
			break;
		case 9:
			month="SEPTEMBER"; // September
			break;
		case 10:
			month="OCTOBER"; // October
			break;
		case 11:
			month="NOVEMBER"; // November
			break;
		case 12:
			month="DECEMBER"; // December
			break;
	}
	return month;
}

int noDays(int m,int y)
{
	int days;
	switch(m)
	{
		case 1:
			days=31; // January
			break;
		case 2:
			if(LeapYear(y))
			{
				days=29; // February leap year
			}
			else
			{
				days=28; // February non-leap year
			}
			break;
		case 3:
			days=31; // March
			break;
		case 4:
			days=30; // April
			break;
		case 5:
			days=31; // May
			break;
		case 6:
			days=30; // June
			break;
		case 7:
			days=31; // July
			break;
		case 8:
			days=31; // August
			break;
		case 9:
			days=30; // September
			break;
		case 10:
			days=31; // October
			break;
		case 11:
			days=30; // November
			break;
		case 12:
			days=31; // December
			break;
	}
	return days;
}
