#include<iostream>
using namespace std;
int main()
{
	short num;
	cout<<"\nEnter the number of rows only odd:";
	cin>>num;
	while(num%2==0)
	{	
		cout<<"\nInvalid Input!Type again:";
		cin>>num; 
	}		//num=7;
	for(short i=1,j=num/2;i<=num;i+=2,j--)
	{
		for(short k=j;k>=1;k--)
			cout<<" ";
		for(short l=1;l<=i;l++)
			cout<<"*";
		cout<<endl;
	}
	for(short i=num-2,j=1;i>=1;i-=2,j++)
	{
		for(short k=1;k<=j;k++)
			cout<<" ";
		for(short l=i;l>=1;l--)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
