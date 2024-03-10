#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<0)
	{
		cout<<"Invalid input!Try again";
		cin>>num;
	}
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)
		{
			if((i==1 || i==num)&& (j==1 || j==num))
			{
					cout<<"+";
			}
			else if(j==1 || j==num)
					cout<<"|";
			else
				cout<<"-";
				}
		cout<<endl;
			
		
	}
}
