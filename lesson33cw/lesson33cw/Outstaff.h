//Бражник Андрій
#pragma once
#include "Employee.h"

class Outstaff : public Employee {
public:
    Outstaff();
    Outstaff(string fullName, string position, float salary);

    float calcSalary() const override;

    void showInfo() const override;
};

