#include<iostream>
using namespace std;
int main()
{
	int counter=0;
	int arr[10];
	int num;
	cout<<"\nEnter ten numbers";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the number to check:";
	cin>>num;
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(j==i)
			{
				continue;
			}
			else if (arr[i]+arr[j]==num)
			{
				counter++;
				cout<<arr[i]<<","<<arr[j]<<endl;
			}
		}
	}
	cout<<"\nthere are "<<counter<<" elements\n";


	
	return 0;


}
