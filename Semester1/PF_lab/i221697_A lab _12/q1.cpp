#include<iostream>
using namespace std;
void reduce(int &numerator,int &denominator)
{
	if(numerator>denominator)
	{
		for(int i=1;i<=numerator;i++)
		{
			if((numerator%i==0) && (denominator%i==0))
				{
					numerator=numerator/i;
					denominator=denominator/i;
				}
		}
	}
	if(numerator<denominator)
	{
		for(int i=1;i<=denominator;i++)
		{
			if((numerator%i==0) && (denominator%i==0))
				{
					numerator=numerator/i;
					denominator=denominator/i;
				}
		}
	}		
}
int main()
{
	int num1,num2;
	cout<<"\nEnter two numbers:";
	cin>>num1>>num2;
	reduce(num1,num2);
	cout<<"\nThe result is:"<<num1<<"/"<<num2<<endl;
}
