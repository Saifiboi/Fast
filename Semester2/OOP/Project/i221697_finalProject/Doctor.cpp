/*
 * Doctor.cpp
 *
 *  Created on: May 2, 2023
 *      Author: safi
 */
//============================================================================
// Name        : Doctor.cpp
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#include "Doctor.h"
//Constructor.
Doctor::Doctor(int id,char password [],char name[],int age,char deg[],char exp[]) {
	this->Doctor_id=id;
	strcpy(this->password,password);
	strcpy(this->name,name);
	this->age=age;
	strcpy(this->Experience,exp);
	strcpy(this->Degree,deg);
	for(int i=0;i<10;i++)
	{
		this->Ehrreq[i]=0;
		this->appointments[i]=0;
	}

}
void Doctor:: printDoctor()
{
	cout<<"\nDoctor Id:"<<this->Doctor_id;
	cout<<"\nName :"<<this->name;
	cout<<"\nDegree :"<<this->Degree;
	cout<<"\nAge:"<<this->age<<endl;
}
//Getters and setters.
int Doctor::getAge() const {
	return age;
}

void Doctor::setAge(int age) {
	this->age = age;
}

const char * Doctor::getDegree() const {
	return this->Degree;
}

void Doctor::setDegree(char degree[]) {
	strcpy(this->Degree, degree);
}

int Doctor::getDoctorId() const {
	return Doctor_id;
}

void Doctor::setDoctorId(int doctorId) {
	Doctor_id = doctorId;
}
const char* Doctor::getExperience() const {
	return Experience;
}

void Doctor::setExperience(char experience[]) {
	strcpy(this->Experience, experience);
}

const char * Doctor::getName() const {
	return name;
}

void Doctor::setName(char name[]) {
	strcpy(this->name, name);
}

const char* Doctor::getPassword() const {
	return password;
}

void Doctor::setPassword(char password[]) {
	strcpy(this->password, password);
}
void Doctor::addappointmentreq(int index){
	if(index>=0 && index<10)
	{
		this->appointments[index]=-1;
	}
}
//acceptance issuance.
void Doctor::acceptappointment(int index)
{
	if(index>=0 && index<10)
	{
		this->appointments[index]=0;
	}
}
int Doctor::getappointmentreq(int index)
{
	return this->appointments[index];
}
void Doctor::setapp_time(char time[],int index)
{
	strcpy(this->app_time[index],time);
}
char *Doctor::getapp_time(int index)
{
	return this->app_time[index];
}
//Set a request.
void Doctor::setEhrreq(int index)
{
	if(index>=0 && index<10)
	{
		this->Ehrreq[index]=-1;
	}
}
//normalize request after writing EHR.
void Doctor::normalEhrreq(int index)
{
	if(index>=0 && index<10)
	{
		this->Ehrreq[index]=0;
	}
}
int Doctor::getEhrreq(int index)
{
	return this->Ehrreq[index];
}
void  Doctor::setcallin(int index)
{
	if(index>=0 && index<10)
	{
		this->callin[index]=-1;
	}
}
int Doctor::getcallin(int index)
{
	return this->callin[index];
}
void Doctor::normalcallin(int index)
{
	if(index>=0 && index<10)
	{
		this->callin[index]=0;
	}
}
Doctor::~Doctor() {
	// TODO Auto-generated destructor stub
}


