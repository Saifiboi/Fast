#include<iostream>
//#include<iomanip>
using namespace std;
int main ()
{	
	char ch;
	cout<<"\n Enter a character:";
	cin>>ch;
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		cout<<"\n It is Vowel\n ";
	else 
		cout<<"\n It is consonant\n";
}
