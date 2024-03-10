/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern suitable for pattern greater than 7:";			
	cin>>num;
	while(num<7 || (num-7)%4!=0)			//validating and taking right input.
	{
		cout<<"\nLength out of range or not suitable for pattern!try again:";
		cin>>num;
	}
	for(int i=1;i<=3;i++)		//loop for displaying starting line 3 times.
	{	
		for(int j=1;j<=num/2+1;j++)
			{
				if(j==1 || j==num/2+1)
					cout<<"+";
				else
					cout<<"-";
			}
		cout<<endl;
		if(i==1)		//displaying ^  pattern after line 1. 
		{
			for(int k=1;k<=2;k++)	
			{
				for(int l=(num-7)/4,m=0;l>=0;l--,m++)
				{
					cout<<"|";
					for(int n=1;n<=l;n++)
					{
						cout<<" ";
					}
					cout<<"^";
					for(int o=1;o<=(m*2);o++)
					{
						cout<<" ";
					}
					cout<<"^";
					for(int p=(num-7)/4;p>m;p--)
					{
						cout<<" ";
					}
					cout<<"|";
					cout<<endl;
				}
			}
			
		}
		else if(i==2)
		{
			for(int k=1;k<=2;k++)		//displaying v pattern after 2nd line.
			{
				for(int l=(num-7)/4,m=0;l>=0;l--,m++)
				{
					cout<<"|";
					for(int n=1;n<=l;n++)
					{
						cout<<" ";
					}
					cout<<"v";
					for(int o=1;o<=(m*2);o++)
					{
						cout<<" ";
					}
					cout<<"v";
					for(int p=(num-7)/4;p>m;p--)
					{
						cout<<" ";
					}
					cout<<"|";
					cout<<endl;
				}
					
			}
		
		}
		else			//exiting after 3rd line.
			break;
		
	}
}

