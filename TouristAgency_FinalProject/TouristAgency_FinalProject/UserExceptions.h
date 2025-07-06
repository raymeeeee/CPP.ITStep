#pragma once
#include <iostream>
#include <string>
using namespace std;

class InvalidAmountException
{
protected:
	string text;
	double amount;
public:
	InvalidAmountException(string text, double amount) { this->amount = amount; this->text = text; };
	string showMessage()const { return text + ". Amount: " + to_string(amount) + "."; };
};

class InsufficientFundsException
{
protected:
	string text;
	double balance;
public:
	InsufficientFundsException(string text, double balance) { this->balance = balance; this->text = text; };
	string showMessage()const { return text + ". Balance: " + to_string(balance) + "."; };
};

