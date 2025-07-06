#include "Card.h"
#define DEBUG

Card::Card(){

	m_cardNumber = rand() + 10000;
	strcpy_s(m_name, 50, "undefined");
	strcpy_s(m_expiredDate, 6, "01.34");
	m_PIN = rand() % (9999 - 1000 + 1) + 1000;
	m_cash = 0;
	
#ifdef DEBUG
	cout << "Card(): " << m_cardNumber << endl;
#endif // DEBUG

	cout << "Opened standart card: " << m_cardNumber << endl;

}

Card::Card(const char* client_name, double cash){

	m_cardNumber = rand() + 10000;
	strcpy_s(m_name, 50, client_name);
	strcpy_s(m_expiredDate, 6, "01.34");
	m_PIN = rand() % (9999 - 1000 + 1) + 1000; //from a to b: a-1000, b-9999 (four digit number)
	m_cash = cash;


#ifdef DEBUG
	cout << "Card(): " << m_cardNumber << endl;
#endif // DEBUG

	cout << "Opened VIP card: " << m_cardNumber << endl;

}

Card::~Card(){
#ifdef DEBUG
	cout << "~Card(): " << m_cardNumber << endl;
#endif // DEBUG

	cout << "Closed card: " << m_cardNumber << endl;
}




int Card::getCardNumber() {
	return m_cardNumber;
}

const char* Card::getName() {
	return m_name;
}

const char* Card::getExpDate() {
	return m_expiredDate;
}

int Card::getPIN() {
	return m_PIN;
}

double Card::getCash() {
	return m_cash;
}

void Card::setPIN(int oldPIN, int newPIN){

	if (oldPIN == m_PIN) {
		m_PIN = newPIN;
	}
	else { cout << "Error: incorrect PIN" << endl; }

}




void Card::showInfo(){

	cout << "++++++++++++++++++++++++++++++++" << endl;
	cout << "|\tCard:        " << m_cardNumber << endl;
	cout << "|\tClient:      " << m_name << endl;
	cout << "|\tCash:        " << m_cash << endl;
	cout << "++++++++++++++++++++++++++++++++" << endl;
	cout << "|\tExpiry date: " << m_expiredDate << endl;
	cout << "|\tPIN:         " << m_PIN << endl;
	cout << "++++++++++++++++++++++++++++++++" << endl << endl;

}



void Card::topupCash(int cash, int cardNumber, int PIN) {

	if (cash <= 0) cout << "Error: wrong amount of cash" << endl;
	else if (m_cardNumber != cardNumber) cout << "Error: card not found" << endl;
	else if (m_PIN != PIN) cout << "Error: incorrect PIN" << endl;
	else {

		m_cash += cash;

	}

}

void Card::withdrawCash(int cash, int PIN) {

	if (m_PIN != PIN) cout << "Error: incorrect PIN" << endl;
	else if (cash > m_cash) cout << "Error: not enough cash on bank acc" << endl;
	
	else {

		m_cash -= cash;

	}

}