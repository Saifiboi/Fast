#include<iostream>
using namespace std;
void func1()
{
	static int counter =0;
	counter++;
	cout<<"the function has run "<< counter<< "times"<<endl;
}
int main()
{
	
	func1();
	func1();
	func1();
	func1();
	func1();
	func1();

}
