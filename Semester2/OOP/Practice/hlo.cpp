#include<iostream>
#include<string>
using namespace std;
void print(string str)
{
	static int i=0;
	if(str[i]!='\0')
	{
		cout<<str[i++];
		print(str);
	}
}
int main()
{
	string str="Hello World!";
	print(str);	
}
