#include<iostream>
using namespace std;
void fun2(char &ch)
{
	if(ch>='a' && ch<='z')
	{
		cout<<"\nIt is lower character.\n";
	}
	else{
	cout<<"\nIt is Upper character.\n";
	}
}
void fun1(char &ch)
{
	if((ch>='a' && ch<='z')	||(ch>='A' && ch<='Z'))
	{
		fun2(ch);
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"\nIt is numeric character.\n";
	}	
}
int main()
{
	char ch;
	cout<<"\nEnter the character:";
	cin>>ch;
	fun1(ch);
	
}
