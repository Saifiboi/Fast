#include<iostream>
#include<string>
using namespace std;
void countfrequency(string,char);
int main()
{
	string str;
	char choice;
	cout<<"\nEnter the string:";
	getline(cin,str);
	cout<<"\nEnter the word choice:";
	cin>>choice;
	countfrequency(str,choice);
	
}
void countfrequency(string str,char choice)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==choice)
		{
			count++;
		}
		i++;
	}
	cout<<"\nCount="<<count<<endl;
}
