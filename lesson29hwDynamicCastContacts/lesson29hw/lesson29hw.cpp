#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

#include "Catalog.h"

int main()
{
    /*Contact a("rei", "+44 1234 123456");
    cout << a.getName() << endl;
    cout << a.getNumber() << endl;
    a.showInfo();*/

    /*Person b("rei", "+44 1234 123456", "poluektov", "The Lodge");
    cout << b.getAddress() << endl;
    b.setSurname("ayanami");
    b.showInfo();*/
    
    /*Colleague c("rei", "+44 1234 123456", "Valve", "The Lodge", "Home phone", "+44 4321 654321");
    c.showInfo();*/

    /*Friend d("rei", "+44 1234 123456", "poluektov", "The Lodge", "27/02/2008");
    d.showInfo();*/

    Catalog contacts;
    contacts.contactPushBack(new Friend("rei1", "+44 1234 123456", "poluektov", "The Lodge", "27/02/2008"));
    contacts.contactPushBack(new Colleague("rei2", "+44 1234 123456", "Valve", "The Lodge", "Home phone", "+44 4321 654321"));
    contacts.contactPushBack(new Person("rei3", "+44 1234 123456", "poluektov", "The Lodge"));
    //contacts.showCatalog();
    //contacts.delContact("rei");
    /*cout << "=====================================================" << endl;
    cout << "=====================================================" << endl;
    contacts.showCatalog();
    cout << "=====================================================" << endl;
    cout << "=====================================================" << endl;*/

    //cout << &typeid(Person) << endl;

    //contacts.findType("class Friend");

    string info = "SHOW to show all contacts\nADD to add contact\nDEL to delete contact\nEDIT to edit contact\nFIND to find type of contacts\nEXIT to leave the program";
    while (true) {
        cout << endl <<  info << endl << endl;
        string choice = "";
        cin >> choice;
        cout << endl;
        if (choice == "SHOW") {
            contacts.showCatalog();
        }
        else if (choice == "ADD") { //можно добавить функцию в каталог
            cout << "Choose what type of contact you want to add" << endl;
            cout << "Person | Colleague | Friend" << endl;
            cin >> choice;
            cout << endl;
            if (choice == "Person") {
                string tmp1;
                string tmp2;
                string tmp3;
                string tmp4;
                cout << "Name: "; cin >> tmp1;
                cout << "Number: "; cin >> tmp2;
                cout << "Surname: "; cin >> tmp3;
                cout << "Address: "; cin >> tmp4;
                Contact* p = new Person(tmp1, tmp2, tmp3, tmp4);

                contacts.contactPushBack(p);
            }
            else if (choice == "Colleague") {
                string tmp1;
                string tmp2;
                string tmp3;
                string tmp4;
                string tmp5;
                string tmp6;
                cout << "Name: "; cin >> tmp1;
                cout << "Number: "; cin >> tmp2;
                cout << "Company: "; cin >> tmp3;
                cout << "Address: "; cin >> tmp4;
                cout << "Fax: "; cin >> tmp5;
                cout << "Contact Person Number: "; cin >> tmp6;
                Contact* c = new Colleague(tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);

                contacts.contactPushBack(c);
            }
            else if (choice == "Friend") {
                string tmp1;
                string tmp2;
                string tmp3;
                string tmp4;
                string tmp5;
                cout << "Name: "; cin >> tmp1;
                cout << "Number: "; cin >> tmp2;
                cout << "Surname: "; cin >> tmp3;
                cout << "Address: "; cin >> tmp4;
                cout << "Birthdate: "; cin >> tmp5;
                Contact* f = new Friend(tmp1, tmp2, tmp3, tmp4, tmp5);
                contacts.contactPushBack(f);
            }
            else {
                cout << "Wrong type of choice" << endl;
            }
        }
        else if (choice == "DEL") {
            contacts.showCatalog();
            cout << "=======================" << endl;

            cout << "Choose name of contact you want to delete" << endl;
            cin >> choice;
            cout << endl;
            contacts.delContact(choice);
        }
        else if (choice == "EDIT") {
            contacts.showCatalog();
            cout << "=======================" << endl;

            cout << "Choose name of contact you want to edit" << endl;
            cin >> choice;
            cout << endl;
            int contact = contacts.findName(choice);
            if (contact != -1) {
                contacts.editContact(contact);
            }
        }
        else if (choice == "FIND") {
            cout << "Choose what you want to find" << endl;
            cout << "NAME | TYPE" << endl;
            cin >> choice;
            cout << endl;
            if (choice == "NAME") {
                cout << "Name of contact: "; cin >> choice;
                contacts.showContact(contacts.findName(choice));
            }
            else if (choice == "TYPE") {
                cout << "Choose what type you want to find" << endl;
                cout << "Person | Colleague | Friend" << endl;
                cin >> choice;
                cout << endl;
                if (choice == "Person" || choice == "Colleague" || choice == "Friend") {
                    contacts.findType("class " + choice);
                }
                else {
                    cout << "Wrong type of choice" << endl;
                }
                
            }
            else {
                cout << "Wrong type of choice" << endl;
            }
        }
        else if (choice == "EXIT") {
            break;
        }
        else {
            cout << "Wrong type of choice" << endl;
        }
    }
        
}

