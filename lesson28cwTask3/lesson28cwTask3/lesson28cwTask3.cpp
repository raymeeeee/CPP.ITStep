#include "Shop.h"

int main()
{
    Overcoat a("Man", 7, 20.99);
    Overcoat b("Woman", 3, 28.99);

    a.showOvercoat();
    cout << "==============" << endl;
    b.showOvercoat();
    cout << "==============" << endl;

    cout << (a < b) << endl;
    cout << (a == b) << endl;
    cout << "==============" << endl;
    for (int i = 0; i < 5; i++)
    {
        a--; b--;
    }
    a.showOvercoat();
    cout << "==============" << endl;
    b.showOvercoat();
    cout << "==============" << endl;
    cout << endl << endl;
    Shop shop;
    Overcoat c("Child", 2, 12.99);
    Overcoat d("Woman", 4, 24.99);
    shop.shopPushBack(a);
    shop.shopPushBack(b);
    shop.shopPushBack(c);
    shop.shopPushBack(d);
    shop.showShop();
    shop.shopAddSizeEl(4);
    shop.shopAddSizeEl(3);
    shop.shopSubstractSizeEl(2);
    shop.shopSubstractSizeEl(1);
    shop.shopSort();
    cout << "==============" << endl;
    shop.showShop();
    cout << "==============" << endl;
    shop.shopFindType("Woman");

    cout << "==============" << endl;
    cout << a << endl;
    cout << "==============" << endl;
    cin >> a;
    cout << endl;
    cout << a << endl;
}

