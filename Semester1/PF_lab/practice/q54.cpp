#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int sum=0;
	cout<<"\nEnter Your first name";
	cin>>str;
	int i=0;
	while(str[i]!='\0')
	{
		sum+=str[i];
		i++;
	}
	cout<<"\nThe ascii sum is :"<<sum<<endl;
	
}
