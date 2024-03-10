#include<iostream>
using namespace std;
void counter(char []);
int main()
{
	char str[100];
	cout<<"\nEnter the string:";
	cin.get(str,200);
	counter(str);


	
	return 0;


}
void counter(char ch[])
{
	int counter=0;
	int i=0;
	while(ch[i]!='\0')
	{
		if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
		{
			counter++;
		}
		i++;
	}
	cout<<"\nThe vowels are "<<counter<<" times\n";
}
