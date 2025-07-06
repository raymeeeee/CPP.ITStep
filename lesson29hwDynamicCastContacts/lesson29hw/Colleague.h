#pragma once
#include "Contact.h"
class Colleague :
    public Contact
{
protected:
    string company;
    string address;
    string fax; //что такое факс // типо устройство?
    string contactPerson; //номер контактної особи
public:
    Colleague() { company = ""; address = "";
    fax = ""; contactPerson = "+___ ____ ______";
    };
    Colleague(string name, string number, string company, string address, string fax, string contactPerson) : Contact(name, number) {
        this->company = company;
        this->address = address;
        this->fax = fax;
        this->contactPerson = contactPerson;
    };

    void setCompany(string company) { this->company = company; };
    void setAddress(string address) { this->address = address; };
    void setFax(string fax) { this->fax = fax; };
    void setContactPerson(string contactPerson) { this->contactPerson = contactPerson; };

    string getCompany()const { return company; };
    string getAddress()const { return address; };
    string getFax()const { return fax; };
    string getContactPerson()const { return contactPerson; };


    void showInfo()const override {
        Contact::showInfo();
        cout << "Company: " << company << endl;
        cout << "Address: " << address << endl;
        cout << "Fax: " << fax << endl;
        cout << "Contact Person Number: " << contactPerson << endl;
    }
};

