#pragma once
#include "staff.h"
#include "Outstaff.h"
#include "Employee.h"

#include <vector>
#include <algorithm>

class Department
{
protected:
	string name;
	vector<Employee*> employees;
public:
	Department();
	Department(string name);
	~Department();

	void setName(string name);
	string getName()const;

	void addEmployee(Employee* employee);
	void delEmployee(int index);
	void findEmployee(string fullName);
	void showEmployees()const;

	void showInfo()const;
};

