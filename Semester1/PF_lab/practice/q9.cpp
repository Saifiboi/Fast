#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void input();
void output();
int main()
{
	input();
	output();
}
void input()
{
	ofstream fout;
	fout.open("Info.txt");
	string str;
	cout<<"\nEnter ten lines:\n";
	for(int i=0;i<10;i++)
	{
		getline(cin,str);
		fout<<str<<endl;
	}
	fout.close();
}
void output()
{
	ifstream fin;
	fin.open("Info.txt");
	string str;
	int i=0,line=0,counter=0;
	while(!fin.eof()&&line<10)
	{
		 i=0,counter=0;
		getline(fin,str);
		while(str[i]!='\0')
		{
			while(str[i]!=' '&& str[i]!='\0')
			{
				i++;
			}
			if(str[i]==' ')
			{
				i++;
			}
			
			counter++;
			
		}
		if(counter<10)
		cout<<line+1<<":\t"<<counter<<endl;
		line++;
	}
	cout<<endl;
	fin.close();
}

