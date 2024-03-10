/*
 * point.h
 *
 *  Created on: Mar 1, 2023
 *      Author: safi
 */

#ifndef POINT_H_
#define POINT_H_
#include<string>
using namespace std;
class point {
	int x;
	int y;
public:
	point();
	point(int xe,int ye);
	void setX(int xe);
	void setY(int ye);
	int getX();
	int getY();
	string check();

	virtual ~point();
};

#endif /* POINT_H_ */
