/*
 * Patient.h
 *
 *  Created on: May 2, 2023
 *      Author: safi
 */
//============================================================================
// Name        : Patient.h
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#ifndef PATIENT_H_
#define PATIENT_H_
#include "header.h"
#include "EHR.h"
#include "Doctor.h"
#include "IOT.h"
#include "Call.h"
class Patient {		//patient Declaration.
	int patient_id;
	char password[255];
	char patient_Name[255];
	int age;
	char occupation[255];
	Call C[5];
	Doctor *D[5];			//aggregate Doctors.
	int indexdoctor;			//number of aggregated doctors.
	int doc_ids[5];				//ids for aggregated doctors.
	bool permission[5];			//Permission carrying array.
	int calllog[5];				//-1 for pending call 0 for no call.
	EHR E[5];			//compose EHRS
	IOT I;				//Compose IOT.
public:
	Patient(int =0,char [] ="\0",char []="\0",int=0,char []="\0",int ind=0);
	char patientmenu(Doctor *D);
	void setcallin(int index);
	int getcallin(int index);
	void normalcallin(int index);
	void readEHRs();
	virtual ~Patient();
	int getAge() const;
	void setAge(int age);
	Doctor& getD(int index) const;
	void setD( Doctor *[],int size);
	void  setDoctor(Doctor &,int index);
	const char* getOccupation() const;
	void setOccupation(char occupation[]);
	const char* getPassword() const;
	void setPassword(char password[]);
	int getPatientId() const;
	void setPatientId(int patientId);
	const char* getPatientName() const;
	void setPatientName(char patientName[]);
	int getIndexdoctor() const;
	void setIndexdoctor(int indexdoctor);
	int getDocIds(int index) const;
	void setDocIds(int docIds,int index);
	void setpermission(int index);
	void setcalllog(int index);
	void removepermission(int index);
	void receivecall(int index);
	bool getpermission(int index);
	bool getcalllog(int index);
	EHR& getEHR(int index);
	Call& getcall(int index);
	void printpatient();
	IOT& getIOT();
};

#endif /* PATIENT_H_ */
