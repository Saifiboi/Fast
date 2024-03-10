#include<iostream>
using namespace std;
void printseq(int n)
{
	if(n==0)
	{
		cout<<0<<"\t";
	}
	else
	{
		printseq(n-1);
		cout<<n<<"\t";
	}
}
void recurse(int n)
{
	if(n==0)
	{
		
		
		printseq(0);
		cout<<endl;
	}
	else
	{
		
		printseq(n);
		cout<<endl;
		recurse(--n);
		
		
		
	}
}
int main()
{
	recurse(4);
}
