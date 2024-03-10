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
		cout<<"\nLength can't be negative!try again:";
		cin>>num;
	}
	
	int counter=1,i=1;
	do{	
		if(counter==num+3)
			cout<<"..."<<endl;
		else if(counter>num)
		cout<<"...,";
		else
			cout<<i<<"/"<<i+1<<",";
		i=(i*2)+1;			//updation of numerator.
		counter++;
	}while(counter <= num+3);
}
