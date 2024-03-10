/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 7
 */
#include<iostream>
#include"String.cpp"
using namespace std;
int main()
{
	char *str=new char [100];
	cout<<"\nEnter a string:";
	cin.getline(str,99);
	String S(str); 
	delete []str;
	str=0;
	int choice;
	cout<<"\nEnter your choice ::";
	cout<<"1.getAt\n";
	cout<<"2.setAt\n";
	cout<<"3.substr(int pos,int length)\n";
	cout<<"4.substr(int pos)\n";
	cout<<"5.append(char a)\n";
	cout<<"6.append(String str)\n";
	cout<<"7.append(char * str)\n";
	cout<<"8.length()\n";
	cout<<"9.tocstring()\n";
	cout<<"10.display()\n";
	cout<<"11.isEmpty()\n";
	cout<<"12.copy(const String &)\n";
	cout<<"13.copy(const char *)\n";
	cout<<"14.find(char)\n";
	cout<<"15.equal(String)\n";
	cout<<"16.stoi()\n";
	char ch='y';
	int index,length;
	char replace;
	String S2;
	while(ch!='n' && ch!='N')
	{
		cin>>choice;
		switch(choice)
		{
		case 1:
			
			cout<<"\nEnter index:";
			cin>>index;
			cout<<"\nThe value :"<<S.getAt(index)<<endl;
			break;
		case 2:
			cout<<"\nEnter index:";
			cin>>index;
			cout<<"\nEnter character to replace:";
			cin>>replace;
			S.setAt(index, replace);
			break;
		case 3:
			cout<<"\nEnter index:";
			cin>>index;
			cout<<"\nEnter length:";
			cin>>length;
			S2=S.substr(index,length);
			cout<<"The desired string:"<<endl;
			S2.display();
			break;
		case 4:
			cout<<"\nEnter index:";
			cin>>index;
			S2=S.substr(index);
			cout<<"The desired string:"<<endl;
			S2.display();
			break;
		case 5:
			cout<<"\nEnter character:";
			cin>>replace;
			S.append(replace);
			break;
		case 6:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S2.copy(str); 
			delete []str;
			str=0;
			S.append(S2);
			break;
		case 7:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S.append(str); 
			delete []str;
			str=0;
			break;
		case 8:
			cout<<S.length()<<endl;
			break;
		case 9:
			str=S.tocstring();
			cout<<str<<endl;
			delete [] str;
			str=0;
			break;
		case 10:
			S.display();
			break;
		case 11:
			cout<<S.isEmpty()<<endl;
			break;
		case 12:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S2.copy(str); 
			delete []str;
			str=0;
			S.copy(S2);
			break;
		case 13:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S.copy(str); 
			delete []str;
			str=0;
			break;
		case 14:
			cout<<"\nEnter Character:";
			cin>>replace;
			cout<<"\nThe Index:"<<S.find(replace)<<endl; 
			break;
		case 15:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S2.copy(str); 
			delete []str;
			str=0;
			cout<<boolalpha<<S.equal(S2)<<endl;
			break;
		case 16:
			cout<<"\nEnter a string:";
			cin.getline(str,99);
			S2.copy(str); 
			delete []str;
			str=0;
			cout<<"The desired integer is:"<<S2.stoi()<<endl;
			S2.display();
			break;
		}
		cout<<"\nDo you want to continue y for yes n for no::\n";
		cin>>ch;
	}

}
