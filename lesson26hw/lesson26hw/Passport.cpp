#include "Passport.h"

Passport::Passport()
{
	 m_series = rand() % 100 + 1;
	 m_number = rand() % 100000 + 10000;
	 m_lastname = "";
	 m_name = "";
	 m_birthdate.setDay(0);
	 m_birthdate.setMonth(0);
	 m_birthdate.setYear(0);
	 m_birthplace = "";
	 m_receiptDate.setDay(0);
	 m_receiptDate.setMonth(0);
	 m_receiptDate.setYear(0);
	 m_receiptPerson = "";
	 m_surname = "";
	 m_registration = "";
}

Passport::Passport(string surname, string lastname, string name, Date birthdate, string birthplace, string receiptPerson, string registration)
{
	Date now;

	m_series = rand() % 100 + 1;
	m_number = rand() % 10000 + 1;
	m_lastname = lastname;
	m_name = name;
	m_birthdate = birthdate;
	m_birthplace = birthplace;
	m_receiptDate = now;
	m_receiptPerson = receiptPerson;
	m_surname = surname;
	m_registration = registration;
}

void Passport::setLastname(string lastname)
{
	m_lastname = lastname;
}

void Passport::setName(string name)
{
	m_name = name;
}

void Passport::setSurname(string surname)
{
	m_surname = surname;
}

void Passport::setRegistration(string registration)
{
	m_registration = registration;
}

void Passport::setReceiptDate(Date receiptDate)
{
	m_receiptDate = receiptDate;
}

void Passport::setReceiptPerson(string receiptPerson)
{
	m_receiptPerson = receiptPerson;
}

int Passport::getSeries() const
{
    return m_series;
}

int Passport::getNumber() const
{
    return m_number;
}

string Passport::getLastname() const
{
    return m_lastname;
}

string Passport::getName() const
{
    return m_name;
}

Date Passport::getBirthdate() const
{
    return m_birthdate;
}

string Passport::getBirthplace() const
{
    return m_birthplace;
}

Date Passport::getReceiptDate() const
{
    return m_receiptDate;
}

string Passport::getReceiptPerson() const
{
    return m_receiptPerson;
}

void Passport::showPassport() const
{
	cout << "\t" << m_series << "#" << m_number << endl;
	cout << "Surname: " << m_surname << endl;
	cout << "Lastname: " << m_lastname << endl;
	cout << "Name: " << m_name << endl;
	cout << "Birthdate: " << m_birthdate << endl;
	cout << "Birthplace: " << m_birthplace << endl;
	cout << "Receipt date: " << m_receiptDate << endl;
	cout << "Receipt person: " << m_receiptPerson << endl;
	cout << "Registration: " << m_registration << endl;
		
}
