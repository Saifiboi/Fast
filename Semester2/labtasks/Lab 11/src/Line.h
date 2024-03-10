/*
 * Line.h
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#ifndef LINE_H_
#define LINE_H_
#include "Point.h"
class Line {
	Point P1;
	Point P2;
public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	virtual ~Line();
	Line(const Point &p1,const Point &p2);
	float findSlope();
	float findLength();
	Point& findMidPoint();
};

#endif /* LINE_H_ */
