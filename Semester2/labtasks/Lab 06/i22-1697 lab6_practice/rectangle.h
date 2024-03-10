/*
 * rectangle.h
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include<iostream>
class rectangle {
	int  length;
	int width;
	int Area;

public:
	rectangle();
	void setLength(int L);
	void setWidth(int W);
	int area(int l,int w);
	void display();
	int scaleup(int l,int w);
	int getLength();
	int getWidth();
	int getarea();
	virtual ~rectangle();
};

#endif /* RECTANGLE_H_ */
