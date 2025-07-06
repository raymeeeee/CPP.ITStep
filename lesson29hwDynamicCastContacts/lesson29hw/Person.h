#pragma once
#include "Contact.h"
class Person :
    public Contact
{
protected:
    string surname;
    string address;
public:
    Person() { surname = ""; address = ""; };
    Person(string name, string number, string surname, string address) : Contact(name, number) {
        this->surname = surname;
        this->address = address;
    };

    void setSurname(string surname) { this->surname = surname; };
    void setAddress(string address) { this->address = address; };

    string getSurname()const { return surname; };
    string getAddress()const { return address; };

    void showInfo()const override {
        Contact::showInfo();
        cout << "Surname: " << surname << endl;
        cout << "Address: " << address << endl;
    }
};

