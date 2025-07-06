#include "Student.h"

//void showStudent(Student obj) {
//    cout << "Name: " << obj.name << endl;
//    cout << "Phys: " << obj.phys << endl;
//    cout << "Math: " << obj.math << endl;
//    cout << "Info: " << obj.info << endl;
//    cout << endl;
//}

int main()
{
    /*Student stud1 = { "Poluektov Danylo", 10, 11 ,12 };
    Student stud2 = { "Saltevskaya Anna", 11, 12 ,10 };
    cin >> stud1.info;

    Student* stud3 = new Student{ "Lapshun Tatyana", 12, 12, 12 };

    stud1.showInfo();
    stud2.showInfo();
    stud3->showInfo();*/

    Student arr[3]{
        {"Poluektov Danylo", 6, 2 ,5},
        {"Saltevskaya Anna", 11, 12 ,10},
        {"Lapshun Tatyana", 12, 12, 12} };

    for (int i = 0; i < 3; i++) {
        arr[i].showInfo();
    }
    int c = 0;
    for (int i = 0; i < 3; i++) {
        if ((arr[i].info + arr[i].math + arr[i].phys) / 3 >= 7) {
            cout << arr[i].name << endl;
            c++;
        }
        
    }
    cout << c << endl;
}

