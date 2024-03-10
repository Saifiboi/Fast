#include<iostream>
using namespace std;
int funct()
{
	static int count=0;
	count++;
	return count;
}
int main()
{
	int c=funct();
	c=funct();
	c=funct();
	c=funct();
	c=funct();
	c=funct();
	cout<<"\nC:"<<c<<endl;
}

