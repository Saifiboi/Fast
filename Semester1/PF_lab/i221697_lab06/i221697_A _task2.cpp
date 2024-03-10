#include<iostream>
#include<string>
//#include<iomanip>
using namespace std;
int main ()
{	
	string grade;
	cout<<"\nEnter your Grade:";
	cin>>grade;
	if (grade=="A")
		{
			cout<<"\nGpa is 4.0\n";
		}
	else if (grade=="A-")
		{
			cout<<"\nGpa is 3.67\n";
		}
	else if (grade=="B+")
		{
			cout<<"\nGpa is 3.33\n";
		}
	else if (grade=="B")
		{
			cout<<"\nGpa is 3.0\n";
		}
	else if (grade=="B-")
		{
			cout<<"\nGpa is 2.67\n";
		}
	else if (grade=="c+")
		{
			cout<<"\nGpa is 2.3\n";
		}
	else if (grade=="C")
		{
			cout<<"\nGpa is 2.0\n";
		}
	else if (grade=="C-")
		{
			cout<<"\nGpa is 1.67\n";
		}
	else if (grade=="D+")
		{
			cout<<"\nGpa is 1.33\n";
		}
	else if (grade=="D")
		{
			cout<<"\nGpa is 1.0\n";
		}
	else if (grade=="F")
		{
			cout<<"\nGpa is 0.0\n";
		}
	else
		{
			cout<<"\n Invalid Input\n";
		}
}
