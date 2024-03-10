#include<iostream>
using namespace std;
int main()
{
	int num,limit,counter=1;
	cout<<"\nEnter the number:";
	cin>>num;
	cout<<"\nEnter the limit:";
	cin>>limit;
	if (num>0 && limit>0)
	{
		while (counter<=limit)
		{	
			cout<<endl<<num<<" * "<<counter<<" = "<<num*counter<<endl;
			counter+=1;
		}
	}
	else
		cout<<"\n Invalid input!"<<endl;
		
}
