#include<iostream>
using namespace std;
int main()
{
	int range;
	cout<<"\nEnter the range(0-9):";
	cin>>range;
	while(range<0 || range >9)
	{
		cout<<"\nInvalid Input!:";
		cin>>range;
	}
	for(int i=1;i<=range;i++)
	{
		for(int l=1;l<=i;l++)
		{
			cout<<l;
		}
		for(int j=1;j<=range-i;j++)
		{
			cout<<"  ";
		}
		for(int k=i;k>=1;k--)
		{
			cout<<k;
		}
		cout<<endl;
		
	}
}
