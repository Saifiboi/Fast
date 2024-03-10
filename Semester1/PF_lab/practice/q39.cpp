#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int marks;
	cout<<"Grade Calculator\n";
	cout<<setw(40)<<setfill('_')<<""<<endl;
	cout<<"\nEnter marks of student:";
	cin>>marks;
	if(marks<0 || marks>100)
	{
		cout<<"\nInvalid Input!"<<endl;
		
	}
	else if(marks>=90)
	{
		cout<<"\nYour Grade is :A+"<<endl;
	}
	else if(marks>=80 && marks<=89)
	{
		cout<<"\nYour Grade is :A"<<endl;
	}
	else if(marks>=70 && marks<=79)
	{
		cout<<"\nYour Grade is :B"<<endl;
	}
	else if(marks>=60 && marks<=69)
	{
		cout<<"\nYour Grade is :C"<<endl;
	}
	else if(marks>=50 && marks<=59)
	{
		cout<<"\nYour Grade is :D"<<endl;
	}
	else
	{
		cout<<"\nYour Grade is :F"<<endl;
	}
	
}
