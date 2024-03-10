/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern in range 1-4:";			
	cin>>num;
	while(num<1 || num>4)			//validating and taking right input.
	{
		cout<<"\nLength out of range!try again:";
		cin>>num;
	}
	for(int i=1;i<=2;i++)		//loop for printing line with _ two times.  
	{
		for(int l=1;l<=num*20;l++)
		{
			cout<<"_";
		}
		cout<<endl;
		if(i==2)		//for second time of i loop program exit.
			break;
		for(int j=1;j<=num*5;j++)	//loop for printing line 2.
		{
			cout<<"_-^-";
		}
		cout<<endl;
		for(int m=1;m<=num;m++)	//nested loops for printing numbers 2 time in 1 line.
		{
			for(int k=1;k<=9;k++)
				for(int l=1;l<=2;l++)
			{
				cout<<k;
			}
			cout<<"00";
		}
		cout<<endl;
	}
}
