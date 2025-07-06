#include "Department.h"

Department::Department()
{
	name = "undefined";
}

Department::Department(string name)
{
	this->name = name;
}

Department::~Department()
{
	for (int i = 0; i < employees.size(); i++)
	{
		delete employees[i];
	}
}

void Department::setName(string name)
{
	this->name = name;
}

string Department::getName() const
{
	return name;
}

void Department::addEmployee(Employee* employee)
{
	if (employee != nullptr) employees.push_back(employee);
}

void Department::delEmployee(int index)
{
	if (index > 0 && index <= employees.size()) {
		delete employees[index - 1];
		employees.erase(employees.begin() + index - 1);
	}
}

void Department::findEmployee(string fullName)
{
	for (int i = 0; i < employees.size(); i++)
	{
		if (employees[i]->getFullName() == fullName) {
			if (typeid(*employees[i]) == typeid(Staff)) {
				cout << "------Staff------" << endl;
				Staff* s = dynamic_cast<Staff*>(employees[i]);
				s->showInfo();
				return;
			}
			else if (typeid(*employees[i]) == typeid(Outstaff)) {
				cout << "------Outstaff------" << endl;
				Outstaff* os = dynamic_cast<Outstaff*>(employees[i]);
				os->showInfo();
				return;
			}
		}
	}
	cout << "No such employee" << endl;
}

void Department::showEmployees() const
{
	for (int i = 0; i < employees.size(); i++)
	{
		if (typeid(*employees[i]) == typeid(Staff)) {
			cout << "------Staff------" << endl;
		}
		else if (typeid(*employees[i]) == typeid(Outstaff)) {
			cout << "------Outstaff------" << endl;
		}
		employees[i]->showInfo();
		cout << endl;
	}
}

void Department::showInfo() const
{
	this->showEmployees();
	cout << "Company: " << name << endl;
}
