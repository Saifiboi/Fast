#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *ptr,*ptr2,*ptr3;
	for(int i=0;i<5;i++)
	{
		cout<<"Array["<<i<<"]=";
		cin>>arr[i];
	}
	ptr=arr;
	ptr2=ptr;
	ptr3=ptr;
	for(int i=1;i<5;i++)
	{
		if(*ptr2<(*(ptr+i)))
			ptr2=ptr+i;
		if(*ptr3>(*(ptr+i)))
			ptr3=ptr+i;
	}
	cout<<"\nThe largest number is :"<<*ptr2<<"\nThe smallest number is:"<<*ptr3<<endl;
}
