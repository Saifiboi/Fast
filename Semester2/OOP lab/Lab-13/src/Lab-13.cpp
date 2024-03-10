//============================================================================
// Name        : Lab-13.cpp
// Author      : Saif ur rehman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "HourlyEmployee.h"
#include "PermanentEmployee.h"
#include "Computer.h"
#include "Desktop.h"
#include "Laptop.h"
int main() {
	CurrentAccount C(1,10000);
	SavingsAccount S(2,15000);
	C.amountDeposit(5000);
	cout<<C.balanceInquiry()<<endl;
	C.amountWithdrawn(5000);
	cout<<C.balanceInquiry()<<endl;
	S.amountDeposit(3000);
	cout<<S.balanceInquiry()<<endl;
	S.amountWithdrawn(3000);
	cout<<S.balanceInquiry()<<endl;
	HourlyEmployee H(150,1,"BILAL");
	PermanentEmployee P(150,2,"Saif");
	cout<<H.calculate_the_hourly_income(24)<<endl;
	cout<<P.calculate_the_hourly_income()<<endl;
	Computer *L;
	L=new Desktop("black","24X24pixels","Ryzen 7","hp",78000);
	L->show();
	delete L;
	L=new Laptop("black","24inches","34pounds","i7","dell",100000);
	L->show();

	return 0;
}
