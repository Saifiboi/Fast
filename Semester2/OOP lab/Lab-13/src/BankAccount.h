/*
 * BankAccount.h
 *
 *  Created on: May 3, 2023
 *      Author: safi
 */

#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

class BankAccount {
	int accountID;
	float balance;
public:
	BankAccount(int=0,float=0.0);
	void setBalance(float balance);
	float balanceInquiry();
	virtual ~BankAccount();

};

#endif /* BANKACCOUNT_H_ */
