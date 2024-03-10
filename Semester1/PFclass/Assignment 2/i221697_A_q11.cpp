/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>
#include<string>

using namespace std;

int main()
  {
  	 unsigned int id,belt_no,batch_no,log_no,unit_no;
  	 string name;
  	 cout<<"\nPersonal Data calculator!\n";
  	 cout<<"\nEnter Name of Army Man: ";
  	getline (std::cin,name);		//Taking string name with spaces.
	  	 
  	cout<<"\nEnter ID of Army Man: ";
  	cin>>id;				//Taking 32 bit Id of army man.
  	
  	belt_no= id & 127;			//Retreiving last 7 bits of Id i.e.belt number.
  	cout<<"\nBelt number of "<<name<<" is:    "<<belt_no;
  	id >>= 7;				//shifting bits of Id towards right by 7 places.
  	
  	batch_no=id&1023;			//Retreiving last 10 bits from Id i.e.batch number
  	cout<<"\nBatch number of "<<name<<" is:  "<<batch_no;
  	id >>=10;				//shifting bits of Id towards by 10 places.
  	
  	log_no=id&31;				//Retrieving last 5 bits from Id i.e.Log number. 
  	cout<<"\nLog number of "<<name<<" is:     "<<log_no;
  	id>>=5;					//shifting bits towards right by 5 places. 
  	
  	unit_no=id;				//Retreiving 4 remaining bits i.e.unit Id.
  	cout<<"\nUnit number of "<<name<<" is:   "<<unit_no<<endl;;
  	
  	
  	
  }
