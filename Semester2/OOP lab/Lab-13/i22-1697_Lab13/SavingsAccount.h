/*
 * SavingsAccount.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include "BankAccount.h"
class SavingsAccount:public BankAccount {
public:
	SavingsAccount(int=0,float=0);
	void amountWithdrawn(float amount);
	void amountDeposit(float amount);
	virtual ~SavingsAccount();
};

#endif /* SAVINGSACCOUNT_H_ */
