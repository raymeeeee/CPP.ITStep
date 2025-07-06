#include "Date.h"

int main()
{
    Date d1;
    Date d2(2000, 1, 1);

    /*d1.showDate();
    d2.showDate();*/

    cout << d1 << " " << d2 << endl;
    cout << "---------------------\n\n";

    d1++;
    --d2;

    d1.nextDate();
    d2.prevDate();


    /*d1.showDate();
    d2.showDate();*/

    cout << d1 << " " << d2 << endl;
    cout << "---------------------\n\n";

    cout << d1 << " == " << d2 << (d1 == d2 ? " True" : " False") << endl;
    cout << d1 << " != " << d2 << (d1 != d2 ? " True" : " False") << endl;
    cout << d1 << " > " << d2 << (d1 > d2 ? " True" : " False") << endl;
    cout << d1 << " < " << d2 << (d1 < d2 ? " True" : " False") << endl;
    cout << d1 << " >= " << d2 << (d1 >= d2 ? " True" : " False") << endl;
    cout << d1 << " <= " << d2 << (d1 <= d2 ? " True" : " False") << endl;

    cout << "---------------------\n\n";

    d1 += 5;
    d2 += 5.0;

    cin >> d2;

    cout << d1 << " " << d2 << endl;

    cout << "---------------------\n\n";

    cout << d1 + 5 << " " << 5 + d1 << endl;
    cout << d2 + 5.0 << " " << 5.0 + d2 << endl;

    cout << "---------------------\n\n";
}


