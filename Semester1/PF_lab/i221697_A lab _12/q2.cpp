#include<iostream>
#include<cmath>
using namespace std;
void reverse(int &num)
{
	int dig,dig_counter=0,sum=0;
	int backup;
	backup=num;
	while(num>0)
	{
		dig_counter++;
		num=num/10;
	}
	num=backup;
	while(num>0)
	{
		dig=num%10;
		sum+=(dig*pow(10,dig_counter-1));
		num=num/10;
		dig_counter--;
	}
	num=sum;
	
}
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	reverse(num);
	cout<<"\nThe reverse number is:"<<num;
}

