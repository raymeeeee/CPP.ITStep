#include "Employee.h"

Employee::Employee()
{
    fullName = "undefined";
    position = "undefined";
    salary = 0;
}

Employee::Employee(string fullName, string position, float salary)
{
    this->fullName = fullName;
    this->position = position;
    this->salary = salary;
}

void Employee::setFullName(string fullName)
{
    this->fullName = fullName;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}

string Employee::getFullName() const
{
    return fullName;
}

string Employee::getPosition() const
{
    return position;
}

float Employee::getSalary() const
{
    return salary;
}

void Employee::showInfo() const
{
    cout << "Full Name: " << fullName << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << "uah" << endl;
}

