#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,disc;
	float root1,root2;
	cout<<"\nEnter the values of a,b,c;\n";
	cin>>a>>b>>c;
	disc=(b*b)-(4*a*c);
	root1=((-b)+sqrt(disc))/(2*a);
	root2=((-b)-sqrt(disc))/(2*a);
	cout<<"\n The first root :"<<root1<<endl;
	cout<<"\n The Second root :"<<root2<<endl;
}
	
	
