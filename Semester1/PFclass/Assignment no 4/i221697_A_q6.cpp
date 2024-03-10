/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
using namespace std;
void cheer_printer(int,int);
int main()
{
	float line,cheer;
	cout<<"\nEnter the  integer number of lines and cheers:";
	cin>>line>>cheer;
	while(line<0 || (line/static_cast<int>(line)!=1))		//input validation on lines.
	{
		cout<<"\nInvalid input !lines cant be negative or float!Try again:";
		cin>>line;
	}
	while(cheer<0 || (cheer/static_cast<int>(cheer)!=1))		//input validation on cheers.
	{
		cout<<"\nInvalid input !cheers cant be negative of float!Try again:";
		cin>>cheer;
	}
	cheer_printer(line,cheer);
}
void cheer_printer(int line,int cheer)
{
	for(int i=0;i<=line-1;i++)
	{
		for(int j=1;j<=i;j++)		//loops for initial spaces of indentation.
		{
			cout<<" ";
		}
		for(int k=1;k<=cheer;k++)
		{
			cout<<"GO ";		//displaying Go.
			if(k==cheer)		//breaking for last iteration.
			{
				cout<<endl;
				break;
			}
			cout<<"Buddy ";		//displaying buddy.
		}
	}
}
