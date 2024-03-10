#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter three numbers:";
	cin>>num1>>num2>>num3;
	if(num1>num2)
	{
		if(num1>num3)
			cout<<num1<<" is greater.\n";
		else
			cout<<num3<<" is greater.\n";
	}
	else
	{
		if(num2>num3)
			cout<<num2<<" is greater.\n";
		else
			cout<<num3<<" is greater.\n";
	}
}
