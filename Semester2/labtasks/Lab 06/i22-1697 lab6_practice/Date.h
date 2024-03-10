/*
 * Date.h
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d,int m,int y);
	bool LeapYear(Date );
	int SubtractDate(Date,Date);
	virtual ~Date();
};

#endif /* DATE_H_ */
