#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<1 ||num>20)
	{
		cout<<"\nInvalid input :Try again";
		cin>>num;
	}
	for(int i=0;i<=num;i++)
	{
		for(int j=i+1;j<=num;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<"|";
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
