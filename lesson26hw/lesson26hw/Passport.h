#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Date.h"
using namespace std;

class Passport
{
protected:
	int m_series;
	int m_number;
	string m_lastname;
	string m_name;
	Date m_birthdate;
	string m_birthplace;
	Date m_receiptDate;
	string m_receiptPerson;
private:
	string m_surname;
	string m_registration;
public:
	Passport();
	Passport(string surname, string lastname, string name, Date birthdate, string birthplace, string receiptPerson, string registration);

	void setLastname(string lastname);
	void setName(string name);
	void setSurname(string surname);
	void setRegistration(string registration);
	void setReceiptDate(Date receiptDate);
	void setReceiptPerson(string receiptPerson);

	int getSeries()const;
	int getNumber()const;
	string getLastname()const;
	string getName()const;
	Date getBirthdate()const;
	string getBirthplace()const;
	Date getReceiptDate()const;
	string getReceiptPerson()const;

	void showPassport()const;
};

