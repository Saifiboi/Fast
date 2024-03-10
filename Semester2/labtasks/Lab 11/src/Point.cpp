/*
 * Point.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#include "Point.h"

Point::Point() {
	this->x=0;
	this->y=0;

}
Point::Point(int x,int y)
{
	this->x=x;
	this->y=y;
}
Point::~Point() {
	// TODO Auto-generated destructor stub
}

int Point::getX_Coordinate() const {
	return x;
}

int Point::getY_Coordinate() const {
	return y;
}

Point::Point(const Point &other) {
	this->x=other.x;
	this->y=other.y;
}

