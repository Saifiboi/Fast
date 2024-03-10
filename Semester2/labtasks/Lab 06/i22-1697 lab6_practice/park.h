/*
 * park.h
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */

#ifndef PARK_H_
#define PARK_H_
#include<iostream>
class park {
	int maxcap;
	int seats;
	int price;
	int numtic;
	int amount;
public:
	park();
	park(int s,int p,int n);
	void setCapacity(int n);
	void setseat(int n);
	void ticnum(int n);
	void setprice(int n);
	int  getprice();
	int getticnum();
	int maxcapacity();
	void buyTicket(int);
	void exitPark(int);
	int getTotal();
	int seatCapacity();
	bool Isfull();
	virtual ~park();
};

#endif /* PARK_H_ */
