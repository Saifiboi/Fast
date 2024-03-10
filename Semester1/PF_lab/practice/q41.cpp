#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	if(num==0)
	{
		cout<<"\nIt Is zero:\n";
	}
	else if(num%2==0)
	{
		cout<<"\nIt Is even:\n";
	}
	else if(num%2==1)
	{
		cout<<"\nIt Is odd:\n";
	}
}
