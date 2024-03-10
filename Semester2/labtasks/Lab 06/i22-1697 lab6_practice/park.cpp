/*
 * park.cpp
 *
 *  Created on: Mar 3, 2023
 *      Author: safi
 */

#include "park.h"
using namespace std;
park::park() {
	maxcap=0;
	seats=0;
	price=0;
	numtic=0;
	amount=0;

}
park::park(int s,int p,int n)
{
	maxcap=s;
	seats=s;
	price=p;
	numtic=n;
	amount=0;
}
void park::setCapacity(int n)
{
	maxcap=n;
}
void park::setseat(int n)
{
	seats=n;
}
void park::ticnum(int n)
{
	numtic=n;
}
void park::setprice(int n)
{
	price=n;
}
int park::getprice()
{
	return price;
}
int park::getticnum()
{
	return numtic;
}
int park::maxcapacity()
{
	return maxcap;
}
void park::buyTicket(int n)
{
	if(!Isfull())
	{
		seats-=n;
		numtic+=n;
		amount+=(n*price);
	}
	else
		cout<<"OOps!Park is full\n";
}
void park::exitPark(int n)
{
	if(seats!=maxcap)
	{
		seats+=n;
	}
	else
		cout<<"Invalid Operation!Seats are not occupuied\n";
}
int park::getTotal()
{
	return amount;
}
int park:: seatCapacity()
{
	return seats;
}
bool park::Isfull(){
	if(seats==0)
	{
		return 1;
	}
	else
		return 0;
}
park::~park() {
	// TODO Auto-generated destructor stub
}

