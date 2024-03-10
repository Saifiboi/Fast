#include<iostream>
using namespace std;
void add(int ,int,int*);
int main()
{
	int c=0;
	add(2,3,&c);
	cout<<"\nThe C:"<<c<<endl;
}
void add(int a,int b,int *c)
{
	*c=a+b;
}
