#include<iostream>
using namespace std;
int main()
{
	int hrs,bill,extrahrs;
	bool check;
	cout<<"\nEnter the number of hours youworked:";
	cin>>hrs;
	extrahrs=hrs-40;
	check=hrs>40;
	bill=(hrs-(check*extrahrs))*1000+(check*extrahrs)*1500;
	cout<<"\nThe Bill:"<<bill<<endl;
}
