#include "BankAccount.h"

int main()
{
    BankAccount a(100'000, "405430568586");

    try { a.deposit(-500); }
    catch (InvalidAmountException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    float user;
    cout << "Amount: ";
    cin >> user;

    try { a.withdraw(user); }
    catch (InsufficientFundsException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    catch (InvalidAmountException* obj) {
        cout << obj->showMessage() << endl; delete obj;
    }
    cout << endl;
    a.getInfo();
}

