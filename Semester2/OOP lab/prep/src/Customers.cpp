/*
 * Customers.cpp
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#include "Customers.h"
#include "Reservation.h"
Customers::Customers(int i,int s1,Flight *f,string n,string p,string e,string s,string c):R(f,i,s1){
	this->name=n;
	this->phone=p;
	this->email=e;
	this->s_catgry=s;
	this->card_num=c;

}

Customers::~Customers() {
	// TODO Auto-generated destructor stub
}

