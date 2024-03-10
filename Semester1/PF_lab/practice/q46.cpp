#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ch;
	cout<<"\nEnter your grades:";
	cin>>ch;
	if(ch=="A+")
		cout<<"Gpa:4.00"<<endl;
	else
	{
		if(ch=="A")
			cout<<"Gpa:3.7"<<endl;
		else 
		{
			if(ch=="A-")
				cout<<"Gpa:3.4"<<endl;
			else
			{
				if(ch=="B+")
					cout<<"Gpa:3.1"<<endl;
				else
				{
					if(ch=="B")
						cout<<"Gpa:2.8"<<endl;
					else
					{
						if(ch=="C")
							cout<<"Gpa:2.5"<<endl;
						else
						{
							if(ch=="D")
								cout<<"Gpa:2.2"<<endl;
							else
								cout<<"Gpa:less than2"<<endl;
						}
					}
				}
			}
		}
	}
	
}
