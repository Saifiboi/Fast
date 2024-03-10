/*
 * rectangle.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#include "rectangle.h"
using namespace std;
rectangle::rectangle() {
	// TODO Auto-generated constructor stub

}

rectangle::~rectangle() {
	// TODO Auto-generated destructor stub
}
void rectangle:: setLength(int L)
{
	length=L;
}
void rectangle::setWidth(int W)
{
	width=W;
}
int rectangle::area(int l,int w)
{
	length=l;
	width=w;
	Area=length*width;
	return Area;
}
void rectangle::display()
{
	cout<<"Length:"<<length<<endl;
	cout<<"Width:"<<width<<endl;
	cout<<"Area:"<<Area<<endl;
}
int rectangle::scaleup(int l,int w)
{
	length=l+1;
	width=w+1;
	return length+width;
}
int rectangle:: getLength()
{
	return length;
}
int rectangle::getWidth()
{
	return width;
}
int rectangle::getarea()
{
	return Area;
}
