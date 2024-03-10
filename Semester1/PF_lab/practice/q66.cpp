#include<iostream>
using namespace std;
int main()
{
	int range;
	cout<<"\nEnter the range(0-9) only odd:";
	cin>>range;
	while(range<0 || range >9 || range%2==0)
	{
		cout<<"\nInvalid Input!:";
		cin>>range;
	}
	for(int i=1;i<=range;i+=2)
	{
		for(int j=range/2-1;j>=i/2;j--)
		{
			cout<<" ";
		}
		for(int  k=1;k<=i;k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
	for(int i=range-2;i>=1;i-=2)
	{
		for(int j=2;j<=range-i;j+=2)
		{
			cout<<" ";
		}
		for(int  k=1;k<=i;k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
}
