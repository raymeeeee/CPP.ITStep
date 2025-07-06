#pragma once

#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

#include <vector>
#include <typeinfo>
#include <algorithm>

class Catalog
{
protected:
	vector<Contact*> catalog;
public:
	Catalog() {};
	~Catalog() {
		for (int i = 0; i < catalog.size(); i++)
		{
			delete catalog[i];
		}
	};
	void contactPushBack(Contact* contact) { catalog.push_back(contact); };

	void delContact(string name) {
		int find = -1;
		for (int i = 0; i < catalog.size(); i++) //7
		{
			if (catalog[i]->getName() == name){
				delete catalog[i];
				catalog.erase(catalog.begin()+i);
				find++;
			}
		}
		if (find == -1) {
			cout << "Not found" << endl;
		}
	};

	void findType(string type) {
		for (int i = 0; i < catalog.size(); i++) //7
		{
			if (string(typeid(*catalog[i]).name()) == type) {
				catalog[i]->showInfo();
				cout << endl;
			}
		}
	};

	int findName(string name) {
		int find = -1;
		for (int i = 0; i < catalog.size(); i++) //7
		{
			if (catalog[i]->getName() == name) {
				//catalog[i]->showInfo();
				find = i;
				break;
			}
		}
		if (find == -1) {
			cout << "Not found" << endl;
		}
		return find;
	}

	void editContact(int index) {
		if (typeid(*catalog[index]) == typeid(Person)) { //можно добавить выбор что именно эдитить
			Person* p = dynamic_cast<Person*>(catalog[index]); //dynamic_cast employee, manager to teacher = NULLPTR
			string tmp;
			cout << "Name: "; cin >> tmp;
			p->setName(tmp);
			cout << "Number: "; cin >> tmp;
			p->setNumber(tmp);
			cout << "Surname: "; cin >> tmp;
			p->setSurname(tmp);
			cout << "Address: "; cin >> tmp;
			p->setAddress(tmp);
		}
		else if (typeid(*catalog[index]) == typeid(Colleague)) {
			Colleague* c = dynamic_cast<Colleague*>(catalog[index]);
			string tmp;
			cout << "Name: "; cin >> tmp;
			c->setName(tmp);
			cout << "Number: "; cin >> tmp;
			c->setNumber(tmp);
			cout << "Company: "; cin >> tmp;
			c->setCompany(tmp);
			cout << "Address: "; cin >> tmp;
			c->setAddress(tmp);
			cout << "Fax: "; cin >> tmp;
			c->setFax(tmp);
			cout << "Contact Person Number: "; cin >> tmp;
			c->setContactPerson(tmp);
		}
		else if (typeid(*catalog[index]) == typeid(Friend)) {
			Friend* f = dynamic_cast<Friend*>(catalog[index]); 
			string tmp;
			cout << "Name: "; cin >> tmp;
			f->setName(tmp);
			cout << "Number: "; cin >> tmp;
			f->setNumber(tmp);
			cout << "Surname: "; cin >> tmp;
			f->setSurname(tmp);
			cout << "Address: "; cin >> tmp;
			f->setAddress(tmp);
			cout << "Birthdate: "; cin >> tmp;
			f->setBirthDate(tmp);
		}

	}
	void showContact(int index) {
		if (index != -1) {
			catalog[index]->showInfo();
		}
	}
	void showCatalog()const {
		for (int i = 0; i < catalog.size(); i++) //7
		{
			if (typeid(*catalog[i]) == typeid(Person)) {
				cout << "---Person---" << endl;
			}
			else if (typeid(*catalog[i]) == typeid(Colleague)) {
				cout << "---Colleague---" << endl;
			}
			else if (typeid(*catalog[i]) == typeid(Friend)) {
				cout << "---Friend---" << endl;
			}
			catalog[i]->showInfo(); //same name of func required to make dynamic polymorphism
			cout << endl;
		}
	};
};

