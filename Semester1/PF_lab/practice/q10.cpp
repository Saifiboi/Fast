#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ifstream fin2;
	fin.open("f1.txt");
	fin2.open("f2.txt");
	string str,str2;
	while(!fin.eof() &&!fin2.eof())
	{
		getline(fin,str);
		getline(fin2,str2);
		if(str!=str2)
		{
			cout<<str<<endl<<str2<<endl;
		}
	}
	
	fin.close();
	fin2.close();
	
}
