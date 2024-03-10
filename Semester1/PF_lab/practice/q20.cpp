#include<iostream>
using namespace std;
bool multiple(int a,int b)
{
	if(b%a==0)
		return 1;
	else 
	return 0;	
}
int main()
{
	int a,b;
	bool res;
	cout<<"\nEnter two numbers:";
	cin>>a>>b;
	res=multiple(a,b);
	if(res==1)
		cout<<b<<" IS A MULTIPLE OF "<<a<<endl;
	else if (res==0)
		cout<<b<<" IS NOT A MULTIPLE OF "<<a<<endl;
}
