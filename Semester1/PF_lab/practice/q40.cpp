#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number:";
	cin>>num;
	switch(num)
	{
		case 0:
			cout<<"\nIt Is zero:\n";
			break;
		default:
			switch(num%2)
			{
				case 0:
					cout<<"\nIt Is even:\n";
					break;
				case 1:
					cout<<"\nIt Is odd:\n";
					break;
			}
	}
}
