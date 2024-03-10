/*
 * Holiday.h
 *
 *  Created on: Mar 8, 2023
 *      Author: safi
 */

#ifndef HOLIDAY_H_
#define HOLIDAY_H_
#include<string>
using namespace std;
class Holiday {
	string name;
	int day;
	string month;
public:
	Holiday();
	Holiday(string &n,int d,string &m);
	Holiday(Holiday &copy);
	virtual ~Holiday();
	int getDay() const;
	void setDay(int day);
	const string& getMonth() const;
	void setMonth(const string &month);
	const string& getName() const;
	void setName(const string &name);


};

#endif /* HOLIDAY_H_ */
