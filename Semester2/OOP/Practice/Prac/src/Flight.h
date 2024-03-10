/*
 * Flight.h
 *
 *  Created on: Jun 5, 2023
 *      Author: safi
 */
#include<string>
#include<iostream>
#include "reservationalloc.h"
using namespace std;
#ifndef FLIGHT_H_
#define FLIGHT_H_

class Flight {
	int id;
	string name;
	const int midseat;
	const int windowseat;
	const int aisle;
	int midrem;
	int windowrem;
	int aislerem;
	bool fullcheck;
	string dept_time;
	string land_time;
	string source;
	string destination;
	reservationalloc R;
	string date;

public:
	Flight(int i,string n,string s,string des,string deptt,string landt,string dat,int nm,int nw,int na):midseat(nm),windowseat(nw),aisle(na),fullcheck(0)
	{
		this->id=i;
		this->name=n;
		this->midrem=nm;
		this->aislerem=na;
		this->windowrem=nw;
		this->dept_time=deptt;
		this->land_time=landt;
		date=dat;
		source=s;
		destination=des;
	}
	~Flight()
	{

	}
	void dispaly()
	{
		cout<<"Flight id:"<<this->id<<endl;
		cout<<"Flight name:"<<this->name<<endl;
		cout<<"Departure from:"<<this->source<<endl;
		cout<<"Landing to:"<<this->land_time<<endl;
		cout<<"Window seat remaining:"<<this->windowrem<<endl;
		cout<<"Ailse seat remaining:"<<this->aislerem<<endl;
		cout<<"Middle seat remaining:"<<this->midrem<<endl;
		cout<<"Departure time:"<<this->dept_time<<endl;
		cout<<"Landing time:"<<this->land_time<<endl;
		cout<<"Date"<<this->date<<endl;
	}

	const int getAisle() const {
		return aisle;
	}

	int getAislerem() const {
		return aislerem;
	}

	void setAislerem() {
		this->aislerem --;
		this->setFullcheck();
	}

	bool isFullcheck() const {
		return fullcheck;
	}

	void setFullcheck() {
		if(this->aislerem==0 && this->windowseat==0 && this->midrem==0)
			this->fullcheck = 1;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	int getMidrem() const {
		return midrem;
	}

	void setMidrem() {
		this->midrem--;
		this->setFullcheck();
	}

	const int getMidseat() const {
		return midseat;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	int getWindowrem() const {
		return windowrem;
	}

	void setWindowrem() {
		this->windowrem--;
		this->setFullcheck();
	}

	const int getWindowseat() const {
		return windowseat;
	}

	const string& getDeptTime() const {
		return dept_time;
	}

	void setDeptTime(const string &deptTime) {
		dept_time = deptTime;
	}

	const string& getLandTime() const {
		return land_time;
	}

	void setLandTime(const string &landTime) {
		land_time = landTime;
	}

	reservationalloc& getR()  {
		return R;
	}

	void setR(const reservationalloc &r) {
		R = r;
	}

	const string& getDestination() const {
		return destination;
	}

	void setDestination(const string &destination) {
		this->destination = destination;
	}

	const string& getSource() const {
		return source;
	}

	void setSource(const string &source) {
		this->source = source;
	}

	const string& getDate() const {
		return date;
	}

	void setDate(const string &date) {
		this->date = date;
	}
};

#endif /* FLIGHT_H_ */
