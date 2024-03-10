/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
using namespace std;
int gcd(int ,int);			//function prototype.
int main()
{
	
	float x,y,result=0;
	cout<<"\nEnter the  integer value for x and y:";
	cin>>x>>y;
	while(x<0 || (x/static_cast<int>(x)!=1))		//validation on x.
	{
		cout<<"\nInvalid Input !x cant be negative or float!Try again for x:";
		cin>>x;
	}
	while(y<0 || (y/static_cast<int>(y)!=1))		//validation on y.
	{
		cout<<"\nInvalid Input !Y cant be negative or float!Try again for y:";
		cin>>y;
	}
	result=gcd(x,y);	//calling gcd function.
	cout<<"\nThe GCD of given numbers is:"<<result<<endl;
		
}
int gcd(int m, int n)
{
	while (n!=0 && m!=0)	//continuing till one number becomes 0.
	{
		if (n>m)
			n=n%m;		//dividing larger by smaller.
		else if (m>n)
			m=m%n;
	}
	if(m==0)			//returning numbr which is not reduced to 0.
		return n;
	else
		return m;
}
