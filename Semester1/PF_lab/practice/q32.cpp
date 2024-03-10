#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	float sum=0.0;
	cout<<"\nInput the value for nth term:";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		cout<<"1/"<<i<<"^"<<i<<"="<<1/static_cast<float>(pow(i,i))<<endl;
		sum+=1/static_cast<float>(pow(i,i));
	}
	cout<<"\nThe Sum is :"<<sum<<endl;
}
