/*
 * Line.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#include "Line.h"
#include<cmath>
Line::Line():P1(Point(4,6)),P2(Point(2,4)) {


}
Line::Line(int x1, int y1, int x2, int y2):P1(Point(x1,y1)),P2(Point(x2,y2))
{

}
float Line::findSlope()
{
	float numer=this->P2.getY_Coordinate()-this->P1.getY_Coordinate();
	float denom=this->P2.getX_Coordinate()-this->P1.getX_Coordinate();
	return numer/denom;
}
float Line::findLength()
{
	int X=this->P2.getX_Coordinate()-this->P1.getX_Coordinate();
	int Y=this->P2.getY_Coordinate()-this->P1.getY_Coordinate();
	float res=sqrt(X*X+Y*Y);
	return res;
}
Point& Line::findMidPoint()
{
	int x, y;
	x=(this->P1.getX_Coordinate()+this->P2.getX_Coordinate())/2;
	y=(this->P1.getY_Coordinate()+this->P2.getY_Coordinate())/2;
	Point *P;
	P=new Point(x,y);
	return *P;
}
Line::~Line() {
	// TODO Auto-generated destructor stub
}

Line::Line(const Point &p1,const Point &p2):P1(Point(p1.getX_Coordinate(),p1.getY_Coordinate())),P2(Point(p2.getX_Coordinate(),p2.getY_Coordinate())){


}

