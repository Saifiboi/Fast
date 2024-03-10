#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"\nEnter a number:";
	cin>>num;
	if (num>0 && num<=20)
	{
		while(num>=1)
		{
			fact=fact*num;
			if (num!=1)
				cout<<num<<"*";
			else
				cout<<num;
			num-=1;
		}
		cout<<"="<<fact<<endl;
	}
	else
		cout<<"\nInput out of range:"<<endl;
}
