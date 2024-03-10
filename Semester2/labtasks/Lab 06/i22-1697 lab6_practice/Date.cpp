/*
 * Date.cpp
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */

#include "Date.h"

Date::Date() {
	day=1;
	month=1;
	year=1900;


}
Date::Date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}
Date::~Date() {
	day=0;
	month=0;
	year=0;
}
bool Date::LeapYear(Date obj)
{
	if((obj.year)%4==0)
	{
		if(obj.year%100==0)
		{
			if((obj.year)%400==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
int Date::SubtractDate(Date obj1,Date obj2)
{
		int res=0;
	if(obj1.year>obj2.year)
	{
		res= (obj1.year-obj2.year)*365+(obj1.month-obj2.month)*12+(obj1.day-obj2.day);
	}
	else
	{
		res= (obj2.year-obj1.year)*365+(obj2.month-obj1.month)*30+(obj2.day-obj1.day);
	}
	if(res<0)
	{
		return  -res;
	}
	return res;
}

