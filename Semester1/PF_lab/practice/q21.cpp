#include<iostream>
using namespace std;
bool perfect (int num)
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
int main()
{
	bool res;
	for(int i=1;i<=1000;i++)
	{
		res=perfect(i);
		if(res==1)
			cout<<i<<" is perfect.\n";
	}
}