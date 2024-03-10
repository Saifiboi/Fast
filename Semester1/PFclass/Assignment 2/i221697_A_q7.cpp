/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
  	int hardness,tensile;
  	float crbn_cntnt;
  	bool check1=0,check2=0,check3=0;
  	
  	cout<<"\nCarbon Grade Calculator!\n";
  	cout<<"\nEnter Hardness,Carbon content,Tensile strength of steel:";
  	cin>>hardness>>crbn_cntnt>>tensile;
  	
  	if (hardness>50)		//checking condition 1.
  		check1=1;
  		
  	if (crbn_cntnt<0.7)		//checking condition 2.
  		check2=1;
  		
  	if (tensile>5600)		//checking condition 3.
  		check3=1;
  		
  	if(check1==1 && check2==1 && check3==1)		//checking if all three conditions are true.
  		cout<<"\nGrade = 10\n";
  		
  	else if(check1==1 && check2==1)			//checking condition 1 and 2 are true.
  		cout<<"\nGrade = 9\n";
  		
  	else if(check1==1 && check3==1)			//checking condition 1 and 3 are true.
  		cout<<"\nGrade = 7\n";
  		
  	else if(check2==1 && check3==1)			//checking condition 2 and 3 are equal.
  		cout<<"\nGrade = 8\n";
  		
  	else if(check1==1 || check2==1 || check3==1)	//checking if any condition is true.
  		cout<<"\nGrade = 6\n";
  	else 
  		cout<<"\nGrade = 5\n";
  }
