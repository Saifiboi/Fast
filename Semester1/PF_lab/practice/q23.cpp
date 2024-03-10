#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i==1 || i==num)
		{
			cout<<"+";
			for(int j=1;j<num-1;j++)
				cout<<"-";
			cout<<"+";
			cout<<endl;
		}
		else
		{
			cout<<"|";
			for(int j=1;j<num-1;j++)
				cout<<"-";
			cout<<"|";
			cout<<endl;
		}
	}
}
