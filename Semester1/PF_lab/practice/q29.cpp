#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number of lines:";
	cin>>num;
	while(num<0 || num%2==0)
	{
		cout<<"\nInvalid Input !try again:";
		cin>>num;
	}
	for(int i=1;i<=num;i+=2)
	{
		for(int k=num;k>=i;k-=2)
			cout<<" ";
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;	
	}
	for(int i=num-2;i>=1;i-=2)
	{
		for(int k=num/2;k>=i/2;k--)
			cout<<" ";
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	
}

