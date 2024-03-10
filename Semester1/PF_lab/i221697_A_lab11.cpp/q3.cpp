#include<iostream>
using namespace std;
bool perfect(int);
int main()
{
	bool receive;
	cout<<"\nFor integers from 1 to 1000\n";
	for(int i=1;i<=1000;i++)
	{
		receive=perfect(i);
		if(receive ==1)
			cout<<"\n"<<i<<" is a perfect number"<<endl;
		else
			continue;
		
	}
}
bool perfect(int num)
{
	 int sum=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			sum+=i;
	}
	if(sum==num)
		return 1;
	else
		return 0;
		
}

