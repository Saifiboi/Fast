#include<iostream>
using namespace std;
int main()
{
	int num,dig,sum=0;
	cout<<"Enter Three Digit Number:";
	cin>>num;
	dig=num%10;
	num=num/10;
	sum=sum+dig;
	dig=num%10;
	num=num/10;
	sum=sum+dig;
	dig=num%10;
	num=num/10;
	sum=sum+dig;
	cout<<"\nThe Sum of digits is :"<<sum<<endl;
} 
	
