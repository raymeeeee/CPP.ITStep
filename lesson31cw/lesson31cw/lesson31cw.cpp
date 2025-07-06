#include "Class2.h"
#include "Class3.h"
#include "OutsideClass.h"

//namespace a {
//    class MyClass {
//    public:
//        void show()const { cout << "a" << endl; };
//    };
//}
//
//namespace b {
//    class MyClass {
//    public:
//        void show()const { cout << "b" << endl; };
//    };
//}
//
//
//int main()
//{
//    a::MyClass x;
//    x.show();
//    b::MyClass y;
//    y.show();
//
//    using namespace a;
//    MyClass c;
//    c.show();
//    //using namespace b;
//    /*MyClass d;
//    d.show();*/
//}

int main() {
	n1::Class1 a1;
	a1.show();
	
	n1::Class2 a2;
	a2.show();

	n1::Class3 a3;
	a3.show();

	OutsideClass a4;
	a4.show();
}
