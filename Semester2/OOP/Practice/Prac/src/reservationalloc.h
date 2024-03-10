/*
 * reservationalloc.h
 *
 *  Created on: Jun 5, 2023
 *      Author: safi
 */

#ifndef RESERVATIONALLOC_H_
#define RESERVATIONALLOC_H_

class reservationalloc
{
	int m_conter;
	int a_counter;
	int wcounter;
public:
	reservationalloc()
	{
		m_conter=1;
		a_counter=1;
		wcounter=1;
	}

	int getACounter() const {
		return a_counter;
	}

	void setACounter(){
		a_counter++;
	}

	int getMConter() const {
		return m_conter;
	}

	void setMConter() {
		m_conter++;
	}

	int getWcounter() const {
		return wcounter;
	}

	void setWcounter() {
		this->wcounter++;
	}
};



#endif /* RESERVATIONALLOC_H_ */
