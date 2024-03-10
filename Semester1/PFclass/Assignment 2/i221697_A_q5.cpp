/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	int date,month;
  	
  	cout<<"\nSeason Calculator!\n";
  	cout<<"\nEnter the Date and Month :";
  	cin>>date>>month;
  	
  	if (date>0&&date<31)		//checking Date is valid.
  	{
	  	if(month==3)						//below  months having two seasons are elaborated.
	  		{
	  			if(date>=16)
	  				cout<<"\nSpring!\n";
	  			else
	  				cout<<"\nWinter!\n";
	  		}
	  	else if(month==6)
	  		{
	  			if(date>=16)
	  				cout<<"\nSummer!\n";
	  			else
	  				cout<<"\nSpring!\n";
	  		}
	  	else if(month==9)
	  		{
	  			if(date>=16)
	  				cout<<"\nFall!\n";
	  			else
	  				cout<<"\nSummer!\n";
	  		}
	  	else if(month==12)
	  		{
	  			if(date>=16)
	  				cout<<"\nWinter!\n";
	  			else
	  				cout<<"\nFall!\n";
	  		}
	  	else if(month>0 && month<3)		//months having 1 season are discussed.	
	  		cout<<"\nWinter!\n";
	  		
	  	else if(month>3 && month<6)
	  		cout<<"\nSpring!\n";
	  		
	  	else if(month>6 && month<9)
	  		cout<<"\nSummer!\n";
	  		
	  	else if(month>9 && month<12)
	  		cout<<"\nFall!\n";
	  	else
			cout<<"\nInvalid Month!\n";
	  }
	  else				//error message in case of invalid input.
	  
	  	cout<<"\nInvalid Date!\n";
   }
