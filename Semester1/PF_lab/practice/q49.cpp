#include<iostream>
using namespace std;
int main()
{
	int units;
	float bill=0;
	cout<<"\nEnter number of units:";
	cin>>units;
	if(units>0 && units <100)
	{
		bill=units*9;
	}
	else if(units>=100 && units <200)
	{
		bill=units*11;
	}
	else if(units>=200 && units <300)
	{
		bill=units*9;
	}
	if(bill<750)
	{
		bill+=(0.05*bill);
	}
	else
	{
		bill+=(0.07*bill);
	}
	cout<<"\nThe total bill:"<<bill<<endl;
}
