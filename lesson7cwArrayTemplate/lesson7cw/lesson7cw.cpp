#include "ArrayTemplate.h"
#include <ctime>

int main()
{
    srand(time(0));
    const int size = 10, N = 5;
    int a[size]{ 0 };
    float b[N] = { 0 };
    printArray(a, size);
    printArray(b, N);
    cout << "----------------------------" << endl;

    randArray(a, 10);
    printArray(a, size);
    randArray(b, 5, -5, 15);
    printArray(b, 5);

    cout << "================task3==================" << endl;

    cout << "Max: " << a[indexMaxElement(a, size)] << endl;
    cout << "Max: " << a[indexMinElement(a, size)] << endl;
    cout << "----------------------------" << endl;
    cout << "Max: " << b[indexMaxElement(b, N)] << endl;
    cout << "Max: " << b[indexMinElement(b, N)] << endl;

    cout << "================task4==================" << endl;

    cout << "Sum: " << sumArray(a, size) << endl;
    cout << "----------------------------" << endl;
    cout << "Sum: " << sumArray(b, N) << endl;

    cout << "================task5==================" << endl;

    cout << "Find: " << searchNum(a, size, 5) << endl;
    cout << "----------------------------" << endl;
    cout << "Find: " << searchNum(b, N, 5.0f) << endl;

    cout << "================task6==================" << endl;

    mySort(a, size);
    printArray(a, size);
    cout << "----------------------------" << endl;
    mySort(b, N);
    printArray(b, N);

    cout << "================task7==================" << endl;

    cout << "Sum 0-3: " << sumEl(a,size, 0, 3) << endl;
    cout << "----------------------------" << endl;
    cout << "Sum 0-3: " << sumEl(b, N, 0, 3) << endl;




    cout << "================task8==================" << endl;

    calc_time(127);
    calc_time(1, 17);

    cout << "================task9==================" << endl;

    cout << addFractions(0.3, 0.5) << endl;
    cout << "----------------------------" << endl;
    cout << addFractions(1,2,3,5) << endl;

    cout << "================task10==================" << endl;

    cout << day_of_week(333) << endl;
    cout << "----------------------------" << endl;
    cout << day_of_week(2, 27, 2008) << endl;

    cout << "================+==================" << endl;
    cout << oddEl(a, size) << endl;
    cout << "----------------------------" << endl;

}

