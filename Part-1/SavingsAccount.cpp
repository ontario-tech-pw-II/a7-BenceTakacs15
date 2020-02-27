#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance, double rate) : Account(initialBalance)
{
	if (rate < 0.0)
		interestRate = 0.0;
	else
		interestRate = rate;
}

double SavingsAccount::calculateInterest()
{
	return interestRate;
}

void SavingsAccount::display(ostream& os) const
{
	os << "Account Type: Savings" << endl;
	os << "Balance: $" << getBalance() << endl;
	os << "Interest Rate (%): " << interestRate * 100 << endl;
}
