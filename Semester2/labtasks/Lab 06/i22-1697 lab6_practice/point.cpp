/*
 * point.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#include "point.h"

point::point() {
	// TODO Auto-generated constructor stub
	x=0;
	y=0;
}
point::point(int xe,int ye)
{
	x=xe;
	y=ye;
}
void point::setX(int xe)
{
	x=xe;
}
void point::setY(int ye)
{
	y=ye;
}
int point::getX()
{
	return x;
}
int point::getY()
{
	return y;
}
string point::check()
{
	if((x>=0)&&(y>=0))
			return "Q1";
	else if((x<0)&&(y>=0))
		return "Q2";
	else if((x>=0)&&(y<0))
		return "Q4";
	else
		return "Q3";
}
point::~point() {
	// TODO Auto-generated destructor stub
}

