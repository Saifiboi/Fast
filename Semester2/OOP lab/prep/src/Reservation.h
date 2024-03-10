/*
 * Reservation.h
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#ifndef RESERVATION_H_
#define RESERVATION_H_
#include"Flight.h"
class Reservation {
	int res_id;
	Flight *F;
	int seat_no;
public:
	Reservation(Flight *f,int i=0,int s=0);
	Reservation(Reservation &r);
	virtual ~Reservation();

	int getResId() const {
		return res_id;
	}

	void setResId(int resId) {
		res_id = resId;
	}

	int getSeatNo() const {
		return seat_no;
	}

	void setSeatNo(int seatNo) {
		seat_no = seatNo;
	}
};

#endif /* RESERVATION_H_ */
