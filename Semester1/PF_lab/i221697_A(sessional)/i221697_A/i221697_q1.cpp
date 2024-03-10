#include<iostream>
using namespace std;
int main()
{
	float time,ext=0.59;
	float fraction,bill=0.0;
	int mints;
	cout<<"\nEnter time";
	cin>>time;
	cout<<"\nEnter minutes";
	cin>>mints;
	
	fraction=time-static_cast<int>(time);
	if((fraction>ext)||(static_cast<int>(time)>23))
	{
		cout<<"\nInvalid input!";
	}
	else if(time>=00.00 && time<=06.59)
	{
		bill=0.12*mints;
	}
	else if(time>=07.00 && time<=13.00)
	{
		bill=0.55*mints;
	}
	else if(time>=13.01 && time<=19.59)
	{
		bill=0.45*mints;
	}
	else if(time>=20.00 && time<=23.59)
	{
		bill=0.35*mints;
	}
	cout<<"\nThe bill is :"<<bill<<endl;	
}
