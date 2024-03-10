#include<iostream>
using namespace std;
int main()
{
	int *p=new int[5];
	cout<<"\nEnter five numbers:";
	for(int i=0;i<5;i++)
	{
		cin>>*(p+i);
	}
	int *small=&p[0];
	int *large=&p[0];
	for(int i=1;i<5;i++)
	{
		if(p[i]<*small)
		{
			small=&p[i];
		}
		if(p[i]>*large)
		{
			large=&p[i];
		}
	}
	cout<<"\nSmallest:"<<*small<<"\nLargest:"<<*large<<endl;
	small=0;
	large=0;
	delete p;
	
	p=0;
	
}
