#include<iostream>
using namespace std;
int main()
{
	int num1,num2,gcd,larger;
	cout<<"\nEnter the first numbers:";
	cin>>num1;
	while(num1<0)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>num1;
		
	}
	cout<<"\nEnter the second numbers:";
	cin>>num2;
	while(num2<0)
	{
		cout<<"\nInvalid Input!Try Again:";
		cin>>num2;
		
	}
	if(num1>num2)
		larger=num1;
	else 
		larger=num2;
	int i=1;
	while(i<=larger)
	{
		if(num1%i==0 && num2%i==0)
			gcd=i;
		i++;
	}
	cout<<"\nThe GCD :"<<gcd<<endl;
	
	
}
