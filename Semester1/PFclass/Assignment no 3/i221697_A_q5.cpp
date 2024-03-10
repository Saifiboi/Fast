/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern from 1 to 9:";
	cin>>num;
	while(num<1 || num>9)			//validating and taking right input.
	{
		cout<<"\nLength out of range!try again:";
		cin>>num;
	}
	int counter=1,space=num;		//counter is inc number to be printed space is dec number of spaces.
	while(counter<=num)
	{
		int counter2=1;			//counter2 printing number in each row.
		int space_cntr=1;		//space_cntr printing spaces in each row.
		while(space_cntr<space)
		{
			cout<<" ";
			space_cntr++;
		}
		while(counter2<=counter)
		{
			cout<<counter;
			counter2++;
			
		}
		cout<<endl;
		counter++;
		space--;
	}
}
