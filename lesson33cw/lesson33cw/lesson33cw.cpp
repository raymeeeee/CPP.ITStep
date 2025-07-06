#include "Department.h"

int main()
{
	Department b("ITstep");
	b.addEmployee(new Staff("Poluektov Danylo", "TeamLid", 100000, 0));
	b.addEmployee(new Staff("Kaluzhniy Artem", "Worker", 50000, 1000));
	b.addEmployee(new Staff("Brazhnik Andriy", "Worker", 50000, 1000));
	b.addEmployee(new Outstaff("Ponomaryov Vsevolod", "Worker", 50000));
	b.addEmployee(new Outstaff("Lapshun Tanya", "Worker", 50000));
	//b.showInfo();
	b.delEmployee(5);
	b.showInfo();
	b.findEmployee("Brazhnik Andriy");
	b.findEmployee("Tyler Durden");
}

