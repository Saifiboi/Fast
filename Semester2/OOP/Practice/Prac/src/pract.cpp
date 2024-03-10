
#include <iostream>
#include<cmath>
using namespace std;
void last(int *p,int size)
{
	if(size<=1)
	{
		return;
	}
	else
	{
		if(p[size-2]>p[size-1])
		{
			p[size-2]=p[size-2]-p[size-1];
			p[size-1]=p[size-1]+p[size-2];
			p[size-2]=p[size-1]-p[size-2];
		}
		last(p,size-1);
	}
}
void sort(int *p,int size,int iter=0 )
{
	if(iter>=size-1)
	{
		return;
	}
	else
	{
		last(p,size);
		sort(p,size);
	}
}
class a{
	int A;
	static char c;
public:
	a(){}
	a(a &A)
	{
		cout<<"Copy:";
	}
	static void  print(){
		cout<<c;
	}
	a nothing()
	{
		return *this;
	}
};
template <class t>
class B:virtual public a{
	t tit;
};
int approx(int i)
{
	if(i==0)
	{
		return 0;
	}
	else if(i%2==1)
	{
		return approx(i-1);
	}
	else
	{	if((i/2)%2==0)
			return approx(i-1)+pow(3,i/2)+(5*i/2);
		return approx(i-1)+pow(3,i/2)-(5*i/2);
	}
}
void print(string n,int par)
{
	if(par==0)
	{
		return;
	}
	else
	{
		cout<<"(";
		if(par==1)
			cout<<n;
		print(n,par-1);
		cout<<")";
	}
}


