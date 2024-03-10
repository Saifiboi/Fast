#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter a number :";
	cin>>num;
	if(num>0)
	{
		if(num%5==0)
		{
			cout<<"\nTrue!\n";
		}
		else
		{
			cout<<"\nFalse!\n";
		}
	}
	else
	{
		cout<<"\nFalse!\n";
	}
}
