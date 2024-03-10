/*
 * Integer.h
 *
 *  Created on: Mar 16, 2023
 *      Author: safi
 */

#ifndef INTEGER_H_
#define INTEGER_H_s
#include"String.h"
#include<iostream>
class Integer {
	int number;
public:
	Integer();
	Integer(int);
	Integer(String);
	virtual ~Integer();
	int get() const;
	void set(int Number);
	int bitCount();
	int compareTo(Integer);
	double doubleValue();
	float floatValue();
	Integer plus(const Integer &);
	Integer minus(const Integer &);
	Integer multiple(const Integer &);
	Integer divide(const Integer &);
	static int numberOfLeadingZeros(int i);
	static int numberOfTrailingZeros(int i);
	static String toBinaryString(int i);
	static String toHexString(int i);
	static String toOctString(int i);


};

#endif /* INTEGER_H_ */
