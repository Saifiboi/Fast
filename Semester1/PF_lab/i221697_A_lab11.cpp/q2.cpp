#include<iostream>
using namespace std;

bool multiple(int,int);

int main()
{
	int num1,num2;
	bool receive;
	for(int i=1;i<=3;i++)
	{
		cout<<"\nEnter two integers:";
		cin>>num1>>num2;
		receive=multiple(num1,num2);
		if(receive==1)
		{
			cout<<"\n"<<num1<<" is a multiple of "<<num2<<endl;
		}
		else
		{
			cout<<"\n"<<num1<<" is not a multiple of "<<num2<<endl;
		}
		
		
	}
}

bool multiple(int x,int y)
{
	if(y%x==0)
		return 1;
	else
		return 0;
}
