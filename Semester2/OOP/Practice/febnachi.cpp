#include<iostream>
using namespace std;

int fibnachi(int n)
{
	if((n==0)||(n==1))
	{
		return n;
		
	}
	else
	{
		return fibnachi(n-1)+fibnachi(n-2);
	}
}
void recall(int n)
{
	if(n==1)
	{
		cout<<fibnachi(0)<<"\t";
	}
	else 
	{
		recall(n-1);
		cout<<fibnachi(n-1)<<"\t";
	}
	
}
int main()
{
	recall(7);
}
