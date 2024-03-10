#include<iostream>
using namespace std;
void reduce(int &a,int &b)
{
	int lower;
	if(a<b)
	{
		lower=a;
	} 
	else if(a>b)
	{
		lower=b;
	}
	for(int i=1,j=2;i<=lower;i++,j++)
	{
		if(a%j==0 && b%j==0)
		{
			a=a/j;
			b=b/j;
			j=1;
		}
	}
}
int main()
{
	int a,b;
	cout<<"\nEnter the values of A and B:";
	cin>>a>>b;
	reduce(a,b);
	cout<<"\nA:"<<a<<endl<<"B:"<<b<<endl;
	
}
