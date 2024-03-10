#include<iostream>
using namespace std;
int main()
{
	int num,counter=1,even=0,odd=0;
	cout<<"\nEnter 10 integer numbers:";
	
	while(counter<=10)
	{
		cin>>num;
		if(num%2==0)
			even+=1;
		else
			odd+=1;
		counter+=1;
	}
	cout<<"\nEven Integers="<<even<<"\nOdd Integers="<<odd<<endl;
}
	 	
	
