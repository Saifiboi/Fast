/*
 * SavingsAccount.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "SavingsAccount.h"
#include<iostream>
using namespace std;
SavingsAccount::SavingsAccount(int i,float b) :BankAccount(i,b){
	// TODO Auto-generated constructor stub

}
void SavingsAccount::amountWithdrawn(float amount){
	if(amount>(this->balanceInquiry()) ||this->BankAccount::balanceInquiry()-amount<10000)
	{
		cout<<"\nInvalid withdraw!";
	}
	else
	{
		this->setBalance(this->balanceInquiry()-amount);
	}
}
void SavingsAccount::amountDeposit(float amount)
{
	this->setBalance(this->balanceInquiry()+amount);
}
SavingsAccount::~SavingsAccount() {
	// TODO Auto-generated destructor stub
}

