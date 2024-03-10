#include<iostream>
using namespace std;
void ADD(int a,int b,int &c)
{
	c=a+b;
}
int main()
{
	int a,b,c;
	cout<<"\nEnter the value of A:";
	cin>>a;
	cout<<"\nEnter the value of B:";
	cin>>b;
	ADD(a,b,c);
	cout<<"\nThe sum is :"<<c<<endl;
}
