#include"Student.cpp"
//#include"Student.h"
//#include"rectangle.h"
#include"rectangle.cpp"
//#include"point.h"
#include"point.cpp"
//#include"park.h"
#include"park.cpp"
//#include"Date.h"
#include"Date.cpp"
#include<string>
#include<iostream>
using namespace std;

int main()
{

//		Student s1("Ali",20);
//		s1.Setname("Ahmed");
//		s1.Setid("i22-1697");
//		s1.Setage(20);
//		s1.Setcgpa(3.5);
//	//	cout<<s1.Getname()<<endl;
//	//	cout<<s1.Getid()<<endl;
//	//	cout<<s1.Getage()<<endl;
//	//	cout<<s1.Getcgpa()<<endl;
//		s1.printStudent();


	rectangle r1;
	r1.setLength(20);
	r1.setWidth(30);
	r1.area(20,20);
	r1.display();
	cout<<r1.scaleup(20,20)<<endl;
	cout<<r1.getLength()<<endl;
	cout<<r1.getWidth()<<endl;
	cout<<r1.getarea()<<endl;


//	point p1(0,-1);
//	cout<<p1.check()<<endl;
//	park p1(40,20,1100);
//	p1.buyTicket(3);
//	cout<<p1.getticnum()<<endl;
//	cout<<p1.seatCapacity()<<endl;
//	cout<<p1.getTotal()<<endl;
	Date d1;
	Date d2(2,4,2025);
	Date d3(5,3,2024);
	cout<<d1.LeapYear(d2)<<endl;
	cout<<d1.SubtractDate(d3,d2)<<endl;
}



