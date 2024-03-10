#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse (double,double);

int main()
{
	double a,b;
	for(int i=1;i<=3;i++)
	{
	cout<<"\nEnter 2 sides of right triangle:";
	cin>>a>>b;
	cout<<"\nHypotenuse:  "<<hypotenuse(a,b)<<endl;
	}
	return 0;
	
}

double hypotenuse (double a,double b)
{
	double c;
	c=sqrt(pow(a,2)+pow(b,2));
	return c;	
}


