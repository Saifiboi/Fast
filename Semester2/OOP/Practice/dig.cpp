#include<iostream>
using namespace std;
int count(int num)
{
	if(num<10)
		return 1;
	else
		return 1+count(num/10);
}
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	cout<<count(num);	
}
