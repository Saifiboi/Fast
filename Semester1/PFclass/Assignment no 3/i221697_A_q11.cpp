/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the length of pattern:";			
	cin>>num;
	while(num<1)			//validating and taking right input.
	{
		cout<<"\nLength can't be negative!try again:";
		cin>>num;
	}
	for(int counter=1;counter<=num;counter++)		//displaying X 3 times.
	{
		for(int j=2,l=11;j<=6;j=j+2,l-=4)	//loop for upper part of x.
		{
			for(int k=1;k<=j;k++)		//j=outer spaces
				cout<<" ";
			cout<<"*";
			for(int m=1;m<=l;m++)		//m=inner spaces
				cout<<" ";
			cout<<"*";
			cout<<endl;
		}
		for(int i=0;i<8;i++){			//loop for spaces for middle * .
			cout<<" ";
		}
		cout<<"*"<<endl;			//displaying middle * .
		if(counter==num){				//displaying lower part of x but in case of 3rd x neglecting additional last row.
			for(int i=1,j=6,l=3;i<=3;i++,j=j-2,l+=4)
			{
				for(int k=1;k<=j;k++)
					cout<<" ";
				cout<<"*";
				for(int m=1;m<=l;m++)
					cout<<" ";
				cout<<"*";
				cout<<endl;	
			}
		}else{					//displaying lower part of x with additional last row.
			for(int i=1,j=6,l=3;i<=4;i++,j=j-2,l+=4)
			{
				for(int k=1;k<=j;k++)
					cout<<" ";
				cout<<"*";
				for(int m=1;m<=l;m++)
					cout<<" ";
				cout<<"*";
				cout<<endl;	
			}
		}
	}
	return 0;
}
