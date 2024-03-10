#include<iostream>
using namespace std;
void LetsDoThis(int &num1,int &num2,int &largest)
{
	if(num1>num2)
		largest=num1;
	else if(num2>num1)
		largest=num2;
}
void LetsDoThis(int &num1,int &num2,int &num3,int &largest)
{
	if(num1>num2 && num1>num3)
		largest=num1;
	else if(num2>num1 && num2>num3)
		largest=num2;
	else if(num3>num1 && num3>num2)
		largest=num3;
}
int main()

{
	int largest=0;
	int choice;
	cin>>choice;
	int num1,num2,num3;
	if(choice==1)
	{
		cin>>num1>>num2;
		LetsDoThis(num1,num2,largest);
	}
	else if(choice==2)
	{
		cin>>num1>>num2>>num3;
		LetsDoThis(num1,num2,num3,largest);
	}
	cout<<endl<<largest;	
}

