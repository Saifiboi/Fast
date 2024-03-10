#include<iostream>
using namespace std;
int main()
{
	int num1,num2,*p1,*p2;
	cout<<"\nEnter the first number:";
	cin>>num1;
	cout<<"\nEnter the second number:";
	cin>>num2;
	p1=&num1;
	p2=&num2;
	cout<<"\nThe sum of the entered number is:"<<*p1+*p2<<endl;
}
