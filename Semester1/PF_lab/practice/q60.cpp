#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(10)<<"/\\"<<endl<<
	setw(11)<<"//\\\\"<<endl<<
	setw(12)<<"///\\\\\\"<<endl<<
	setw(13)<<"////\\\\\\\\"<<endl<<
	setw(14)<<"/////\\\\\\\\\\"<<endl<<
	setw(15)<<"//////\\\\\\\\\\\\"<<endl<<
	setw(16)<<"///////\\\\\\\\\\\\\\"<<endl<<
	setw(17)<<"////////\\\\\\\\\\\\\\\\"<<endl<<
	setw(10)<<"||"<<endl<<
	setw(10)<<"||"<<endl<<
	setw(10)<<"||"<<endl<<
	setw(10)<<"||"<<endl<<
	setw(10)<<"||"<<endl<<
	setw(10)<<"||"<<endl;
	cout<<setw(10)<<"*"<<endl<<
	setw(9)<<"*"<<setw(2)<<"*"<<endl<<
	setw(8)<<"*"<<setw(4)<<"*"<<endl<<
	setw(7)<<"*"<<setw(6)<<"*"<<endl<<
	setw(6)<<"*"<<setw(8)<<"*"<<endl<<
	setw(5)<<"*"<<setw(10)<<"*"<<endl<<
	setw(4)<<"*"<<setw(12)<<"*"<<endl<<
	setw(3)<<"*"<<setw(14)<<"*"<<endl<<
	setw(2)<<"*"<<setw(16)<<setfill('*')<<""<<endl;
	
}
