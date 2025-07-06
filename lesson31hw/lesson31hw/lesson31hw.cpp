#include <iostream>
using namespace std;
namespace A {
    namespace B {
        void show() { cout << "AB" << endl; }
    }
}
void show() { cout << "namespace main" << endl; }
int main()
{
    show();
    using namespace A::B;
    show();
    //не може бути 2 різних функції з однаковим іменем
}

