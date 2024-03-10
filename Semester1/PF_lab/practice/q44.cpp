#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"\nEnter two numbers:";
	cin>>num1>>num2;
	if((num1^num2)==0)
		cout<<"\nThey are equal:\n";
	else
		cout<<"\nThey are not equal:\n";
}
