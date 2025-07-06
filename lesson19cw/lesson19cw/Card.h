#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card {
//private: (default)
	//attributes
	unsigned int m_cardNumber; 
	char m_name[50];
	char m_expiredDate[6];
	int m_PIN;
	double m_cash;

	//methods - behaviors
public:

	Card(); //default constructor
	Card(const char* client_name, double cash); //constructor with parameters
	~Card();

	//accessibility 

	int getCardNumber();
	const char* getName();
	const char* getExpDate();
	int getPIN();
	double getCash();

	void setPIN(int oldPIN, int newPIN);

	void showInfo();

	void topupCash(int cash, int cardNumber, int PIN); // ++cash to bank acc
	void withdrawCash(int cash, int PIN); // --cash from bank acc

};



