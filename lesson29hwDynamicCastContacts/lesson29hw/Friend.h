#pragma once
#include "Contact.h"
class Friend :
    public Contact
{
protected:
    string surname;
    string address;
    string birthDate; //Date birthDate
public:
    Friend() {
        surname = ""; address = ""; birthDate = "__/__/____";
    };
    Friend(string name, string number, string surname, string address, string birthDate) : Contact(name, number) {
        this->surname = surname;
        this->address = address;
        this->birthDate = birthDate;
    };

    void setSurname(string surname) { this->surname = surname; };
    void setAddress(string address) { this->address = address; };
    void setBirthDate(string birthDate) { this->birthDate = birthDate; };

    string getSurname()const { return surname; };
    string getAddress()const { return address; };
    string getBirthDate()const { return birthDate; };

    void showInfo()const override {
        Contact::showInfo();
        cout << "Surname: " << surname << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: " << birthDate << endl;
    }
};

