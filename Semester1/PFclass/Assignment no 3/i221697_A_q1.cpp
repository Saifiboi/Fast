/* Name :Saif ur rehman    Student ID: i221697
	Assignment#3*/
#include<iostream>
using namespace std;
int main()
{
	float num,sum=0;
	int counter=0;			//counter for numbers greater than 80.
	for (int i=1;i<=5;i++)
	{
		cout<<"\nEnter the score of subject "<<i<<":";
		cin>>num;				//taking marks of five subjects
		if (num<0 || num>100)			//validating input.
		{
			cout<<"\nInvalid score – score can be in the range 0-100";
			i--;				//keeping i same as previous.
			continue;
		}
		else
		{
			sum+=num;			//updating sum with numbers.
			if(num>80)		
				counter++;		//counting number greater than 80.
		}
	}
	cout<<"\n\nMean of numbers:"<<(sum)/5;		//displaying mean.
	cout<<"\nThere are "<<counter<<" scores which are more than 80\n";	               //displaying counted number of 80 aboves.
}
