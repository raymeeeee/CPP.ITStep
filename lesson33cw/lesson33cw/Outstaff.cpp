//Бражник Андрій
#include "Outstaff.h"
#include "Outstaff.h"
#include <iostream>
Outstaff::Outstaff() {};

Outstaff::Outstaff(string fullName, string position, float salary)
    : Employee(fullName, position, salary) {};

float Outstaff::calcSalary() const {
    return salary;
}
void Outstaff::showInfo() const {
    Employee::showInfo();
    std::cout << "Total Salary: " << calcSalary() << std::endl;
}

