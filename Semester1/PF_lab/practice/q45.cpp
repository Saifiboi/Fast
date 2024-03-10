#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter a character:";
	cin>>ch;
	if(ch=='A' || ch=='a' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		cout<<"\nIt is vowel:"<<endl;
	else if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
		cout<<"\nIt is consonant:"<<endl;
	else
		cout<<"\nNot an alphabet:\n"; 
}

