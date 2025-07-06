#pragma once
#include <iostream>
#include "Exceptions.h"
using namespace std;

class BankAccount
{
protected:
	double balance;
	string id;
public:
	BankAccount() { balance = 0; id = "id"; }
	BankAccount(double balance, string id) { this->balance = balance; this->id = id;}
	
	void deposit(double amount) {
		if (amount <= 0) throw new InvalidAmountException("Incorrect value", amount);
		balance += amount;
	};
	void withdraw(double amount) { 
		if (balance < amount) throw new InsufficientFundsException("Insufficient funds", balance);
		if (amount <= 0) throw new InvalidAmountException("Incorrect value", amount);
		balance -= amount; 
	};
	double getBalance() { return balance; };

	void getInfo()const {
		cout << "Balance: " << balance << endl;
		cout << "ID: " << id << endl;
	}
};

