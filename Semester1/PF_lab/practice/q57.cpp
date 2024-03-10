#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\nEnter A,Band C:";
	cin>>a>>b>>c;
	cout<<"\nThe First root:"<<(-b+sqrt((b*b)-(4*a*c)))/(2*a)<<endl;
	cout<<"\nThe Second root:"<<(-b-sqrt((b*b)-(4*a*c)))/(2*a)<<endl;
}
