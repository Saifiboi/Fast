/*
 * Distance.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

#include "Distance.h"

Distance::Distance(int f,int i) {
	this->inches=i;
	this->feet=f;
	if(this->inches>=12)
	{
		this->feet+=this->inches/12;
	}

}

int Distance::getFeet() const {
	return feet;
}

bool Distance::setFeet(int f) {
	this->feet = f;
	return 1;
}

int Distance::getInches() const {
	return inches;
}

bool Distance::setInches(int i) {
	this->inches = i;
	if(this->inches>=12)
	{
		this->feet+=this->inches/12;
	}
	return 1;
}
Distance  Distance::operator+(const Distance & obj)
{
	Distance D1;
	D1.feet=this->feet+obj.feet;
	D1.inches=this->inches+obj.inches;
	return D1;
}
Distance  Distance::operator-(const Distance & obj)
{
	Distance D1;
	D1.feet=this->feet-obj.feet;
	D1.inches=this->inches-obj.inches;
	if(D1.inches<0)
	{
		D1.inches*=(-1);
	}
	if(D1.feet<0)
	{
		D1.feet*=(-1);
	}
	return D1;
}
const Distance  Distance::operator=(const Distance & obj)
{
	this->feet=obj.feet;
	this->inches=obj.inches;
	return *(this);
}
Distance::~Distance() {
	// TODO Auto-generated destructor stub
}

