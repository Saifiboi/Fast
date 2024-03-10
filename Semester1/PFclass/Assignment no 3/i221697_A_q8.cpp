/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern between 2-20:";			
	cin>>num;
	while(num<2 || num>20)			//validating and taking right input.
	{
		cout<<"\nLength out of range!try again:";
		cin>>num;
	}
	for(int i=1,j=num;i<=num;i++,j--)
	{
		for(int k=1;k<=j;k++)		//jis for *s.
		{
			cout<<"*";
		}
		for(int l=1;l<=i;l++)		//i is for spaces.
		{
			cout<<" ";
		}
		for(int m=(j-1)*2;m>0;m--)		//(j-1)*2 is for /s.
			cout<<"/";
		for(int p=1;p<=(i-1)*2;p++)		//(i-1)*2 is for \s.
			cout<<"\\";
		for(int l=1;l<=i;l++)
		{
			cout<<" ";
		}
		for(int k=1;k<=j;k++)
		{
			cout<<"*";
		}
	cout<<endl;
		
	}
}
