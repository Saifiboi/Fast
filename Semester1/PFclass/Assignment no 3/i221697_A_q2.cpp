/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	srand(time(0));
	int num,color;
	for (int i=1;i<=5;i++)
	{
		cout<<"Enter length of bar "<<i<<" :";
		cin>>num;				//taking 5 lengths.
		if(num<1 || num>30)			//validating input.
		{
			cout<<"\nNumber is out of specified range !Try again\n";
			i--;				//keeping i same as previous.
			continue;	
		}
		else
		{
			color=rand()%7+30;		//generating random color number.
			for(int j=1;j<=num;j++)
			{
				cout<<"\033[1;"<<color<<"m"<<"*";
			}
			cout<<"\033[0m";		//reseting color to default white.
			cout<<endl;
		}
	} 
}
