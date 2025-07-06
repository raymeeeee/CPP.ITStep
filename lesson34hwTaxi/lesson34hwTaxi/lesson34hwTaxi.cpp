#include "TaxiArr.h"
int main()
{
    TaxiArr arr;
    arr.push_front(Taxi(321, "AudiR8", "Tyler Durden"));
    arr.push_front(Taxi(123, "AudiR5", "Bob Poslon"));
    arr.push_front(Taxi(456, "AudiR10", "Barak Obama"));
    //arr.showArr();
    arr.insert(123, Taxi(789, "Mazda", "Oleg Borisovich"));
    cout << "=================================" << endl;
    //arr.showTaxi();
    /*arr.remove(123);
    arr.remove(789);
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    arr.showTaxi();
    arr.callTaxi(321);
    arr.callTaxi(321);
    arr.callTaxi(123);
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    arr.showTaxi();
    arr.returnTaxi(321);
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;*/
    arr.showFreeTaxi();
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    arr.callTaxi(123);
    arr.callTaxi(321);
    arr.showWorkingTaxi();
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;


}

