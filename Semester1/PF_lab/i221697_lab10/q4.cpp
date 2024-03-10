#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nENter the number only odd and not 1:";
	cin>>num;
	while(num%2==0 || num==1)
	{
		cout<<"\nInvalid input!Type again!";
		cin>>num;
	}
	for(int i=1;i<=2;i++)
	{
		cout<<setw(num/2+1)<<"*"<<endl;
		if(i==2)
			break;
		for(int j=num/2,k=2;j>=1;j--,k+=2)
		{
			cout<<setw(j)<<"*"<<setw(k)<<"*"<<endl;
		}
		for(int l=2,m=(num/2)+(num-5)/2;l<=(num/2);l++,m-=2)
		{
			cout<<setw(l)<<"*"<<setw(m)<<"*"<<endl;
		}
	}
}
	
