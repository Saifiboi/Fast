//============================================================================
// Name        : Lab.cpp
// Author      : Saif ur rehman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Distance.cpp"
#include"Matrix.cpp"
using namespace std;

int main() {
//	Distance D;
//	D.setInches(24);
//	cout<<D.getFeet()<<endl;
//	D.setFeet(30);
//	cout<<D.getFeet()<<endl;
//	cout<<D.getInches()<<endl;
//	Distance D2,D3;
//	D2.setFeet(50);
//	D2.setInches(20);
//	D3=D+D2;
//	cout<<D3.getFeet()<<endl;
//	cout<<D3.getInches()<<endl;
//	D3=D-D2;
//	cout<<D3.getFeet()<<endl;
//	cout<<D3.getInches()<<endl;
	Matrix M(2,2),M1(2,2),M3(4,4);
M.setvalues();
	M.Display();
	M1.setvalues();
	M1.Display();
/*	M1=M;
	M1.Display();
	M1=M+2;
	M1.Display();
	M1=M-4;
	M1.Display();*/
	M3=M1-M;
	M3.Display();
	M3=M1+M;
	M3.Display();



	return 0;
}
