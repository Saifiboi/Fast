#include<iostream>
using namespace std;
int main ()
{

	int num1,num2,num3;
	cout<<"\nEnter three numbers:";
	cin>>num1>>num2>>num3;
	if ((num1>num2 && num1<num3)||(num1<num2 && num1>num3))
		{
			cout<<num1<<"is intermediate\n";
		}
	else if ((num2>num1 && num2<num3)||(num2<num1 && num2>num3))
		{
			cout<<num2<<"is intermediate\n";
		}
	else if ((num3>num1 && num3<num1)||(num3<num1 && num3>num3))
		{
			cout<<num3<<"is intermediate\n";
		}
}
