#include<iostream>
using namespace std;
void counter (char [],char);
int main()
{
	char str[100],ch;
	cout<<"\nEnter the character string:";
	cin.get(str,100);
	cout<<"\nEnter the character to check:";
	cin>>ch;
	
	
	counter(str,ch);
}
void counter (char str[],char ch)
{
	int i=0,counter=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			counter++;
		}
		i++;
	}
	cout<<"\nThe character frequency is:"<<counter<<endl;
}

