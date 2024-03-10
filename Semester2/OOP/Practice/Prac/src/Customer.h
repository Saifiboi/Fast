/*
 * Customer.h
 *
 *  Created on: Jun 5, 2023
 *      Author: safi
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include<string>
#include "Reservation.h"
using namespace std;
class Customer
{
	int id;
	string name;
	string debtcard;
	Reservation R;
	string phone;
	string email;
public:
	Customer(int i,string n,string d,string p,string e,Flight *f,string sid):R(f,sid)
	{
		id=i;
		name=n;
		debtcard=d;
		email=e;
		phone=p;
	}

	const string& getDebtcard() const {
		return debtcard;
	}

	void setDebtcard(const string &debtcard) {
		this->debtcard = debtcard;
	}

	const string& getEmail() const {
		return email;
	}

	void setEmail(const string &email) {
		this->email = email;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
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

	const Reservation& getR() const {
		return R;
	}

	void setR(const Reservation &r) {
		R = r;
	}
};



#endif /* CUSTOMER_H_ */
