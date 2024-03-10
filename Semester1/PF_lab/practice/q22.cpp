#include<iostream>
using namespace std;
float volume(int l)
{
	return l*l*l;
}
float volume(int l,int w,int h)
{
	return l*w*h;
}
float volume(int r,int h)
{
	return 3.141*r*r*h;
}
int main()
{
	int l,w,h;
	float cube,cuboid,cyc;
	cout<<"Input:"<<endl<<endl;
	cout<<"Cube : L=";
	cin>>l;
	cube=volume(l);
	cout<<"Cuboid : L=";
	cin>>l;
	cout<<"W=";
	cin>>w;
	cout<<"H=";
	cin>>h;
	cuboid=volume(l,w,h);
	cout<<"Cylinder : R=";
	cin>>l;
	cout<<"H=";
	cin>>h;
	cyc=volume(l,h);
	cout<<"\n\nOutput:\n";
	cout<<"Volume of Cube:"<<cube<<endl;
	cout<<"Volume of Cuboid:"<<cuboid<<endl;
	cout<<"Volume of Cylinder:"<<cyc<<endl;

}
