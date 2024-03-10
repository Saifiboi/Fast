#include<iostream>
using namespace std;
int main()
{
	int num,prod=1;
	cout<<"\nEnter a number:";
	cin>>num;
	while(num<0 || num>20)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>num;
	}
	for(int i=1;i<=num;i++)
	{
		prod*=i;
	}
	cout<<"\nThe factorial of number is :"<<prod<<endl;
	
	
}
