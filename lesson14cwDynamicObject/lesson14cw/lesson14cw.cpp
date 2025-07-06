#include <iostream>

#include "Date.h"
#include "Violation.h"
#include "Driver.h"
#include "ArrayTemplate.h"
int main()
{
    /*Date a;
    a.getNowDate();

    cout << a.toString() << endl;
    cout << a.toString("%d %m") << endl;*/

    /*Violation n{ {1,1,2024}, "Speed 180 km/h", 25'000 };
    Violation b;

    b.fillViolation();
    cout << "_____________________________" << endl;
    n.showInfo();
    b.showInfo();*/

    /*Driver Vasya = { "Pupkin Vasya", "AX1234KH", 2, new Violation[2]{
        { { 1, 1, 2024 }, "Speed 180 km/h", 25'000 },
        { { 5, 6, 2024 }, "Speed 165 km/h", 10'000 }
    } };

    Driver Kolya;
    Kolya.fillDriver();

    cout << "_____________________________" << endl;
    Vasya.showDriver();
    Kolya.showDriver();*/

    int NDrivers = 2;
    Driver* arrD = new Driver[NDrivers]{
        {"Pupkin Vasya", "AX1234KH", 2, new Violation[2]{
            {{1, 1, 2024}, "Speed 180 km/h", 25'000},
            {{5, 5, 2024}, "Parking", 350}
        }},
        {"Ivanchyk Kolya", "AX8765BA", 0, nullptr}
    };

    int menu = 0;
    char str[100] = "";
    float sum = 0;
    Driver newDriver;
    Violation newViolation;
    int k = -1;
    do {
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "|           Menu            |" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "|0. Exit                    |" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "|1. Show all drivers        |" << endl;
        cout << "|2. Show all violations     |" << endl;
        cout << "|3. Add driver              |" << endl;
        cout << "|4. Add violation to driver |" << endl;
        cout << "|5. Show driver`s violations|" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cin >> menu;
        switch (menu)
        {

        case 0:
            cout << "See you soon!" << endl; break;

        case 1:
            for (int i = 0; i < NDrivers; i++) {
                cout << "#" << i + 1 << ". " << arrD[i].name << endl;
            }break;

        case 2:
            for (int i = 0; i < NDrivers; i++) {
                for (int j = 0; j < arrD[i].sizeViolation; j++) {
                    arrD[i].arr[j].showInfo();
                    /*sum += arrD[i].arr[j].fine;
                    cout << "\tTotal sum of fines: " << sum << endl;*/
                }
            }break;

        case 3:
            cout << "\t New Driver:\n";
            cin.ignore();
            newDriver.fillDriver();
            addItemBack(arrD, NDrivers, newDriver);
            break;

        case 4:
            cout << "Input car number:\n";
            cin >> str;

            for (int i = 0; i < NDrivers; i++) {
                if (strcmp(str, arrD[i].carNumber) == 0) {
                    k = i;
                    break;
                }
            }

            if (k == -1) {
                cout << "Driver not found" << endl;
            }
            else {
                newViolation.fillViolation();
                addItemBack(arrD[k].arr, arrD[k].sizeViolation, newViolation);
            }
            break;
        case 5:
            cout << "Input car number:\n";
            cin >> str;

            for (int i = 0; i < NDrivers; i++) {
                if (strcmp(str, arrD[i].carNumber) == 0) {
                    k = i;
                    break;
                }
            }

            if (k == -1) {
                cout << "Driver not found" << endl;
            }
            else {
                arrD[k].showDriver();
            }
            break;
        default:cout << "Error\n"; break;
        }
    } while (menu != 0);

    
}


