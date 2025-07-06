#include "Teacher.h"
#include "Manager.h"

#include <vector>
#include <typeinfo>
#include <algorithm>
int main()
{
    Employee a("Brazhnik Andriy", 15'000);
    /*a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;*/

    Teacher b("Kaluzhniy Artem", 10'000, 500, 20);
    /*b.showInfo();
    cout << "Total salary: " << b.calcSalary() << endl;*/

    Manager c("Saltevska Anna", 30'000, 10, 80'000);
    /*c.showInfo();
    cout << "Total salary: " << c.calcSalary() << endl;*/

    vector<Employee*> itStep = {&a, &b, &c};
    itStep.push_back(new Manager("Smagin Oleksandr", 32'000, 15, 96'000));
    itStep.push_back(new Manager("Chelishev Ivan", 22'000, 50, 25'900));
    itStep.push_back(new Teacher("Hiyalov Ruslan", 29'000, 350, 20));
    itStep.push_back(new Employee("Poluektov Danylo", 55'000));

    for (int i = 0; i < itStep.size(); i++) //7
    {
        itStep[i]->showInfo(); //same name of func required to make dynamic polymorphism
        cout << endl;
    }
    cout << "======================================" << endl;

    //cout << "Managers:\n" << endl;
    //for (int i = 0; i < itStep.size(); i++) //7
    //{
    //    if (typeid(*itStep[i]) == typeid(Manager)) {
    //        cout << "Name: " << itStep[i]->getName() << endl;
    //    }     
    //}
    //cout << "======================================" << endl;

    //cout << "Teachers:\n" << endl;
    //for (int i = 0; i < itStep.size(); i++) //7
    //{
    //    if (typeid(*itStep[i]) == typeid(Teacher)) {
    //        cout << "Name: " << itStep[i]->getName() << endl;
    //        //Teacher* p = (Teacher*)itStep[i];
    //        Teacher* p = dynamic_cast<Teacher*>(itStep[i]); //dynamic_cast employee, manager to teacher = NULLPTR
    //        cout << "Old cost: " << p->getCost() << endl;
    //        p->setCost(p->getCost() + 100);
    //        cout << "New cost: " << p->getCost() << endl;
    //        cout << endl;
    //    }
    //}
    //cout << "======================================" << endl;

    sort(itStep.begin(), itStep.end()); //sort by address
    sort(itStep.begin(), itStep.end(), [](Employee* a, Employee* b) {return a->calcSalary() > b->calcSalary(); });

    for (auto item : itStep) {
        item->showInfo();
        cout << endl;
    }

    /*for (int i = 3; i < itStep.size(); i++) 
    {
        delete itStep[i];
    }*/
}

