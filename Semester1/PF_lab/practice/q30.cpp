#include<iostream>
using namespace std;
int main()
{
	int num1,num2,larger,gcd;
	cout<<"\nEnetr first number :";
	cin>>num1;
	cout<<"\nEnetr second number :";
	cin>>num2;
	if(num1>num2)
		larger=num1;
	else
		larger=num2;
	int i=1;
	while(i<=larger)
	{
		if((num1%i==0) && (num2%i==0))
		{
			gcd=i;
		}
		i++;
	}
	cout<<"\nThe Gcd is:"<<gcd<<endl;
}
