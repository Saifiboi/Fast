#include<iostream>
using namespace std;
int main()
{
	int num,limit;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<0)
	{
		cout<<"\nInvalid Input:try again:";
		cin>>num;
	}
	cout<<"\nEnter the limit:";
	cin>>limit;
	while(limit<0)
	{
		cout<<"\nInvalid Input:try again:";
		cin>>limit;
	}
	for(int i=1;i<=limit;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
