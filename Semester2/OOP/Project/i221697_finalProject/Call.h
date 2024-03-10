/*
 * Call.h
 *
 *  Created on: May 12, 2023
 *      Author: safi
 */

#ifndef SRC_CALL_H_
#define SRC_CALL_H_
#include "header.h"
#include "IOT.h"
class Call{
	int call_id;
	char notes_doc[300];
	char pat_res[300];
	char res_doc[300];
	char patient_not[300];

	bool audio_vid;			//0 audio 1 video
	bool call_rec;
public:
	Call(int =0,char []="\0",char []="\0",char []="\0",char []="\0",bool =0,bool =0);
	void DisplaycalltoP();
	void readcall(string path);
	void DisplaycalltoD();
	void operator =(Call&);
	void takecallbyP();
	void takecallbyD();
	const char * getdocres();
	const char * getpatres();
	void encryptcall();
	void decryptcall();
	void savecall(string path);
	void Make_CalltoD(const char name[],int,int);
	void Make_CalltoP(const char name[],int did,int pid);
	void retrievecall(string path,bool check,bool person);

	virtual ~Call();
};

#endif /* SRC_CALL_H_ */
