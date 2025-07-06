#include "Library.h"

void Library::addPublication(Publication* publication)
{
	if (publication != nullptr) publications.push_back(publication);
}

void Library::delPublication(int index)
{
	if (index > 0 && index <= publications.size()) {
		delete publications[index - 1];
		publications.erase(publications.begin() + index - 1);
	}
}

void Library::findPublication(string name)
{
	for (int i = 0; i < publications.size(); i++)
	{
		if (publications[i]->getName() == name) {
			if (typeid(*publications[i]) == typeid(Book)) {
				cout << "------Book------" << endl;
				Book* b = dynamic_cast<Book*>(publications[i]);
				b->showInfo();
				return;
			}

			else if (typeid(*publications[i]) == typeid(Magazine)) {
				cout << "------Magazine------" << endl;
				Magazine* m = dynamic_cast<Magazine*>(publications[i]);
				m->showInfo();
				break;
			}

			else if (typeid(*publications[i]) == typeid(Magazine)) {
				cout << "------Magazine------" << endl;
				Magazine* m = dynamic_cast<Magazine*>(publications[i]);
				m->showInfo();
				return;
			}

		}
	}
	
	cout << "No such publication" << endl;
}

void Library::showPublications() const
{
	for (int i = 0; i < publications.size(); i++)
	{
		if (typeid(*publications[i]) == typeid(Book)) {
			cout << "------Book------" << endl;
		}
		else if (typeid(*publications[i]) == typeid(Magazine)) {
			cout << "------Magazine------" << endl;
		}
		publications[i]->showInfo();
		cout << endl;
	}
}

void Library::showInfo() const
{
	this->showPublications();
	cout << "Library Name: " << name << endl;
}
