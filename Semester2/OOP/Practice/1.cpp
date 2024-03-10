#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char *s1=new char [8];
	s1[0]='s';
	s1[1]='a';
	s1[2]='i';
	char * s2=new char [8];
	strcpy(s2,s1);
	cout<<s2<<endl;
}
