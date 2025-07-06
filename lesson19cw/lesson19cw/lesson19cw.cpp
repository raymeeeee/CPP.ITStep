#include <iostream>
#include "Card.h"
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int user = 0;

    Card* privat = nullptr;

    cout << "0 - Standart card" << endl;
    cout << "1 - VIP card" << endl;
    cin >> user;

    if (user == 0) privat = new Card(); // default constructor
    else {
        privat = new Card("Poluektov Danylo", 1000); // constructor with parametres
    }

    privat->showInfo();

    cout << "===================================" << endl;

    cout << endl;
    int tmp1, tmp2;
    cout << "Input old PIN: "; cin >> tmp1;
    cout << "Input new PIN: "; cin >> tmp2;

    privat->setPIN(tmp1, tmp2);
    cout << "Card: " << privat->getCardNumber() << endl;
    cout << "PIN: " << privat->getPIN() << endl;
    cout << endl;

    cout << "===================================" << endl;

    cout << endl;
    cout << "Topup cash: "; cin >> tmp1;
    cout << "Input PIN: "; cin >> tmp2;
    privat->topupCash(tmp1, privat->getCardNumber(), tmp2);
    cout << "\tCard: " << privat->getCardNumber() << endl;
    cout << "\tCash: " << privat->getCash() << endl;
    cout << endl;

    cout << "===================================" << endl;

    cout << endl;
    cout << "Withdraw cash: "; cin >> tmp1;
    cout << "Input PIN: "; cin >> tmp2;
    privat->withdrawCash(tmp1, tmp2);
    cout << "\tCard: " << privat->getCardNumber() << endl;
    cout << "\tCash: " << privat->getCash() << endl;
    cout << endl;

    delete privat;

}
