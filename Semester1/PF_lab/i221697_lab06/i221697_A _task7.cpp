#include<iostream>
using namespace std;
int main ()
{
	int num1 ,num2 ,num3;
	cout<<"\nEnter three numbers:";
	cin>>num1>>num2>>num3;
	if (num1==num2)
		{
			if (num3==num2)
			{	
				cout<<"\n All three numbers are equal\n";
			}
			else
				cout<<"\nAll three numbers are not equal\n";
		}
	else
		cout<<"\nAll three numbers are not equal\n";
}
