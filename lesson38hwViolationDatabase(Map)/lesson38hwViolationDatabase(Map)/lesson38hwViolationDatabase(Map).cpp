#include "ViolationDatabase.h"

int main()
{
    ViolationDatabase vd;
    vd.addViolation("AX1818XA", Violation("Speeding", Date(), Time_(15,0,0), 1000));
    vd.addViolation("AX1818XA", Violation("Speeding", Date(), Time_(6, 0, 0), 1500));
    vd.addViolation("AX1818XA", Violation("Speeding", Date(), Time_(23, 0, 0), 2000));
    vd.addViolation("PK9120HO", Violation("Drunk", Date(), Time_(20, 0, 0), 3000));
    vd.addViolation("AS1391SK", Violation("Road accident", Date(), Time_(21, 0, 0), 10000));
    vd.show();
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << endl;
    vd.findCarViolations("AX1818XA");
    vd.findCarViolations("123");
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << vd.findTotalPaymentOfCar("AX1818XA") << endl;
    cout << vd.findTotalPaymentOfCar("123") << endl;
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << endl;
    
    float money = 31223;
    //vd.payViolation("AX1818XA", money);
    vd.show();
    cout << money << endl;

    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << "==============================" << endl;
    cout << endl;

    vd.findBetweenTimestamps(Time_(8, 0, 0), Time_(16, 0, 0));

}

