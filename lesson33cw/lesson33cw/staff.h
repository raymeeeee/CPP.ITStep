#pragma once
#include "employee.h"

class Staff : public Employee {
private:
    float bonus; 

public:
    Staff();
    Staff(string fullName, string position, float salary, float bonus);

    void setBonus(float bonus);
    float getBonus() const;

    float calcSalary() const override;

    void showInfo() const override;
};
