/*
 * Holiday.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#include "Holiday.h"
using namespace std;
Holiday::Holiday() {
	this->name="\0";
	this->day=0;
	this->month="\0";
	// TODO Auto-generated constructor stub

}
Holiday::Holiday(string &n,int d,string &m):name(n),day(d),month(m)
{

}
Holiday::Holiday(Holiday &copy)
{
	this->day=copy.day;
	this->month=copy.month;
	this->name=copy.name;

}

int Holiday::getDay() const {
	return day;
}

void Holiday::setDay(int day) {
	if(day>0)
	{
		this->day=day;
	}

}

const string& Holiday::getMonth() const {
	return month;
}

void Holiday::setMonth(const string &month) {
	int i;
			while(month[i]!='\0')
			{
				i++;
			}
			if((i)<50)
			{
				this->month = month;
			}

}

const string& Holiday::getName() const {
	return name;
}

void Holiday::setName(const string &name) {
	int i;
		while(name[i]!='\0')
		{
			i++;
		}
		if((i)<50)
		{
			this->name = name;
		}

}

Holiday::~Holiday() {
	// TODO Auto-generated destructor stub
}

