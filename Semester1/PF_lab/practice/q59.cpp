#include<iostream>
using namespace std;
int main()
{
	int time;
	cout<<"\nEnter time in seconds:";
	cin>>time;
	cout<<"\n"<<time/3600<<"hours:";
	time=time%3600;
	cout<<time/60<<"Minutes:";
	time=time%60;
	cout<<time<<"seconds"<<endl;
}
