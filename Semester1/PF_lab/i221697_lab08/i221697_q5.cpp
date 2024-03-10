#include<iostream>
using namespace std;
int main()
{
	int num1,num2,gcd,counter=1;
	bool check1,check2;
	cout<<"\nEnter the first and second number:";
	cin>>num1>>num2;
	
	if (num1>0 && num2>0)
	{
		check1=num1>num2;
		check2=num2>num1;
		while(counter<=(check1*num1)||counter<=(check2*num2))
		{
			if((num1%counter==0)&&(num2%counter==0))
				gcd=counter;
			counter+=1;
		}
		cout<<"\nThe Gcd of numbers is:"<<gcd<<endl;
	}
	else
		cout<<"\nInvalid Input!\n";
		
}
	
	
