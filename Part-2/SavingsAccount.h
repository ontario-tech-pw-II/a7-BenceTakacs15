#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount(double, double);
	double calculateInterest();
	void display(ostream &os) const;
};

#endif