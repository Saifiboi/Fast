/*
 * main.cpp
 *
 *  Created on: Jun 5, 2023
 *      Author: safi
 */
//============================================================================
// Name        : Sessional.cpp
// Author      : i221697
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
#include<cstdlib>
using namespace std;
#include"Flight.h"
#include "Customer.h"
int main() {
	Flight F[4]={{1,"PIA","Pakistan\0","Dubai\0","11:00pm","3:00am","4 Dec 2023",10,15,10},{1,"PIA","Pakistan\0","Saudi Arabia\0","5:00pm","9:00pm","6 Dec 2023",10,10,10},{1,"PIA","Pakistan\0","Saudi Arabia\0","11:00pm","3:00am","6 Dec 2023",10,15,10},{1,"PIA","Pakistan\0","Dubai\0","11:00pm","3:00am","4 Dec 2023",10,10,10}};
	string dep;
	string phone;
	string name;
	string email;
	int index[4]={-1,-1,-1,-1};
	int seatinfo[4][3]={{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
	int j=0,i=0,r_id=1;
	int choice,seatchoice;
	char infocheck;
	Customer * C[10];
	int checker=0;
	char mainout='y';

	do{
		do{
			j=0;
			cout<<"\nWelcome to XYZ Airlines Reservation system!\n";
			cout<<"\nPlease Enter your departure city:";
			getline(cin,dep);
			string arr;
			cout<<"\nPlese Enter your Arrival city:";
			getline(cin,arr);
			string dept;
			cout<<"\nPlease Enter your preferred departure time:";
			getline(cin,dept);
			string arrt;
			cout<<"\nPlease Enter your preferred arrival time:";
			getline(cin,arrt);
			cout<<"\nSearching for Flights......\n";

			for(int i=0;i<4;i++)
			{
				if((F[i].getDestination()==dep) && (F[i].getSource()==arr)&&(F[i].getDeptTime()==dept) &&(!F[i].isFullcheck()))
				{
					index[j]=i;
					j++;
				}
			}
			if(index[0]==-1)
			{
				cout<<"\nOOPs!No flight!Try another:";
				infocheck='N';

			}
			else
			{
				i=0;
				j=0;
				while(index[i]!=-1 && i<4)
				{
					cout<<"\nFlight "<<j+1<<endl;
					if(!F[index[i]].isFullcheck())
					{
						F[index[i]].dispaly();
						j++;
					}
					i++;
				}
				cout<<"\nPlease Enter your choice (1-"<<j<<"):";
				cin>>choice;
				cout<<"\nPlease Enter Your Seat Preferance:";
				if(F[index[choice-1]].getWindowrem()==0)
				{
					if(F[index[choice-1]].getAislerem()==0)
					{
						cout<<"\nYou can only get middle seat in this flight\n";
						seatchoice=3;
					}
					else if(F[index[choice-1]].getMidrem()==0){
						cout<<"\nYou can only get Aisle seat in this flight\n";
						seatchoice=2;
					}
					else
					{
						cout<<"\n1.Aisle seat\n2.Middle seat"<<endl;
						cout<<"\nPlease Enter your choice (1-2):";
						cin>>seatchoice;
						while(seatchoice<0 ||seatchoice>2)
						{
							cout<<"\nInvalid choice!Try a Valid one!:";
							cin>>seatchoice;
						}
					}
				}
				else if(F[index[choice-1]].getAislerem()==0)
				{
					if(F[index[choice-1]].getMidrem()==0){
					cout<<"\nYou can only get Window seat in this flight\n";
					seatchoice=1;
					}
					else
					{
						cout<<"\n1.Window seat\n2.Middle seat"<<endl;
						cout<<"\nPlease Enter your choice (1-2):";
						cin>>seatchoice;
						while(seatchoice<0 ||seatchoice>2)
						{
							cout<<"\nInvalid choice!Try a Valid one!:";
							cin>>seatchoice;
						}
					}
				}
				else if(F[index[choice-1]].getMidrem()==0)
				{
					cout<<"\n1.Window seat\n2.Aisle seat"<<endl;
					cout<<"\nPlease Enter your choice (1-2):";
					cin>>seatchoice;
					while(seatchoice<0 ||seatchoice>2)
					{
						cout<<"\nInvalid choice!Try a Valid one!:";
						cin>>seatchoice;
					}
				}
				else if(F[index[i]].getAislerem()!=0 && F[index[i]].getMidrem()!=0 && F[index[i]].getWindowrem()!=0)
				{
					cout<<"\n1.Window seat\n2.Aisle seat\n3.Middle seat"<<endl;
					cout<<"\nPlease Enter your choice (1-3):";
					cin>>seatchoice;
					while(seatchoice<0 ||seatchoice>3)
					{
						cout<<"\nInvalid choice!Try a Valid one!:";
						cin>>seatchoice;
					}
				}
				cin.ignore();
				cout<<"\nPlease Enter Your Full Name:";
				getline(cin,name);

				cout<<"\nPlease Enter your Email address:";
				cin>>email;

				cout<<"\nPlease Enter Your Phone Number:";
				cin>>phone;
				cout<<"\nPlease Confirm your booking details:\n";
				cout<<"Flight: XYZ Airlines,Flight "<<choice<<endl;
				cout<<"\nDepartue:"<<dep<<" at"<< dept<<" on "<<F[index[choice-1]].getDate()<<endl;
				cout<<"\nArrival:"<<arr<<" at"<< F[index[choice-1]].getLandTime()<<" on "<<F[index[choice-1]].getDate()<<endl;
				cout<<"\nPassenger name:"<<name;
				cout<<"\nEmail Address:"<<email;
				cout<<"\nPhone Number:"<<phone<<endl;
				cout<<"\nIs this information correct? (Y/N):";
				cin>>infocheck;
			}
		}while(infocheck!='Y' &&infocheck!='y');
		cin.ignore();
		cout<<"\nPlease Enter Your Payment information:";
		string cardnum;
		string expiry,copyexpiry, receive;
		int month,year;
		cout<<"\nCard Number:";
		getline(cin,cardnum);
		cout<<"\nExpiration Date (MM/YY):";
		getline(cin,expiry);
		copyexpiry=expiry;
		receive=strtok(&copyexpiry[0],"/");
		month=stoi(&receive[0]);
		receive=strtok(NULL,"\0");
		year=stoi(&receive[0]);
		if((year<23)||((year==23) && (month<4)))
		{
			cout<<"\nBooking Unsuccessful !program aborted:";
			exit(0);
		}
		cout<<"\nCVV: 123"<<endl;
		cout<<"\nProcessing Payment...."<<endl;
		cout<<"\nPayment Successful!Thankyou For Using XYZ Airlines"<<endl;
		switch(seatchoice)
		{
		case 1:
			C[checker]=new Customer(r_id,name,cardnum,phone,email,&F[index[choice-1]],"Window");
			break;
		case 2:
			C[checker]=new Customer(r_id,name,cardnum,phone,email,&F[index[choice-1]],"Aisle");
			break;
		case 3:
			C[checker]=new Customer(r_id,name,cardnum,phone,email,&F[index[choice-1]],"Middle");
			break;

		}
		seatinfo[index[choice-1]][seatchoice-1]+=1;
		cout<<"R_id="<<(C[checker]->getR().getResId())<<endl;
		cout<<"Seat No:"<<(C[checker]->getR().getSeatnum())<<endl;
		cout<<"Name:"<<C[checker]->getName()<<endl;
		cout<<"\nDo you want to continue:(Y/N)";
		cin>>mainout;
		while(mainout!='Y' && mainout!='y' && mainout!='N' && mainout!='n')
		{
			cout<<"\nInvalid input!";
			cin>>mainout;
		}
		checker++;
	}while(mainout =='y' || mainout=='Y');
	for(int i=0;i<checker;i++)
	{
		delete C[i];
	}

}




