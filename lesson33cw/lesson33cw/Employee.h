#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string fullName;
	string position;
	float salary;
public:
	Employee();
	Employee(string fullName, string position, float salary);

	void setFullName(string fullName);
	void setPosition(string position);
	void setSalary(float salary);

	string getFullName()const;
	string getPosition()const;
	float getSalary()const;

	virtual void showInfo()const;
	
	virtual float calcSalary()const = 0;
};

