
/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern 1-15:";			
	cin>>num;
	while(num<1 || num>15)			//validating and taking right input.
	{
		cout<<"\nLength can't be negative or out of range!try again:";
		cin>>num;
	}	
	int counter=1;		//counter for displying 9 spaces and |  6 times in a line.

	while(counter<=num)
	{	
		int counter2=1;
		while(counter2<=9)	//loops for spacings in line 1.
		{
			cout<<" ";
			counter2++;
		}
		cout<<"|";		//printing | 6 times.
		counter++;
	}
	cout<<endl;
	counter=1;			//counter for displaying 10 digits 6 times in one line.
	while(counter<=num)
	{	
		int counter2=1;
		while(counter2<=9)	//loop for displaying 9 digits 1-9.
		{
			cout<<counter2;
			counter2++;
		}
		cout<<"0";		//dispaying 0 digit 6 times.
		counter++;
	}
	cout<<endl;
	
}
