/*
 * REservation.h
 *
 *  Created on: Jun 5, 2023
 *      Author: safi
 */

#ifndef RESERVATION_H_
#define RESERVATION_H_
#include "Flight.h"
class Reservation{
	static int res_idcounter;
	Flight *F;
	string seattype;
	int seatnum;
	int id;
public:
	Reservation(Flight *f2,string s):id(res_idcounter)
	{
		F=f2;
		this->seattype=s;
		if(seattype=="aisle")
		{
			seatnum=F->getR().getACounter();
			F->getR().setACounter();
			F->setAislerem();
		}
		else if(seattype=="window")
		{
			seatnum=F->getR().getWcounter();
			F->getR().setWcounter();
			F->setWindowrem();
		}
		else
		{
			seatnum=F->getR().getMConter();
			F->getR().setMConter();
			F->setMidrem();
		}

	}
	Flight* getF() const {
		return F;
	}

	void setF(Flight *f) {
		F = f;
	}

	static int getResId() {
		return res_idcounter;
	}

	static void setResId(int resId) {
		res_idcounter = resId;
	}

	int getSeatnum() const {
		return seatnum;
	}

	void setSeatnum(int seatnum) {
		this->seatnum = seatnum;
	}

	const string& getSeattype() const {
		return seattype;
	}

	void setSeattype(const string &seattype) {
		this->seattype = seattype;
	}
};

int Reservation::res_idcounter=1;

#endif /* RESERVATION_H_ */
