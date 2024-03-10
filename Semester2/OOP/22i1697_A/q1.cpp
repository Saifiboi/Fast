//============================================================================
// Name        : SAIF UR REHMAN
// ASSIGNMENT  : 03
// QUESTION    : 1
// FILE        : MAIN.CPP
//============================================================================
// including required header files
#include<string>
#include<iostream>
#include<iomanip>
#include<ctime>

// including the classes we need
#include "Calender.cpp"
#include"Date.cpp"

using namespace std;

int main()
{
	// declaring variables
	int month, year;
	time_t now=time(0);
	tm* localtm=localtime(&now);
	year=1900+localtm->tm_year;
	month=1+localtm->tm_mon;
	// creating an instance of Calender class
	Calender C;

	// displaying the calendar of the current month and year
	C.Display(month, year);

	// declaring variables and initializing
	int choice;
	char ch='y';

	// creating a menu-driven program using switch statement
	while(ch=='y'||ch=='Y')
	{
		cout<<"\nFunctionality Menu:::\n";
		cout<<"1.Display calendar\n";
		cout<<"2.Difference between Dates\n";
		cout<<"3.Move forward in dates\n";
		cout<<"4.Move Backward in dates\n";
		cin>>choice;
		while(choice<0 || choice>4)
		{
			cout<<"\nInvalid Choice !Enter Valid one:";
			cin>>choice;
		}
		switch(choice){
		case 1:
			// calling the function to print the calendar
			C.printCal();
			break;
		case 2:
		{
			int day,month,year;
			string date,copy;
			cout<<"\nEnter Date 1(comma separated):";
			cin>>date;
			copy=date;
			day=stoi(strtok(&copy[0],","));
			month=stoi(strtok(NULL,","));
			year=stoi(strtok(NULL,","));
			if(year<0)
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			if(month<0 || month>12)
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			if(day<0||day>noDays(month,year))
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			// creating instances of the Date class to perform date calculations
			Date D(day,month,year);
			cout<<"\nEnter Date 1(comma separated):";
			cin>>date;
			copy=date;
			day=stoi(strtok(&copy[0],","));
			month=stoi(strtok(NULL,","));
			year=stoi(strtok(NULL,","));
			if(year<0)
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			if(month<0 || month>12)
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			if(day<0||day>noDays(month,year))
			{
				cout<<"\nInvalid input !program aborted:";
				exit(-1);
			}
			// creating instances of the Date class to perform date calculations
			Date D1(day,month,year);
			D1-D;
			break;}
		case 3:
		{
			// creating an instance of the Date class to perform date calculations
			Date D2;
			D2.dateahead();
			break;
		}
		case 4:
		{
			// creating an instance of the Date class to perform date calculations
			Date D3;
			D3.datebeyoned();
			break;
		}
		}
		cout<<"\nDo you Want to continue!y for yes n for no:";
		cin>>ch; 
		while(ch!='y' && ch!='Y' && ch!='n' && ch!='N')
		{
			cout<<"\nInvalid character!please Enter a valid one:";
			cin>>ch;
		}
	}

}

