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
	for(int i=1;i<=num/2+1;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<"* ";
		cout<<endl;	
	}
	for(int i=num/2;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
			cout<<"* ";
		cout<<endl;
	}
	
}
