#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<1 || num%2==0)
	{
		cout<<"\nInvalid input :Try again";
		cin>>num;
	}
	for(int i=1,k=0;i<=num/2+1;i++,k+=2)
	{
		for(int j=num/2;j>=i;j--)
			cout<<" ";
		cout<<"*";
		for(int l=1;l<=k;l++)
		{
			cout<<" ";
		}
		if(k!=0)
		{	
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=num/2,k=num-3;i>=1;i--,k-=2)
	{
		for(int j=num/2;j>=i;j--)
			cout<<" ";
		cout<<"*";
		for(int l=k;l>=1;l--)
		{
			cout<<" ";
		}
		if(k!=0)
		{	
			cout<<"*";
		}
		cout<<endl;
	}
}
