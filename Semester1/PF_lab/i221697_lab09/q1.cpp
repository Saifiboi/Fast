#include<iostream>
using namespace std;
int main()
{	
	int num,counter=1,counter2=1,counter3;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num%2==0)
	{
		cout<<"\nInvalid Input!Enter again\n";
		cin>>num;
	}
	for(counter=1;counter<=(num/2)+1;counter++)
	{	
	
		for(counter2=1;counter2<=counter;counter2++)
		cout<<"*";
		cout<<endl;
	}	
	
	for(counter3=1;counter3<=num/2;counter3++)
	{
		for(int counter4=num/2;counter4>=counter3;counter4--)
			cout<<"*";
			
		cout<<endl;
	}

	
		
	
	
	return 0;
}

