#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int i=1,num;
	float result=0,sum=0;
	cout<<"\nInput the value for nth term:";
	cin>>num;
	for(i=1;i<=num;i++)
	{	
		
		cout<<"1/"<<i<<"^"<<i<<"="<<static_cast<float>(1)/pow(i,i)<<endl;
		sum+=static_cast<float>(1)/pow(i,i);
	}
	cout<<"\nThe sum of the above series is:"<<sum<<endl;

	
	return 0;
}
