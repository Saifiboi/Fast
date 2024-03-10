/*
 * Reservation.cpp
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#include "Reservation.h"

Reservation::Reservation(Flight *f,int i,int s) {
	this->res_id=i;
	this->F=f;
	this->seat_no=s;
}
Reservation::Reservation(Reservation &r)
{
	this->res_id=r.res_id;
	this->F=r.F;
	this->seat_no=r.seat_no;
}
Reservation::~Reservation() {
	// TODO Auto-generated destructor stub
}

