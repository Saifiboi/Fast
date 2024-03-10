#include<iostream>
#include<cmath>
using namespace std;
void reverse(int &a)
{
	int backup=a,l=0,dig=0;
	while(backup>0)
	{
		backup/=10;
		l++;
	}
	backup=a;
	a=0;
	while(backup>0)
	{
		dig=backup%10;
		backup/=10;
		a+=(dig*pow(10,l-1));
		l--;
		
	}
	
}
int main()
{
	int a,b;
	cout<<"\nEnter the values of A and B:";
	cin>>a;
	reverse(a);
	cout<<"\nA:"<<a<<endl;
	
}
