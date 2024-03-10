#include<iostream>
using namespace std;
int main()
{
	int num,x=0,y=1,sum=0,iteration=1;
	cout<<"\nEnter the bound:";
	cin>>num;
	if(num>2)
	{
		
		while(iteration<=num)
		{
			
			 if(iteration!=num)
				
				cout<<sum<<",";
				
			else	
			
				cout<<sum;
			
			
			
			
			x=y;
			y=sum;
			sum=x+y;
			
			iteration+=1;
			
			
		}
	}
	else
		cout<<"\nInvalid Input!";
		
}
		
	
	
