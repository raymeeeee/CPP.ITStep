#include "Computer.h"

int main()
{
    int size = 5;
    Computer* arr = new Computer[size]{
        {"LG4100", 2.4, 6, false, 9000},
        {"LG4500", 2.9, 8, false, 10000},
        {"LG4900", 3.8, 12, true, 12000},
        {"LG6200", 4.1, 16, true, 15000},
        {"LG8200", 5.2, 24, false, 18000}

    };

    int amount = 0;
    for (int i = 0; i < size; i++){

        if (arr[i].RAM >= 10) {
            amount++;
            arr[i].showComputer();
        }
    }
    if (amount == 0) {
        cout << "Not found" << endl;
    }
}
