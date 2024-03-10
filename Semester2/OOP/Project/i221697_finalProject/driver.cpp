//============================================================================
// Name        : Driver.cpp
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#include "header.h"
#include "IOT.h"
#include "Patient.h"
#include "Doctor.h"//decrypt IOT object in accordance to encryption.
void PatientPortal(Patient *P,Doctor * D);			//App for patient use.
void DoctorPortal(Patient *P,Doctor * D);
void seecall(Patient *P,Doctor & D);//App for Doctor Use.
void writepatient(Patient *P,int size);			//Write all patients in patient list file.
Patient *readpatient();						//read all patient from patient list file.
void writeDoctor(Doctor *D,int size);		//write all doctors in Doctor list file.
Doctor * readDoctor();						//read all doctors from doctor list file.					//Write EHR object of Patient and then store using store EHR function..
		//Write IOT object in file at specific path.		//read all IOTs and stores last one.
void callIOTwrite(int index);						//calling function to create specfic path for writing EHR.
void seeEHRtoD(Patient *P,Doctor &D);				//Performs dispalying EHR  functionality to Doctor of specific patient .
void assignDoctors(Patient *P,Doctor *D2);			//function that aggregate doctors to patients.
void EditEHR(Patient *P,Doctor &D);					//Function to allow editing in EHR of patient to doctor according to permission.
void seeIOTtoD(Patient *P,Doctor &D);				//Function to dispaly current IOT data of patient to dotor.
void Mngeappointreq(Patient *P,Doctor &D);
char Doctormenu(Patient *P,Doctor &D);//allow doctor to Perform all acceptance of Appointments of Patients.
void storeEHR(string path,int doc_id,EHR &E);
void MakeCall(Patient *P,Doctor &D);//Store EHR file at specific path.		//takes a single dummy character.
int main() {
	srand(time(0));
	Doctor *D2=readDoctor();
	Patient *P1;			// Declare a pointer to a Patient object.
	P1=readpatient();
	assignDoctors(P1,D2);
	int choice_usr;				// Initialize variables for user input and file paths.
	string path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	EHR temp;
	// Read in electronic health records (EHR) for each patient and doctor combination.
	for(int i=0;i<10;i++)
	{
		path=path+to_string(i+1)+"/EHR/EHR";
		for(int j=0;j<P1[i].getIndexdoctor();j++)
		{
			path=path+to_string(j+1)+".dat";
			temp.readEHR(path);
			P1[i].getEHR(j)=temp;
			path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
			path=path+to_string(i+1)+"/EHR/EHR";
		}
		path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	}
	path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	IOT I1;
	// Read in internet of things (IOT) data for each patient.
	for(int i=0;i<10;i++)
	{
		path=path+to_string(i+1)+"/IOT.dat";
		I1.readIOT(path,0);
		path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	}
	char contin='y';
	// Display a welcome message and prompt the user for their choice.
	cout<<"\nWelcome to RMC System.....\n";
	while(contin=='Y'|| contin=='y')
	{
		cout<<"\nEnter Your choice: \n1.Patient\n2.Doctor\n3.Exit";
		cin>>choice_usr;
		while(choice_usr<1 || choice_usr>3)
		{
			cout<<"\nInvalid Input!try again:";
			cin>>choice_usr;
		}
		switch(choice_usr)
		{
		case 1:
			PatientPortal(P1,D2);	// Call the PatientPortal function and pass in the Patient and Doctor object.

			break;
		case 2:
			DoctorPortal(P1,D2);	// Call the DoctorPortal function and pass in the Patient and Doctor objects.
			break;
		case 3:
			contin='n';
			break;
		}
		// Prompt the user to continue or quit the program
		if(contin!='n')
		{
			cout<<"\nWelcome Back to RMC portal...\nDo you wnat to continue?(Y/N):";
			cin>>contin;
		}
		while(contin!='Y' && contin!='y' && contin!='N' && contin!='n')
		{
			cout<<"\nInvalid Character !Enter Again:";
			cin>>contin;
		}
	}

	// Write out the IOT data for each patient.
	for(int i=0;i<10;i++)
	{
		callIOTwrite(i);
	}
	// Write out the EHR data for each patient and doctor combination
	path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	for(int i=0;i<10;i++)
	{
		path=path+to_string(i+1)+"/EHR/EHR";
		for(int j=0;j<P1[i].getIndexdoctor();j++)
		{
			path=path+to_string(j+1)+".dat";
			P1[i].getEHR(j).storeEHR(path,P1[i].getDocIds(j));
			path=path+to_string(i+1)+"/EHR/EHR";
		}
		path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	}
	writepatient(P1,10);		//write all patient objects.
	writeDoctor(D2,5);			//write all doctor objects.
}
void writepatient(Patient *P,int size)
{
	ofstream fout;			//create file object
	fout.open("/home/safi/Documents/Semester2/OOP/Project/objectlists/Patientlist.dat",ios::binary);	//associat file to specific path.
	for(int i=0;i<size;i++)
	{
		fout.write(reinterpret_cast<char *>(&P[i]),sizeof(P[i]));		//write object by object.
	}
	fout.close();		//closing file.
}
Patient* readpatient()
{
	ifstream fin;			//create file object
	Patient * P=NULL;
	fin.open("/home/safi/Documents/Semester2/OOP/Project/objectlists/Patientlist.dat",ios::binary);
	if(fin.is_open())
	{
		P = new Patient[10];
		int i=0;
		while(fin.read((char *)(&P[i]),sizeof(P[i])))
		{
			i++;
		}

	}
	fin.close();		//closing file.
	return P;

}
void writeDoctor(Doctor *D,int size)	//write doctor object by object.
{
	ofstream fout;
	fout.open("/home/safi/Documents/Semester2/OOP/Project/objectlists/Doctorlist.dat",ios::binary);
	for(int i=0;i<size;i++)
	{
		fout.write(reinterpret_cast<char *>(&D[i]),sizeof(D[i]));
	}
	fout.close();
}
Doctor  * readDoctor ()
{
	ifstream fin;		//associat to specific file and read object by object.
	Doctor *D=NULL;
	fin.open("/home/safi/Documents/Semester2/OOP/Project/objectlists/Doctorlist.dat",ios::binary);
	if(fin.is_open())
	{

		D=new Doctor[5];
		int i=0;
		while(fin.read((char *)(&D[i]),sizeof(D[i])))
		{
			i++;
		}
	}
	fin.close();
	return D;

}
void callIOTwrite(int index)		//create specific path for file writing and then call file writing function.
{
	string path= "/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
	path=path+to_string(index+1) + "/IOT.dat";
	IOT I;
	I.update();
	I.writeIOT(path);
}
void assignDoctors(Patient *P,Doctor *D2)			//aggregate relevant doctor to each patient.
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			for(int k=0;k<5;k++)
			{
				if(P[i].getDocIds(j)==D2[k].getDoctorId())
				{
					P[i].setDoctor(D2[k],j);
					break;
				}
			}
		}
	}

}
void PatientPortal(Patient *P,Doctor * D)
{
	int id,usr_choice;
	char check;
	bool doc_full=0;
	char password[20];
	bool i=1;
	cout<<"\nWElcome to login portal...";		//login inputs and validation and confirmation.
	while(i)
	{
		cout<<"\nEnter Your Login Id:";
		cin>>id;
		while(id<1 ||id>10)
		{
			cout<<"\nInvalid Id!Type again:";
			cin>>id;
		}
		cout<<"\nConfirmation required Patient ID:"<<id<<"\nEnter your choice(Y/N):";
		cin>>check;
		while(check!='Y' && check!='y' && check!='n' && check!='N')
		{
			cout<<"\nInvalid Input !Try Again:";
			cin>>check;
		}
		if(check=='Y'|| check=='y')
		{
			i=0;
		}
	}
	cin.ignore();
	cout<<"\nEnter Your Password:";
	cin.getline(password, 20);
	for(int i=0;(i<=3&&strcmp(P[id-1].getPassword(),password)!=0);i++)
	{
		if(i==3)
		{
			cout<<"\nBreach Error !Program Aborted:\n";
			exit(-1);
		}
		cout<<"\nInvalid Password!Type Again:";
		cin.getline(password, 20);
	}
	char cont='y';
	while(cont=='y' || cont=='Y')
	{

		cont=P[id-1].patientmenu(D);
		if(cont!='n')
		{
			cout<<"\nDo you want to continue!(Y/N):";
			cin>>cont;
		}
		while((cont !='n' && cont!='N') && (cont!='y'&& cont!='Y'))
		{
			cout<<"\nInvalid Input!Try again:";
			cin>>cont;
		}
	}
}
void DoctorPortal(Patient *P,Doctor * D)
{
	int oper_choice;
	char password[20];
	bool i=1;
	int id;
	char check;
	cout<<"\nWElcome to Doctor login portal...";				//login inputs and validation and confirmation.
	while(i)
	{
		cout<<"\nEnter Your Login Id:";
		cin>>id;
		while(id<1 ||id>10)
		{
			cout<<"\nInvalid Id!Type again:";
			cin>>id;
		}
		cout<<"\nConfirmation required Patient ID:"<<id<<"\nEnter your choice(Y/N):";
		cin>>check;
		while(check!='Y' && check!='y' && check!='n' && check!='N')
		{
			cout<<"\nInvalid Input !Try Again:";
			cin>>check;
		}
		if(check=='Y'|| check=='y')
		{
			i=0;
		}
	}
	cin.ignore();
	cout<<"\nEnter Your Password:";
	cin.getline(password, 20);
	for(int i=0;i<3&& strcmp(D[id-1].getPassword(),password)!=0;i++)
	{
		if(i==3)
		{
			cout<<"\nBreach Error !Program Aborted:\n";
			exit(-1);
		}
		cout<<"\nInvalid Password!Type Again:";
		cin.getline(password, 20);
	}
	char contin='Y';
	while(contin=='Y'||contin=='y')
	{
		contin=Doctormenu(P,D[id-1]);
		if(contin!='n'){
			cout<<"\nWelcome back to Doctor Portal:\nDo you want to continue(Y/N):";
			cin>>contin;
		}
		while(contin!='N' && contin!='n' && contin!='Y' && contin!='y')
		{
			cout<<"\nInvalid Input!Try Again:";
			cin>>contin;
		}
	}
}
char Doctormenu(Patient *P,Doctor &D)
{
	cout<<"\nWelcome to Doctor Portal....\n";
	string path;
	int cap_loc=0;
	for(int i=0;i<10;i++)
	{
		if(D.getcallin(i)==-1)
		{
			cout<<"\nYou Have a call with:\n";
			P[i].printpatient();
			for(int j=0;j<P[i].getIndexdoctor();j++)
			{
				if(P[i].getDocIds(j)==D.getDoctorId())
				{
					P[i].getcall(j).readcall("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient"+to_string(i+1)+"/CALL/CALL"+to_string(D.getDoctorId())+".dat");
					cout<<"\nHis Arguements:"<<P[i].getcall(j).getpatres()<<endl;
					P[i].getcall(j).takecallbyD();
					P[i].getcall(j).savecall("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient"+to_string(i+1)+"/CALL/CALL"+to_string(D.getDoctorId())+".dat");
					D.normalcallin(i);
				}
			}
		}
	}
	for(int i=0;i<10;i++)			//Writing EHRs of newly aggregated patients.
	{
		if(D.getEhrreq(i)==-1)
		{
			cout<<"You have to write EHR file for:\n";
			P[i].printpatient();
			path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
			path=path+to_string(i+1)+"/EHR/EHR";
			for(int j=0;j<P[i].getIndexdoctor();j++)
			{
				if(P[i].getDocIds(j)==D.getDoctorId())
				{
					path=path+to_string(j+1)+".dat";
					cap_loc=j;
					break;
				}
			}
			P[i].getEHR(cap_loc).writeEHR(path,D.getDoctorId());
			P[i].getEHR(cap_loc).readEHR(path);
			D.normalEhrreq(i);
			cin.ignore();
			cout<<"\nFile wrote successfully!Press any key to continue:";
			getch();
		}
	}
	char contin='y';
	int oper_choice;
	cout<<"\nWelcome to Doctor Portal.....\n";
	cout<<"\nEnter an operation.";
	cout<<"\n1.See EHR of Patient.";
	cout<<"\n2.See IOT of Patient.";
	cout<<"\n3.Edit EHR of Patient.";
	cout<<"\n4.Manage Appiontments.";
	cout<<"\n5.Make a call to Patient.";
	cout<<"\n6.Change Password.";
	cout<<"\n7.See Call log.";
	cout<<"\n8.Exit";
	cin>>oper_choice;
	while(oper_choice<1|| oper_choice>8)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>oper_choice;
	}
	switch(oper_choice)
	{
	case 1:
		seeEHRtoD(P,D);
		break;
	case 2:
		seeIOTtoD(P,D);
		break;
	case 3:
		EditEHR(P,D);
		break;
	case 4:
		Mngeappointreq(P,D);
		break;
	case 5:
		MakeCall(P,D);
		break;
	case 6:
		char pass[255];
		cout<<"\nEnter New Password:";
		cin.getline(pass,255);
		D.setPassword(pass);
		cout<<"\nPassword Changed Successfully!Press Any Key to Continue:";
		getch();
		break;
	case 7:
		seecall(P,D);
		break;
	case 8:
		contin='n';
		break;
	}
	return contin;
}
void seeEHRtoD(Patient *P,Doctor &D)
{
	int *arr;
	int *indexdoc;
	int size=0;
	int usr_choice;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)			//collecting desired Patients.
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				size++;
			}
		}
	}
	arr=new int [size];
	indexdoc=new int [size];
	int k=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				arr[k]=i;
				indexdoc[k]=j;
				k++;
			}
		}
	}
	cout<<"\nYou Have Following Patients.\n";		//Dispalying relevant patients.
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<"...........\n";
		P[arr[i]].printpatient();
	}
	cout<<"\nEnter The Number of Patient whose EHR you want to see.";
	cin>>usr_choice;
	while(usr_choice<1 || usr_choice>size)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>usr_choice;
	}
	P[arr[usr_choice-1]].printpatient();				//Displaying EHR of a patient.
	P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).Display();
	cin.ignore();
	cout<<"\nFile Displayed successfully!Press any key to continue:";
	getch();
	delete [] arr;
	arr=0;
	delete [] indexdoc;
	indexdoc=0;

}
void EditEHR(Patient *P,Doctor &D)				//EDit EHR of Patient.
{
	int *arr;
	int *indexdoc;
	int size=0;
	int usr_choice;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				size++;
			}
		}
	}
	arr=new int [size];
	indexdoc=new int [size];
	int k=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				arr[k]=i;
				indexdoc[k]=j;
				k++;
			}
		}
	}
	cout<<"\nYou Have Following Patients.\n";			//Displaying relevant patients.
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<"...........\n";
		P[arr[i]].printpatient();
	}
	cout<<"\nEnter The Number of Patient whose EHR you want to see.";
	cin>>usr_choice;
	while(usr_choice<1 || usr_choice>size)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>usr_choice;
	}
	if(P[arr[usr_choice-1]].getpermission(indexdoc[usr_choice-1])==1)				//checking for permission of editing.
	{
		int choiceedit;
		char input[60];
		char editmore='Y';
		while(editmore=='Y'||editmore=='y')
		{
			cout<<"\nYou can change the following things..\n";
			cout<<"1.Consultation."<<endl;
			cout<<"2.Prescribtion."<<endl;
			cout<<"3.Allergy condition."<<endl;
			cout<<"4.Recommendations."<<endl;
			cout<<"5.dietry_restriction"<<endl;
			cout<<"6.regular_medication"<<endl;
			cout<<"7.charchronic_health_condition"<<endl;
			cout<<"\nEnter Your Choice:";
			cin>>choiceedit;
			while(choiceedit<1 || choiceedit>7)
			{
				cout<<"\nInvalid Input:Try Again:";
				cin>>choiceedit;
			}
			cout<<"\nEnter your input for Editing:";
			cin.ignore();
			cin.getline(input, 60);
			switch(choiceedit)			//Editing specific value based on choice.
			{
			case 1:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setConsultation(input);
				break;
			case 2:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setPrescribtions(input);
				break;
			case 3:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setAllergies(input);
				break;
			case 4:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setRecommendations(input);
				break;
			case 5:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setDietryRestriction(input);
				break;
			case 6:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setRegularMedication(input);
				break;
			case 7:
				P[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1]).setChronicHealthCondition(input);
				break;
			}
			//storeEHR()[arr[usr_choice-1]].getEHR(indexdoc[usr_choice-1])
			cout<<"\nValue Edited Successfully!\n";
			cout<<"Do you want to continue editing EHR(Y/N):";
			cin>>editmore;
			while(editmore!='n' && editmore!='N' && editmore!='Y' && editmore!='y')
			{
				cout<<"\nInvalid Character !Enter Again:";
				cin>>editmore;
			}
		}
	}
	else
	{
		cin.ignore();
		cout<<"\nSorry!You are not permitted to make changes in this EHR!press any key to exit:";
		getch();

	}
	delete [] arr;
	arr=0;
	delete [] indexdoc;
	indexdoc=0;
}
void seeIOTtoD(Patient *P,Doctor &D)		//seeing IOT record of Patient.
{
	int *arr;
	int *indexdoc;
	int size=0;
	int usr_choice;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				size++;
			}
		}
	}
	arr=new int [size];
	indexdoc=new int [size];
	int k=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				arr[k]=i;
				indexdoc[k]=j;
				k++;
			}
		}
	}
	cout<<"\nYou Have Following Patients.\n";
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<"...........\n";
		P[arr[i]].printpatient();
	}
	cout<<"\nEnter The Number of Patient whose IOT you want to see.";
	cin>>usr_choice;
	while(usr_choice<1 || usr_choice>size)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>usr_choice;
	}
	cin.ignore();
	int choice;
	P[arr[usr_choice-1]].printpatient();
	cout<<"\n1.Current or \n2.3 Months";
	cin>>choice;
	while(choice<1 || choice>2)
	{
		cout<<"\nInvalid Input!";
		cin>>choice;
	}
	if(choice==2)
	{
		string path="/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient";
		path=path+to_string(arr[usr_choice-1]+1)+"/IOT.dat";
		P[arr[usr_choice-1]].getIOT().readIOT(path,1);
	}
	else
	{
		P[arr[usr_choice-1]].getIOT().Dispaly();
	}
	cout<<"\nFile Displayed successfully!Press any key to continue:";
	cin.ignore();
	getch();
	delete [] arr;
	arr=0;
	delete [] indexdoc;
	indexdoc=0;
}
void Mngeappointreq(Patient *P,Doctor &D)		//Manages appointment requests of relevant patient.
{
	bool check=0;
	int size=0;
	for(int i=0;i<10;i++)
	{
		if(D.getappointmentreq(i)==-1)
		{
			check=1;
			size++;
		}
	}
	if(check==1)
	{
		int *arr=new int [size];
		int doc_choice;
		int j=0;
		for(int i=0;i<10;i++)
		{
			if(D.getDoctorId()==-1)
			{
				arr[j]=i;
				j++;
			}
		}
		cout<<"\nYou Have following requests:\n";
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<"....\n";
			P[arr[i]].printpatient();
			cout<<"Time:"<<D.getapp_time(arr[i]);
		}
		cout<<"\nEnter Your Choice For approval:";
		cin>>doc_choice;
		while(doc_choice<1 || doc_choice>size)
		{
			cout<<"\nInvalid Input!Try Again:";
			cin>>doc_choice;
		}
		int doc_index=0;
		for(int i=0;i<P[arr[doc_choice-1]].getIndexdoctor();i++)
		{
			if(P[arr[doc_choice-1]].getDocIds(i)==D.getDoctorId())
			{
				doc_index=i;
			}
		}
		for(int i=0;i<3;i++)
		{
			P[arr[doc_choice-1]].getEHR(doc_index).setAppointments((P[arr[doc_choice-1]].getEHR(doc_index).getAppointments(i+1)),i);
		}
		P[arr[doc_choice-1]].getEHR(doc_index).setAppointments(D.getapp_time(arr[doc_choice-1]),4);
		cin.ignore();
		cout<<"\nAppointment Added Successfully....\nPress any key to exit";
		getch();
		delete [] arr;
		arr=0;
	}
	else
	{
		cin.ignore();
		cout<<"\nOOPS!You don't have any Appointment request!Press any key to exit!";
		getch();
	}
}
void MakeCall(Patient *P,Doctor &D)
{
	int *arr;
	int *indexdoc;
	int size=0;
	int usr_choice;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				size++;
			}
		}
	}
	arr=new int [size];
	indexdoc=new int [size];
	int k=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				arr[k]=i;
				indexdoc[k]=j;
				k++;
			}
		}
	}
	cout<<"\nYou Have Following Patients.\n";
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<"...........\n";
		P[arr[i]].printpatient();
	}
	cout<<"\nEnter The choice of Patient to whom you wanna call.";
	cin>>usr_choice;
	while(usr_choice<1 || usr_choice>size)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>usr_choice;
	}
	if(P[arr[usr_choice-1]].getcallin(indexdoc[usr_choice-1])==-1)
	{
		cout<<"\nOne call is already pending you cannot make new call.";
		cout<<"\nPress any key to exit.";
		cin.ignore();
		getch();
	}
	else
	{
		P[arr[usr_choice-1]].getcall(indexdoc[usr_choice-1]).Make_CalltoP(P[arr[usr_choice-1]+1].getPatientName(), D.getDoctorId(), P[arr[usr_choice-1]].getPatientId());
		P[arr[usr_choice-1]].setcallin(indexdoc[usr_choice-1]);
	}
	delete [] arr;
	arr=0;
	delete [] indexdoc;
	indexdoc=0;
}
void seecall(Patient *P,Doctor &D)
{
	int *arr;
	int *indexdoc;
	int size=0;
	int usr_choice;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				size++;
			}
		}
	}
	arr=new int [size];
	indexdoc=new int [size];
	int k=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<P[i].getIndexdoctor();j++)
		{
			if(D.getDoctorId()==P[i].getDocIds(j))
			{
				arr[k]=i;
				indexdoc[k]=j;
				k++;
			}
		}
	}
		cout<<"\nYou Have Following Patients.\n";
		for(int i=0;i<size;i++)
		{
			cout<<i+1<<"...........\n";
			P[arr[i]].printpatient();
		}
		cout<<"\nEnter The choice of Patientwith whom you wanna see call log.";
		cin>>usr_choice;
		while(usr_choice<1 || usr_choice>size)
		{
			cout<<"\nInvalid Input!Try Again:";
			cin>>usr_choice;
		}
		cout<<"\nEnter Your Choice:\n1.Current last\n.Complete log\n";
		int call_choice;
		cin>>call_choice;
		while(call_choice<1 || call_choice>2)
		{
			cout<<"\nInvalid Choice!Try Again:";
			cin>>call_choice;
		}
		cout<<"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient"+to_string(P[arr[usr_choice-1]].getPatientId())+"/CALL/CALL"+to_string(indexdoc[arr[usr_choice-1]]+1)+".dat"<<endl;
		P[arr[usr_choice-1]].getcall(indexdoc[usr_choice-1]).retrievecall("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient"+to_string(P[arr[usr_choice-1]].getPatientId())+"/CALL/CALL"+to_string(indexdoc[arr[usr_choice-1]]+1)+".dat", call_choice-1, 1);
		cout<<endl<<"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient"+to_string(P[arr[usr_choice-1]].getPatientId())+"/CALL/CALL"+to_string(indexdoc[arr[usr_choice-1]]+1)+".dat"<<endl;
		delete [] arr;
		arr=0;
		delete [] indexdoc;
		indexdoc=0;
}
// Below functions are for Encryption and Decryption.

