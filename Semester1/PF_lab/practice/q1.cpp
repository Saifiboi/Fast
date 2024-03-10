#include<iostream>
using namespace std;
int main()
{
	int *p= new int;
	int *q=new int;
	cout<<"\nEnter first  number:";
	cin>>*p;
	cout<<"\nEnter second  number:";
	cin>>*q;
	*p=*p+*q;
	cout<<"\nThe sum:"<<*p<<endl;
	delete p;
	delete q;
	p=0;
	q=0;
		
}
