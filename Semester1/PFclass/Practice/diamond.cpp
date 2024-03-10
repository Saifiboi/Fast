#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int counter=0,iteration=2,spacing=6,counter2=4;counter<=6;counter+=2,iteration+=2,spacing-=2,counter2+=2)
	{
		for(int i=0,j=0,l=(iteration*2)+1;i<=iteration;i++,j++,l-=2)
		{
			for(int k=1;k<=i+spacing;k++)
				cout<<" ";
			cout<<"*";
			for(int m=1;m<=l;m++)
				cout<<" ";
			cout<<"*";
			cout<<endl;
		}
		cout<<setw(counter2+spacing)<<"*"<<endl;
		for(int i=0,j=2,l=1;i<=iteration;i++,j--,l+=2)
		{
			for(int k=1;k<=j+spacing+counter;k++)
				cout<<" ";
			cout<<"*";
			for(int m=1;m<=l;m++)
				cout<<" ";
			cout<<"*";
			cout<<endl;
			
			
		}
	}
}
