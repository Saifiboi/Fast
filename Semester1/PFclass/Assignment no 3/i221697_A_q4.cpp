/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern:";			
	cin>>num;
	while(num<1 ||num>164)			//validating and taking right input.
	{
		cout<<"\nLength out of range!try again:";
		cin>>num;
	}
	int counter=1;				//counter represent spaces in each row.
	while(counter<=num)
	{
		int counter2=1;			//counter2 represent spaces in a row.
		cout<<"#";
		while(counter2<counter)		
		{
			cout<<" ";
			counter2++;
		}
		cout<<"#"<<endl;
		counter++;
	}
}
	
	
