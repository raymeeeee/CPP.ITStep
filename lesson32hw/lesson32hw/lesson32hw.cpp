#include "Zoo.h"

int main()
{
    /*Bird b;
    b.showInfo();
    Fish c;
    c.showInfo();
    Mammal d;
    d.showInfo();*/

    Cage d("01234", 5);
    d.addAnimal(new Bird("Titmouse", 0, 30));
    d.addAnimal(new Fish("Salmon", 0, 1));
    d.addAnimal(new Mammal("Elephant", 0, "Savanna"));

    d.showInfo();
    d.delAnimal(2);
    cout << "==========================================" << endl;

    d.showInfo();
    try { d.addAnimal(new Mammal("Lion", 1, "Savanna")); }
    catch (PredatorException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (MaxCapacityException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }

    try { d.addAnimal(new Mammal("Cat", 0, "Dormitory")); }
    catch (PredatorException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (MaxCapacityException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }

    try { d.addAnimal(new Mammal("Dog", 0, "Dormitory")); }
    catch (PredatorException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (MaxCapacityException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }

    try { d.addAnimal(new Mammal("", 1, "Dormitory")); }
    catch (PredatorException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (MaxCapacityException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (NameException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    cout << "==========================================" << endl;

    d.showInfo();
}

