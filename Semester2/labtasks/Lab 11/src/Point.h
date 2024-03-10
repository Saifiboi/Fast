/*
 * Point.h
 *
 *  Created on: Apr 5, 2023
 *      Author: safi
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
	int x;
	int y;
public:
	Point();
	Point(int x,int y);
	virtual ~Point();
	Point(const Point &other);
	int getX_Coordinate() const;
	int getY_Coordinate() const;
};

#endif /* POINT_H_ */
