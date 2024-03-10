#include<iostream>
using namespace std;
int main()
{
	char ch1,ch2,tempch;
	cout<<"Enter value for ch1 :"<<endl;
	cin>>ch1;
	cout<<"Enter value for ch2 :"<<endl;
	cin>>ch2;
	cout<<"ch1="<<ch1<<endl<<"ch2="<<ch2<<endl;
	tempch=ch1;
	ch1=ch2;
	ch2=tempch;
	cout<<"ch1="<<ch1<<endl<<"ch2="<<ch2<<endl;
}
