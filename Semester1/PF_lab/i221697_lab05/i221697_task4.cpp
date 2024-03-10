#include<iostream>
using namespace std;
int main()
{
	int noHrs,extraHrs,total;
	bool check;
	cout<<"\nEnter the number of hours you worked :";
	cin>>noHrs;
	check=noHrs/40;
	
	extraHrs=noHrs-40;
	noHrs=noHrs-(check*extraHrs);
	total=noHrs*1000+(check*extraHrs*1500);
	cout<<"\nThe total amount is"<<total<<endl;
}
	
