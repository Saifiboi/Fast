/*
 * FaceBook.cpp
 *
 *  Created on: Mar 15, 2023
 *      Author: safi
 */

#include "FaceBook.h"
using namespace std;
FaceBook::FaceBook() {
	this->contact=new char[100];
	cout<<"\nDefault constructor:\n";


}
FaceBook::FaceBook(string Name,string Email,char g,char* Contact)
{
	this->name=Name;
	this->email=Email;
	this->gender=g;
	this->contact=new char [100];
	int i=0;
	while(Contact[i]!='\0')
	{
		this->contact[i]=Contact[i];
		i++;
	}
}

char* FaceBook::getContact() const {
	return contact;
}

void FaceBook::setContact(char *Contact) {

	delete[] this->contact;
	this->contact=new char [100];
	int i=0;
	while(Contact[i]!='\0')
	{
		this->contact[i]=Contact[i];
		i++;
	}
}

const string& FaceBook::getEmail() const {
	return email;
}

void FaceBook::setEmail(const string &email) {
	this->email = email;
}

char FaceBook::getGender() const {
	return gender;
}

void FaceBook::setGender(char gender) {
	this->gender = gender;
}

const string& FaceBook::getName() const {
	return name;
}

void FaceBook::setName(const string &name) {
	this->name = name;
}

FaceBook::~FaceBook() {
	delete []this->contact;
}
int *GenderCount(FaceBook f[],int size)
{
	int *gender=new int [2];
	gender[1]=0;
	gender[2]=0;
	for(int i=0;i<size;i++)
	{
		if(f[i].getGender()=='m' ||f[i].getGender()=='M')
		{
			gender[0]+=1;
		}
		else
		{
			gender[1]+=1;
		}
	}
	return gender;
}
