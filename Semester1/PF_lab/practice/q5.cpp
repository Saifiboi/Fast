#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int *p=new int [10];
	for(int i=0;i<10;i++)
	{
		*(p+i)=rand()%100+1;
	}
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<"\t";
	}
	cout<<endl;
	delete[] p;
	p=0;
}
