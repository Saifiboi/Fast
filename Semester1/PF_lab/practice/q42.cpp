#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	(num>0)?(num<18)?cout<<"\nHe can't vote\n":cout<<"\nHe can vote\n":cout<<"\nInvalid Input\n";
}
