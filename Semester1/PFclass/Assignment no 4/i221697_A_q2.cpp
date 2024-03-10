/* Name :Saif ur rehman    Student ID: i221697
	Assignment#4*/
#include<iostream>
#include<cmath>
using namespace std;
int bin_cnvrtr(long long int);		//function prototype.
int main()
{
	bool check=0;
	int result;
  long long int num=0,backup;		//taking large binary number.
  short dig;
	cout<<"\nEnter the binary number:";
	do{
			cin>>num;	//taking binary.
			check=0;
			while(num<0)		//validating binary.
			{	cout<<"\nInvalid number!number cant be negative!Type again:";
				cin>>num;
			}
			backup=num;		//taking backup of binary number.
			while(num>0)		
				{
					dig=num%10;	//breaking into digits.
					num=num/10;
					if(dig!=1 && dig!=0)	//VALIDATING EACH DIGIT IN 0 ,1.
					{
						check=1;
						cout<<"\nInvalid number!Binary only contain 0 and 1!type again\n";
						break;
					}
				
			}
	}while(check == 1);
	result=bin_cnvrtr(backup);	//Calling binary converter function.
	cout<<"\nThe binary of given number is "<<result<<endl;
}
int bin_cnvrtr(long long int num)
{
	
	short dig,counter=0;
	int sum=0;

	
	
	while(num>0)
	{				//breaking into each digit.
		dig=num%10;
		sum+=(dig*pow(2,counter));		//converting into decimal.
		num/=10;
		counter++;
	}
	return sum;			//returning decimal.
	
	
}

