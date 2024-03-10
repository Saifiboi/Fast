#include<iostream>
using namespace std;
int calculatelargest(int num1,int num2)
{
	if(num1>num2)
		return num1;
	else if(num2>num1)
		return num2;
	else
		return 0;
}
int calculatelargest(int num1,int num2,int num3)
{
	if((num1>num2)&&(num1>num3))
		return num1;
	else if((num2>num1)&&(num2>num3))
		return num2;
	else if((num3>num1)&&(num3>num2))
		return num3;
	else
		return 0;
}
int calculatelargest(int num1,int num2,int num3,int num4)
{
	if((num1>num2)&&(num1>num3)&&(num1>num4))
		return num1;
	else if((num2>num1)&&(num2>num3)&&(num2>num4))
		return num2;
	else if((num3>num1)&&(num3>num2)&&(num3>num4))
		return num3;
	else if((num4>num1)&&(num4>num2)&&(num4>num3))
		return num4;
	else
		return 0;
}

int main()
{
	int usrchoice,result,num1,num2,num3,num4;
	
	cout<<"\n***Welcome to Calculate largest number program***\n";
	cout<<"\n1.Press 1 to calculate the largest among 2 numbers.";
	cout<<"\n2.Press 2 to calculate the largest among 3 numbers.";
	cout<<"\n3.Press 3 to calculate the largest among 4 numbers.";
	cin>>usrchoice;
	switch(usrchoice)
	{
		case 1:
			cout<<"Enter two numbers:";
			cin>>num1>>num2;
			result=calculatelargest(num1,num2);
			if(result==0)
				cout<<"\nThe number are equal"<<endl;
			else
				cout<<"\nThe largest is:"<<result<<endl;
			break;
		case 2:
			cout<<"Enter 3 numbers:";
			cin>>num1>>num2>>num3;
			result=calculatelargest(num1,num2,num3);
			if(result==0)
				cout<<"\nThe number are equal"<<endl;
			else
				cout<<"\nThe largest is:"<<result<<endl;
			break;
		case 3:
			cout<<"Enter 4 numbers:";
			cin>>num1>>num2>>num3>>num4;
			result=calculatelargest(num1,num2,num3,num4);
			if(result==0)
				cout<<"\nThe number are equal"<<endl;
			else
				cout<<"\nThe largest is:"<<result<<endl;
			break;
		default:
			cout<<"Invalid input";
	}
			
}
