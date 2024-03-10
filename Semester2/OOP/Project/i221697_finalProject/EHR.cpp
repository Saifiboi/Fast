/*
 * EHR.cpp
 *
 *  Created on: May 4, 2023
 *      Author: safi
 */
//============================================================================
// Name        : EHR.cpp
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#include "EHR.h"
//Getters and Setters are defiend below.
void EHR::setAllergies(char allergies[])
{
	strcpy(this->allergies,allergies);
}
const char* EHR::getAllergies() const {
	return allergies;
}
void EHR::setAppointments(char Appointments[],int index)
{
	strcpy(this->appointments[index],Appointments);
}
char* EHR::getAppointments(int index){
	return this->appointments[index];
}
void EHR::setChronicHealthCondition(char charchronic_health_condition[])
{
	strcpy(this->charchronic_health_condition,charchronic_health_condition);
}
const char* EHR::getChronicHealthCondition() const {
	return charchronic_health_condition;
}
void EHR::setConsultation(char consultation[])
{
	strcpy(this->consultation,consultation);
}
const char* EHR::getConsultation() const {
	return consultation;
}
void EHR::setDietryRestriction(char dietry_restriction[])
{
	strcpy(this->dietry_restriction,dietry_restriction);
}
const char* EHR::getDietryRestriction() const {
	return dietry_restriction;
}
void EHR::setPrescribtions(char prescribtions[])
{
	strcpy(this->prescribtions,prescribtions);
}
const char* EHR::getPrescribtions() const {
	return prescribtions;
}
void EHR::setRecommendations(char recommendations[])
{
	strcpy(this->recommendations,recommendations);
}
const char* EHR::getRecommendations() const {
	return recommendations;
}
void EHR::setRegularMedication(char regular_medication[])
{
	strcpy(this->regular_medication,regular_medication);
}
const char* EHR::getRegularMedication() const {
	return regular_medication;
}
void EHR::operator=(EHR &E)
{
	strcpy(this->consultation,E.consultation);
	strcpy(this->charchronic_health_condition,E.charchronic_health_condition);
	strcpy(this->allergies,E.allergies);
	strcpy(this->dietry_restriction,E.dietry_restriction);
	strcpy(this->prescribtions,E.prescribtions);
	strcpy(this->recommendations,E.recommendations);
	strcpy(this->regular_medication,E.regular_medication);
	for(int i=0;i<4;i++)
	{
		strcpy(this->appointments[i],E.appointments[i]);
	}
}
//Function to Show patient EHR.
void EHR::Display()
{
	cout<<"\nConsultation:"<<this->consultation<<endl;
	cout<<"Prescribtions:"<<this->prescribtions<<endl;
	cout<<"Allergies:"<<this->allergies<<endl;
	cout<<"Chronic_health_condition:"<<this->charchronic_health_condition<<endl;
	cout<<"Recommendations:"<<this->recommendations<<endl;
	cout<<"Regular_medication:"<<this->regular_medication<<endl;
	cout<<"Dietry_restriction:"<<this->dietry_restriction<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"Appointment "<<i+1<<":"<<this->appointments[i]<<endl;
	}
}
void EHR::encryptEHR()
{
	int j=0;
	while(this->consultation[j]!='\0')
	{
		this->consultation[j]+=10;
		j++;
	}
	j=0;
	while(this->allergies[j]!='\0')
	{
		this->allergies[j]+=10;
		j++;
	}
	j=0;
	while(this->charchronic_health_condition[j]!='\0')
	{
		this->charchronic_health_condition[j]+=10;
		j++;
	}
	j=0;
	while(this->dietry_restriction[j]!='\0')
	{
		this->dietry_restriction[j]+=10;
		j++;
	}
	j=0;
	while(this->prescribtions[j]!='\0')
	{
		this->prescribtions[j]+=10;
		j++;
	}
	j=0;
	while(this->recommendations[j]!='\0')
	{
		this->recommendations[j]+=10;
		j++;
	}
	j=0;
	while(this->regular_medication[j]!='\0')
	{
		this->regular_medication[j]+=10;
		j++;
	}
}
void EHR::decryptEHR()
{
	int j=0;
	while(this->consultation[j]!='\0')
	{
		this->consultation[j]-=10;
		j++;
	}
	j=0;
	while(this->allergies[j]!='\0')
	{
		this->allergies[j]-=10;
		j++;
	}
	j=0;
	while(this->charchronic_health_condition[j]!='\0')
	{
		this->charchronic_health_condition[j]-=10;
		j++;
	}
	j=0;
	while(this->dietry_restriction[j]!='\0')
	{
		this->dietry_restriction[j]-=10;
		j++;
	}
	j=0;
	while(this->prescribtions[j]!='\0')
	{
		this->prescribtions[j]-=10;
		j++;
	}
	j=0;
	while(this->recommendations[j]!='\0')
	{
		this->recommendations[j]-=10;
		j++;
	}
	j=0;
	while(this->regular_medication[j]!='\0')
	{
		this->regular_medication[j]-=10;
		j++;
	}
}
void EHR::writeEHR(string path,int doc_id)		//Add input and then forward it to store EHR object.
{
	cout<<"\nEnter consultation:";
	cin.getline(this->consultation,255);
	cout<<"\nEnter prescribtions:";
	cin.getline(this->prescribtions,255);
	cout<<"\nEnter recommendations:";
	cin.getline(this->recommendations,255);
	cout<<"\nEnter dietry_restriction:";
	cin.getline(this->dietry_restriction,255);
	cout<<"\nEnter allergies:";
	cin.getline(this->allergies,255);
	cout<<"\nEnter regular_medication";
	cin.getline(this->regular_medication,255);
	cout<<"\nEnter chronic_health_condition:";
	cin.getline(this->charchronic_health_condition,255);
	for(int i=0;i<4;i++)
	{
		cout<<"\nEnter time of Appointment "<<i<<":";
		cin.getline(this->appointments[i],255);
	}
	this->storeEHR(path,doc_id);
}
void EHR::storeEHR(string path,int doc_id)  //associate specific file and store EHR object.
{
	this->encryptEHR();
	ofstream fout;
	fout.open(path,ios::binary);
	fout.write(reinterpret_cast<char *>(&(*this)),sizeof(*this));
	fout.write(reinterpret_cast<char *>(&doc_id),sizeof(doc_id));
	fout.close();
}
int EHR::readEHR(string path)
{
	ifstream fin;
	fin.open(path,ios::binary);
	int doc_id;
	fin.read((char *)&(*this),sizeof(*this));
	this->decryptEHR();
	fin.read((char *)(&doc_id),sizeof(doc_id));
	fin.close();
	return doc_id;
}
EHR::~EHR() {
	// TODO Auto-generated destructor stub
}

