#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<1 ||num>26)
	{
		cout<<"\nInvalid input :Try again";
		cin>>num;
	}
	char ch='A';
	for(int a=1;a<=num;a++)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
}

