/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
using namespace std;
bool highLow(int);			//function prototype.
int main()
{
	float num;
	bool result;
	cout<<"\nEnter the  integer number:";
	cin>>num;
	while(num<0 ||(num/static_cast<int>(num)!=1))			//input validation.
	{
		cout<<"\nInvalid number !number cant be negative or float!Try again:";
		cin>>num;
	}
	result=highLow(num);		//calling function.
	if(result==1)
	{
	
		cout<<"\nThe number has alternating \"high\" and \"low\" digits\n";
	}
	else
	{
		cout<<"\nThe number does not have alternating \"high\" and \"low\" digits\n";
	}
	
	
}
bool highLow(int num)
{
	if(num%10==0)		//number having 1 digit.
	{
		return 1;
	}
	else			//in case of more than 1 digit.
	{
		short dig ,high=0,low=0,check1=0,check2=0;
		while(num>0)
		{
			dig=num%10;		//breaking into digits.
			num=num/10;
			if(dig>=0 && dig<=4)		//checking for low.
			{
				low=(low+1)+(10*check1);	//low variable on.
				high=high-1;		//high variable will be  off in case of alternativeness..
				check1+=1;	
				check2=0;
			}
			else if(dig>=5 && dig<=9)
			{
				high=(high+1)+(10*check2);	//high variable on.
				low=low-1;	//low variable will be  off in case of alternativeness..	
				check2+=1;
				check1=0;
			}
		}
		if((high==1 && low==0) || (low==1 && high==0) || (low==0 && high==0))
			return 1;		//returning in case of alternatives.
		else 
			return 0;
	}
}
