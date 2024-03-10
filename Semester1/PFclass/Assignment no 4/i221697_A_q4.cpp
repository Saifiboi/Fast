/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
#include<cmath>
using namespace std;
int reverse(int);		//function prototype.
int main()
{
	int result=0;
	for(int i=10;i<=99999;i++)
	{
		result=reverse(i);	//calling function in loop.
		if(result==i)
		
			cout<<i<<" is a palindrome number\n"; 
		
	}
}
int reverse(int num)
{
	int backup=num,sum=0;
	short num_length=0,dig=0;
	while(num>0)
	{
		num_length+=1;		//obtaining number length.
		num=num/10;
	}
	num=backup;
	while(num>0)
	{
		dig=num%10;		//obtaining digits from last 1 by 1.
		sum=sum+(dig*pow(10,num_length-1));		//multiplying ech digit with 10  raise to power number length -1 and adding in sum.
		num/=10;		//reducing number to 1 digit from last.
		num_length--;		//reducing number length.
	}
	return sum;			//returning sum which is reverse of given number.
}

	
