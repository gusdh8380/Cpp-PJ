#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
};

void BankAccount::init(string number, int balance)
{
	this->number = number;
	this->balance = balance;
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::deposit(int amount)
{
	balance += amount;
	cout << "after deposit(" << amount << ") ";
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::withdraw(int amount)
{
	balance -= amount;
	cout << "after withdraw(" << amount << ") ";
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

int main()
{
	BankAccount account;

	account.init("1002-757-180432", 1000000);
	account.deposit(1000000);
	account.withdraw(1000000);

	return 0;
}