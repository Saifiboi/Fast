/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
using namespace std;
bool cnvrtr(int);
int main()
{
	bool result;
	float pkr;
	cout<<"\nEnter the  integer Price in PKR:";
	cin>>pkr;
	while(pkr<0 || (pkr/static_cast<int>(pkr)!=1))			//input validation on price.
	{
		cout<<"\nInvalid input !Price cant be negative or float!Try again:";
		cin>>pkr;
	}	
	result=cnvrtr(pkr);		//calling function.
	if(result==1)
	{
		cout<<"\nThe Price is convertable in PAR\n";
	}
	else
		cout<<"\nThe Price is not convertable in PAR\n";
}
bool cnvrtr(int num)
{
	num=num%20;		//reducing number in terms of 20,9,6.
	num=num%9;
	num=num%6;
	if(num==0)		//checkinf if number is completely reduced.
		return 1;
	else
		return 0;
}
