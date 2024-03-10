/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 6
 */

#include<iostream>
using namespace std;
class Account {
	float balance;

public:
	Account(float=0);
	virtual ~Account();
	float inquire() const;
	void deposit(float);
	bool withdraw(float);
};
Account::Account(float balance) {
	this->balance=balance;

}

float Account::inquire() const {
	return balance;
}
void Account::deposit(float balance)
{
	while(balance<0)
	{
		cout<<"Please Enter the valid balance $:";
		cin>>balance;
	}
	this->balance+=balance;
}
bool Account::withdraw(float balance)
{
	while(balance<0)
	{
		cout<<"Please Enter the valid balance:";
		cin>>balance;
	}
	if(balance>this->balance)
	{
		cout<<"\nOops!Not sufficient balance bear a penality:";
		this->balance-=5;
		return false;
	}
	this->balance-=balance;
	return true;
}

Account::~Account() {
	// TODO Auto-generated destructor stub
}
int main()
{
	Account a1;
	int choice,balance=0;
	char ch='y';

	while(ch!='n' && ch!='N')
	{
		cout<<"\nEnter your operation:\n";
		cout<<"1.withdraw::\n2.Deposit::\n3.Inquire";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"\nEnter Amount You want to withdraw::";
			cin>>balance;
			a1.withdraw(balance);
			break;
		case 2:
			cout<<"\nEnter Amount You want to Deposit::";
			cin>>balance;
			a1.deposit(balance);
			break;
		case 3:
			cout<<"Balance = "<<a1.inquire()<<endl;
			break;
		}
		cout<<"\nDo you want to continue y for yes n for no::";
		cin>>ch;
	}

}

