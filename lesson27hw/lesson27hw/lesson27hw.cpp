#include "Truck.h"

int main()
{
    Truck a("Man", "White", 48, 24, 50);
    a.showInfo();
    cout << a.getDeliveryPrice() * 780 << endl;
}

