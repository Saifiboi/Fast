/*
 * CurrentAccount.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef CURRENTACCOUNT_H_
#define CURRENTACCOUNT_H_
#include "BankAccount.h"
class CurrentAccount:public BankAccount {
public:
	CurrentAccount(int=0,float=0);
	void amountWithdrawn(float amount);
	void amountDeposit(float amount);
	virtual ~CurrentAccount();
};

#endif /* CURRENTACCOUNT_H_ */