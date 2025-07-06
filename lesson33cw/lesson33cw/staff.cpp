#include "staff.h"
#include <iostream>

using namespace std;

Staff::Staff() : Employee(), bonus(0.0f) {}

Staff::Staff(string fullName, string position, float salary, float bonus)
    : Employee(fullName, position, salary), bonus(bonus) {}

void Staff::setBonus(float bonus) {
    this->bonus = bonus;
}

float Staff::getBonus() const {
    return bonus;
}

float Staff::calcSalary() const {
    return salary + bonus;
}

void Staff::showInfo() const {
    Employee::showInfo();
    cout << "Bonus: " << bonus << "uah" << endl;
    cout << "Total Salary: " << calcSalary() << endl;
}
