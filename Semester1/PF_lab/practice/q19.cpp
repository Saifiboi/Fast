#include<iostream>
#include<cmath>
using namespace std;
float hypotenuse(int ,int);
int main()
{
	int l,w;
	char ch='1';
	while(ch!='0')
	{
		cout<<"\nEnter the sides of right triangle:";
		cin>>l>>w;
		cout<<"Hypotenuse:  "<<hypotenuse(l,w)<<endl;
		cin>>ch;
	}
}
float hypotenuse(int l,int w)
{
	return sqrt((l*l) + (w*w));
}
