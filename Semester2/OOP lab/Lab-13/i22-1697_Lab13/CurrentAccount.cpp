/*
 * CurrentAccount.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "CurrentAccount.h"
#include<iostream>
using namespace std;
CurrentAccount::CurrentAccount(int i,float b) :BankAccount(i,b){
	// TODO Auto-generated constructor stub

}
void CurrentAccount::amountWithdrawn(float amount){
	if(amount>(this->balanceInquiry()) ||this->balanceInquiry()-amount<5000)
	{
		cout<<"\nInvalid withdraw!";
	}
	else
	{
		this->setBalance(this->balanceInquiry()-amount);
	}
}
void CurrentAccount::amountDeposit(float amount)
{
	this->setBalance(this->balanceInquiry()+amount);
}
CurrentAccount::~CurrentAccount() {
	// TODO Auto-generated destructor stub
}

