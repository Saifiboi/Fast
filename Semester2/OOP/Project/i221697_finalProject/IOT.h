/*
 * IOT.h
 *
 *  Created on: May 6, 2023
 *      Author: safi
 */
//============================================================================
// Name        : IOT.h
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#ifndef IOT_H_
#define IOT_H_
#include "header.h"
char getch(void);
class IOT {				//DEclaration of IOT.
	float temperature;
	float sugar_level;			//Variables to hold sensor reagings.
	int pulse;
	float BMI;
	int oxygen_saturation_prcnt;
	int Bp[2];
public:
	IOT(char []="\0",float=98.6,float=99.0,int=80,float =21.0,int=95);
	void writeIOT(string path);
	void readIOT(string path,bool check);
	void encryptIOT();
	void decryptIOT();
	void update();
	void operator=(IOT &);
	void Dispaly();
	void setName(char []);
	float getBmi() const;
	int getBp(int index) const;
	const char* getName() const;
	int getOxygenSaturationPrcnt() const;
	int getPulse() const;
	float getSugarLevel() const;
	float getTemperature() const;
	void setBmi(float bmi);
	void setBp(int index,int val);
	void setOxygenSaturationPrcnt(int oxygenSaturationPrcnt);
	void setPulse(int pulse);
	void setSugarLevel(float sugarLevel);
	void setTemperature(float temperature);
	virtual ~IOT();
};
#endif /* IOT_H_ */