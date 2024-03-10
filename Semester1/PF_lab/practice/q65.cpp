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
	for(int i=1,l=1;i<=range;i+=2,l++)
	{
		for(int j=range-i;j>=1;j--)
		{
			cout<<" ";
		}
		
		for(int m=l;m<=i;m++)
		{
			cout<<m;
		}
		for(int m=i-1;m>=l;m--)
		{
			cout<<m;
		}
		cout<<endl;
	}
}
		
