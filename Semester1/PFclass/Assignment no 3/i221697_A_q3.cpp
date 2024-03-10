/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern from 1 -15(only even):";			
	cin>>num;
	while(num<1 || num>15 || num%2!=0)			//validating and taking right input.
	{
		cout<<"\nLength out of range or not even!try again:";
		cin>>num;
	}
	for(int i=0,k=(num*4)-2;i<=(num-1)*2;i+=2,k-=4)		/*k represent ! in each row.
	i represent \ and / in each row.   */
	
	{
		int l=1,j=k,m=1;		//l represent \ in a row.
						//j represent ! in a row.
						//m represent / in a row.
		while(l<=i)
		{
			cout<<"\\";
			l++;
		}
		while(j>=1)
		{
			cout<<"!";
			j--;	
		}
		while(m<=i)
		{
			cout<<"/";
			m++;
		}
		cout<<endl;
	}
}
	
