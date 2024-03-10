#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	if((num & 1)==0)
		cout<<"\nIt is even:\n";
	else
		cout<<"\nIt is Odd:\n";
}
