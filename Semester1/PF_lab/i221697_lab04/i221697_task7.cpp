#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int timsec,timemint,timehrs;
	cout<<"\nEnter time in seconds:";
	cin>>timsec;
	timemint=timsec/60;
	timsec=timsec%60;
	timehrs=timemint/60;
	timemint=timemint%60;
	cout<<timehrs<<"hours :"<<timemint<<"minutes :"<<timsec<<"seconds"<<endl;
}
