#include<iostream>
#include"IntegerList.cpp"
#include"FaceBook.cpp"
#include "Complex.cpp"
using namespace std;
int *GenderCount(FaceBook f[]);
int main()
{
//	IntegerList a(5);
//	//cout<<a.getElement(88);
//	a.setElement(0,12);
//	cout<<a.getElement(0);
//	FaceBook f[7];
//	for(int i=0;i<7;i++)
//	{
//		if(i==1 || i==3 ||i==6)
//			f[i].setGender('M');
//		else
//			f[i].setGender('f');
//	}
//	int *p=GenderCount(f,7);
//	for(int i=0;i<2;i++)
//	{
//		cout<<p[i]<<endl;
//	}
//	delete [] p;
	Complex C1(5,2);
	Complex C2(5,2);
	Complex C3;
	C3=mulComplex(C2,C1);
	cout<<C3.getReal()<<endl;
	cout<<C3.getImaginary()<<endl;

}