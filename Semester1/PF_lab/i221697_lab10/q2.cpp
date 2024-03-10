#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number you want to print(1<=n<=20):";
	cin>>num;
	while (num<1 && num>20)
	{
		cout<<"Invalid input!Try again";
		cin>>num;
	}
	cout<<setw(num+1)<<"|"<<endl;
	for(int j=1,l=num;j<=num;j++,l--)
		{cout<<setw(l);
		for(int i=1;i<=j;i++)
			
			cout<<"*";
		cout<<"|";
		for(int k=1;k<=j;k++)
			
			cout<<"*";
		cout<<endl;
	}
	}
