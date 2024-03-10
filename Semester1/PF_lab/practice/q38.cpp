#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char choice;
	int num1,num2;
	cout<<"\nEnter two numbers:";
	cin>>num1>>num2;
	cout<<"Menu\n";
	cout<<setw(30)<<setfill('_')<<""<<endl;	
	cout<<"+ Addition"<<endl;
	cout<<"- Subtraction"<<endl;
	cout<<"* Multiplication"<<endl;
	cout<<"/ Division"<<endl;
	cout<<". Cancel"<<endl;
	cin>>choice;
	switch(choice)
	{
		case '+':
			cout<<"\nResult :"<<num1+num2<<endl;
			break;
		case '-':
			cout<<"\nResult :"<<num1-num2<<endl;
			break;
		case '*':
			cout<<"\nResult :"<<num1*num2<<endl;
			break;
		case '/':
			if(num2==0)
			{
				cout<<"Invalid number!cant done"<<endl;
				break;
			}
			cout<<"\nResult :"<<num1/num2<<endl;
			break;
		case '.':
			break;
		default:
			cout<<"Invalid Operator:"<<endl;
			
	}
}
