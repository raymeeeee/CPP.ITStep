#include "MyQueue.h"
#include "MyPriorityQueue.h"
#include "Person.h"
#include <queue>

int main()
{
        
    /*myQueue::Queue<int> a;
    a.show();

    a.push_back(1);
    a.push_back(7);
    a.push_back(3);
    a.push_back(2);

    while (!a.isEmpty()) {
        cout << "First: " << a.first() << endl;
        a.show();
        a.pop_front();
    }
    a.show();*/
/////
    /*myQueue::PriorityQueue<int> b;
    b.show();

    b.push_back(1);
    b.push_back(7);
    b.push_back(3);
    b.push_back(10);
    b.push_back(-1);
    b.push_back(2);

    while (!b.isEmpty()) {
        cout << "First: " << b.first() << endl;
        b.show();
        b.pop_front();
    }
    b.show();*/
//////
    myQueue::PriorityQueue<Person> hospital;
    //priority_queue<Person> hospital;
    hospital.push_back(Person("Petro", 1, 1, 0));
    hospital.push_back(Person("Vasya", 0, 1, 0));
    hospital.push_back(Person("Maxim", 1, 0, 0));
    hospital.push_back(Person("Anna", 0, 0, 1));
    hospital.push_back(Person("Oleg", 0, 0, 0));
    hospital.push_back(Person("Andrew", 0, 0, 0));

    while (!hospital.isEmpty()) {
        hospital.first().show();
        hospital.pop_front();
    }

}

