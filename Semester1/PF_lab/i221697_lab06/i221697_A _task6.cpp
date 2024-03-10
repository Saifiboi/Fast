#include<iostream>
using namespace std;
int main ()
{
	int num1,num2,num3;
	cout<<"\n Enter three numbers:";
	cin>>num1>>num2>>num3;
	if (num1>num2)
		{
			if(num1>num3)
			{
				cout<<endl<<num1<<"is greater\n";
			}
			else if(num3>num1)
			{
				cout<<endl<<num3<<"is greater\n";
			}
			else
		             cout<<endl<<"num1 and num3 are same\n";
     		}
	else if(num2>num1)
		{
			if (num2>num3)
			{
				cout<<endl<<num2<<"is greater\n";
			}
			else if (num3>num2)
			{
				cout<<endl<<num3<<"is greater\n";
			}
			else
				cout<<endl<<"num2 and num3 are same\n";
		}
	else
		cout<<endl<<"num1 and num2 are same\n";
}
			
