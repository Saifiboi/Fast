/*
 * Customers.h
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#ifndef CUSTOMERS_H_
#define CUSTOMERS_H_
#include "Reservation.h"
#include<string>
using namespace std;
class Customers {
	string name;
	string phone;
	string email;
	string s_catgry;
	string card_num;
public:
	Reservation R;
	Customers(int i=0,int s1=0,Flight *f=NULL,string="\0",string="\0",string="\0",string="\0",string="\0");
	virtual ~Customers();

	const string& getCardNum() const {
		return card_num;
	}

	void setCardNum(const string &cardNum) {
		card_num = cardNum;
	}

	const string& getEmail() const {
		return email;
	}

	void setEmail(const string &email) {
		this->email = email;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	const string& getPhone() const {
		return phone;
	}

	void setPhone(const string &phone) {
		this->phone = phone;
	}

	const string& getSCatgry() const {
		return s_catgry;
	}

	void setSCatgry(const string &sCatgry) {
		s_catgry = sCatgry;
	}
};

#endif /* CUSTOMERS_H_ */
