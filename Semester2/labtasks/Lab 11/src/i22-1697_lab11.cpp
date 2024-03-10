//============================================================================
// Name        : Lab.cpp
// Author      : Saif ur rehman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Line.h"
#include"Course.h"
using namespace std;

int main() {
//	Line L(1, 2, 3, 4);
//	cout<<"\nLength="<<L.findLength();
//	Point P=L.findMidPoint();
//	cout<<"\nMidpoint="<<P.getX_Coordinate()<<","<<P.getY_Coordinate();
//	cout<<"\nSlope="<<L.findSlope();
	Course C[3];
	C[0].setval("Amir", "Rehman", "a-301", "HoD", "Islamic Ethics", "Umer", 123);
	C[0].printcal();
	C[1].setval("Talha", "Kayani", "B-305", "Instructor", "La", "Ahmed",50);
	C[1].printcal();
	C[2].setval("Bilal", "Ikram", "aD-404", "Ta", "calculus", "Asad", 900);
	C[2].printcal();
}
