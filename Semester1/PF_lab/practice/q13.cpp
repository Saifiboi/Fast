#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"\nEnter the string:";
	getline(cin,str);
	int i=0,count=0;
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				count++;
				break;
		}
		i++;
	}
	cout<<"\nNumber of vowels:"<<count<<endl;
}
