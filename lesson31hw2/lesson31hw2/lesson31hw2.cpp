#include <iostream>
#include <typeinfo>
using namespace std;

namespace n1 {
    class Class_1 {
    public:
        Class_1() {};
        void show() { cout << typeid(Class_1).name() << endl; };
    };
    class Class_2 {
    public:
        Class_2() {};
        void show() { cout << typeid(Class_2).name() << endl; };
    };
    class Class_4 {
    public:
        Class_4() {};
        void show() { cout << typeid(Class_4).name() << endl; };
    };
}

namespace n2 {
    class Class_4 {
    public:
        Class_4() {};
        void show() { cout << typeid(Class_4).name() << endl; };
    };
    class Class_3 {
    public:
        Class_3() {};
        void show() { cout << typeid(Class_3).name() << endl; };
    };
    class Class_2 {
    public:
        Class_2() {};
        void show() { cout << typeid(Class_2).name() << endl; };
    };
}

int main()
{
    
    n1::Class_1 a;
    a.show();
    n1::Class_2 b;
    b.show();
    n1::Class_4 c;
    c.show();
    n2::Class_4 d;
    d.show();
    n2::Class_3 e;
    e.show();
    n2::Class_2 f;
    f.show();
    
}

