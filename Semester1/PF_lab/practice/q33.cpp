#include<iostream>
using namespace std;
int main()
{
	int num,even=0,odd=0;
	cout<<"\nEnter 10 integers:";
	for(int i=1;i<=10;i++)
	{
		cin>>num;
		if(num%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		
	}
	cout<<"\nEven number entered:"<<even<<" and odd:"<<odd<<endl;
}
