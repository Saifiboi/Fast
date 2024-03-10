#include<iostream>
using namespace std;

int volume(int L)
{
	return L*L*L;
}
int volume(int L,int B,int H)
{
	return L*B*H;	
}
double volume(int L ,int H)
{
	return 3.141*L*L*H;
}
int main()
{
	int L,B,H,result1,result2;
	double result3;
	cout<<"Cube: L=";
	cin>>L;
	result1=volume(L);
	cout<<"Cuboid: L=";
	cin>>L;
	cout<<"B=";
	cin>>B;
	cout<<"H=";
	cin>>H;
	result2=volume(L,B,H);
	cout<<"Cylinder L=";
	cin>>L;
	cout<<" H=";
	cin>>H;	
	result3=volume(L,H);
	cout<<"\nVolume of cube ="<<result1;
	cout<<"\nVolume of cuboid ="<<result2;
	cout<<"\nVolume of cylinder ="<<result3<<endl;
}
