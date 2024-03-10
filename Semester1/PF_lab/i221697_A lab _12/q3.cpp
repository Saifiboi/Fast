#include<iostream>
using namespace std;
void func2(char ch)
{
	if(ch>='A' && ch<='Z')
		cout<<"\nIt is Capiltal.\n";
	else
		cout<<"\nIt is lower.\n";
}
void fun1(char ch)
{
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		func2(ch);	
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"\nIt is a digit.\n";
	}
	else
	{
		cout<<"It is not both.";
	}
}
int main()
{
	char ch;
	cout<<"\nENter the character:";
	cin>>ch;
	fun1(ch);
}
