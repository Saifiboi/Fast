#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter three numbers:";
	cin>>num1>>num2>>num3;
	if(num1==num2)
	{
		if(num1==num3)
			cout<<"\n Numbers are equal.\n";
		else
			cout<<"\nNumbers are not equal.\n";
	}
	else
		cout<<"\nNumbers are not equal.\n";
}
