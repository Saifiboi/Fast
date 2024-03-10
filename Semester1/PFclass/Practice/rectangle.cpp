#include<iostream>
using namespace std;
int main()
{
	short rows,columns;
	cout<<"\nEnter number of rows and columns:";
	cin>>rows>>columns;
	if(rows>0 && columns>0)
	{
		for(short i=1;i<=rows;i++)
		{
			for(short j=1;j<=columns;j++)
			{
				if(i==1 || i==rows)
					cout<<"*";
				else if(j>1 && j<columns)
					cout<<" ";
				else
					cout<<"*";
			}
			cout<<endl;
		}
	}
	else
		cout<<"\nInvalid Input!\n";
	return 0;
}
