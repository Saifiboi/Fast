/*
 * Flight.h
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_
#include<string>
using namespace std;
class Flight {
	int flight_no;
	string origin;
	string destination;
	string dep_time;
	string arr_time;
	int seat_window;
	int seat_Aisle;
	int seat_Middle;
	string Date;
public:
	Flight(int =0,string="\0",string ="\0",string="\0",string="\0",string date="\0",int s1=0,int s2=0,int s3=0);
	virtual ~Flight();
	const string& getArrTime() const;
	void setArrTime(const string &arrTime);
	const string& getDate() const;
	void setDate(const string &date);
	const string& getDepTime() const;
	void setDepTime(const string &depTime);
	const string& getDestination() const;
	void setDestination(const string &destination);
	int getFlightNo() const;
	void setFlightNo(int flightNo);
	const string& getOrigin() const;
	void setOrigin(const string &origin);
	void display();
	int getSeatAisle() const;
	void setSeatAisle(int seatAisle);
	int getSeatMiddle() const;
	void setSeatMiddle(int seatMiddle);
	int getSeatWindow() const;
	void setSeatWindow(int seatWindow);
};

#endif /* FLIGHT_H_ */
