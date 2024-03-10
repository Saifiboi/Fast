/*
 * BankAccount.cpp
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#include "BankAccount.h"

BankAccount::BankAccount(int i,float b) {
	this->accountID=i;
	this->balance=b;

}
float BankAccount::balanceInquiry(){
	return this->balance;
}

void BankAccount::setBalance(float balance) {
	this->balance = balance;
}

BankAccount::~BankAccount() {
	// TODO Auto-generated destructor stub
}

