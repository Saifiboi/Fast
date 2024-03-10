#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream fout;
	string str;
	fout.open("Record.txt");
	fout<<"Reg No"<<"\t"<<"Full name"<<"\tProgram\tcontact of student"<<endl;
	
	cout<<"\nEnter Records of four students:";
	for(int i=0;i<4;i++)
	{
		getline(cin,str);
		fout<<str<<endl;
	}
	fout.close();
	ifstream fin;
	fin.open("Record.txt");
	while(!fin.eof())
	{
		getline(fin,str);
		cout<<str<<endl;
	}
	fin.close();
}
