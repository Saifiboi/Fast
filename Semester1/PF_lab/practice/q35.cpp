#include<iostream>
using namespace std;
int main()
{
	int num,prev,total,reserve=0;
	cout<<"\nEnter the number:";
	cin>>num;
	while(num<2)
	{
		cout<<"\nInvalid Input:try again:";
		cin>>num;
	}
	prev=1;
	total=1;
	for(int i=1;i<=num;i++)
	{
		if(i==num)
			cout<<prev<<endl;
		else
			cout<<prev<<",";
		reserve=prev;
		prev+=total;
		total=reserve;
			
					
		
		
	}
	cout<<endl;
}
