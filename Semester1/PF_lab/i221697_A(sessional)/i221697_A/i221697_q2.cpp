#include<iostream>
using namespace std;
int main()
{
	int length;
	cout<<"\nEnter the length of pattern:";
	cin>>length;
	for(int i=1,p=length;i<=length;i++,p--)
	{
		for(int j=p-1;j>=1;j--)
		{
			cout<<"  ";
		}
		for(int l=1;l<=i;l++)
		{
			cout<<l<<" ";
		}	
		for(int m=i-1;m>=1;m--)
		{
			cout<<m<<" ";
		}
		cout<<endl;
	}
}
