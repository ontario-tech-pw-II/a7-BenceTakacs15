#include "CheckingAccount.h"

using namespace std;

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initialBalance, double fee) : Account(initialBalance)
{
	if (fee < 0.0)
		transactionFee = 0.0;
	else
		transactionFee = fee;
}

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit(double amount)
{
	setBalance(getBalance() + amount);
	chargeFee();
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit(double amount)
{
	// Not enough money
	if (getBalance() + transactionFee < amount)
		return false;

	// Enough money
	setBalance(getBalance() - amount);
	chargeFee();
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	setBalance(getBalance() - transactionFee);
}

void CheckingAccount::display(ostream& os) const
{
	cout << "Account Type: Checking" << endl;
	cout << "Balance: $" << getBalance() << endl;
	cout << "Transaction Fee: " << transactionFee << endl;
}
