#include<iostream>
using namespace std;
int main()
{
	int a,b,c,square;
	cout<<"Enter the value so A,B,C(only int) :"<<endl;
	cin>>a>>b>>c;
	square=(a*a)+(b*b)+(c*c)+2*((a*b)+(b*c)+(c*a));
	cout<<"\nThe square is :"<<square<<endl;
}
