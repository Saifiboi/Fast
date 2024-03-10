/*
 * Distance.h
 *
 *  Created on: Mar 23, 2023
 *      Author: safi
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_

class Distance {
	int feet;
	int inches;
public:
	Distance(int =0,int =0);
	virtual ~Distance();
	int getFeet() const;
	bool setFeet(int f);
	int getInches() const;
	bool setInches(int i);
	Distance  operator+(const Distance & obj);
	Distance  operator-(const Distance & obj);
	const Distance  operator=(const Distance & obj);
};

#endif /* DISTANCE_H_ */
