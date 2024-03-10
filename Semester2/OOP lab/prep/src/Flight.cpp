/*
 * Flight.cpp
 *
 *  Created on: Apr 26, 2023
 *      Author: lab
 */

#include "Flight.h"
#include<iostream>
using namespace std;
Flight::Flight(int n,string orign,string des,string dept,string arrt,string date,int s1,int s2,int s3) {
	this->flight_no=n;
	this->origin=orign;
	this->destination=des;
	this->dep_time=dept;
	this->arr_time=arrt;
	this->seat_window=s1;
	this->seat_Aisle=s2;
	this->seat_Middle=s3;
	this->Date=date;
}

const string& Flight::getArrTime() const {
	return arr_time;
}

void Flight::setArrTime(const string &arrTime) {
	arr_time = arrTime;
}

const string& Flight::getDate() const {
	return Date;
}

void Flight::setDate(const string &date) {
	Date = date;
}

const string& Flight::getDepTime() const {
	return dep_time;
}

void Flight::setDepTime(const string &depTime) {
	dep_time = depTime;
}

const string& Flight::getDestination() const {
	return destination;
}

void Flight::setDestination(const string &destination) {
	this->destination = destination;
}

int Flight::getFlightNo() const {
	return flight_no;
}

void Flight::setFlightNo(int flightNo) {
	flight_no = flightNo;
}

const string& Flight::getOrigin() const {
	return origin;
}

void Flight::setOrigin(const string &origin) {
	this->origin = origin;
}

int Flight::getSeatAisle() const {
	return seat_Aisle;
}

void Flight::setSeatAisle(int seatAisle) {
	seat_Aisle = seatAisle;
}

int Flight::getSeatMiddle() const {
	return seat_Middle;
}

void Flight::setSeatMiddle(int seatMiddle) {
	seat_Middle = seatMiddle;
}

int Flight::getSeatWindow() const {
	return seat_window;
}

void Flight::setSeatWindow(int seatWindow) {
	seat_window = seatWindow;
}

void Flight::display(){
	cout<<"\nDeparture:"<<this->origin<<endl;
	cout<<"\nArrival:"<<this->destination<<endl;
	cout<<"\nAirline:XYZ Airline"<<endl;
	cout<<"\nDeparture time:"<<this->dep_time<<endl;
	cout<<"\nArrival Time:"<<this->arr_time<<endl;
}
Flight::~Flight() {
	// TODO Auto-generated destructor stub
}
