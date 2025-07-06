#include <iostream>
#include "ArrayTemplate.h"

//bool isPos(int a) { return a > 0; }
//bool isNeg(int a) { return a < 0; }
//bool isOdd(int a) { return a % 2 != 0; }
//bool isEven(int a) { return a % 2 == 0; }



int main()
{
    int size = 10;
    int* arr = new int[size] {-5, -2, 2, 3, 4, 5, -10, 12, 9, 11};
    printArray(arr, size);


    /*bool (*arrFunc[4])(int) = { isPos, isNeg, isOdd, isEven };
    for (int i = 0; i < 4; i++) {
        cout << i+1 << " func: " << arrFunc[i](arr[0]) << endl;
    }*/


    /*cout << "Amount pos: " << my_count_if(arr, size, isPos) << endl;
    cout << "Amount neg: " << my_count_if(arr, size, isNeg) << endl;
    cout << "Amount odd: " << my_count_if(arr, size, isOdd) << endl;
    cout << "Amount even: " << my_count_if(arr, size, isEven) << endl;*/

    /*cout << "Amount pos: " << my_count_if<int>(arr, size, [](int a) {return a > 0; }) << endl;
    cout << "Amount neg: " << my_count_if<int>(arr, size, [](int a) {return a < 0; }) << endl;
    cout << "Amount odd: " << my_count_if<int>(arr, size, [](int a) {return a % 2 != 0; }) << endl;
    cout << "Amount even: " << my_count_if<int>(arr, size, [](int a) {return a % 2 == 0; }) << endl;

    cout << "Amount prime: " << my_count_if<int>(arr, size, [](int a) -> bool {
        if (a <= 1) return false;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) return false;
        }
        return true;
        }) << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Sum pos: " << my_sum_if<int>(arr, size, [](int a) {return a > 0; }) << endl;
    cout << "Sum neg: " << my_sum_if<int>(arr, size, [](int a) {return a < 0; }) << endl;
    cout << "Sum odd: " << my_sum_if<int>(arr, size, [](int a) {return a % 2 != 0; }) << endl;
    cout << "Sum even: " << my_sum_if<int>(arr, size, [](int a) {return a % 2 == 0; }) << endl;
    cout << "-------------------------------------------" << endl;*/
    cout << "Find pos: " << my_find_if<int>(arr, size, [](int a) {return a > 0; }) << endl;
    cout << "Find neg: " << my_find_if<int>(arr, size, [](int a) {return a < 0; }) << endl;
    cout << "Find odd: " << my_find_if<int>(arr, size, [](int a) {return a % 2 != 0; }) << endl;
    cout << "Find even: " << my_find_if<int>(arr, size, [](int a) {return a % 2 == 0; }) << endl;
    cout << "-------------------------------------------" << endl;
    /*my_replace_if<int>(arr, size, [](int a){return a > 0;},1);
    printArray(arr, size);
    my_replace_if<int>(arr, size, [](int a){return a < 0; }, 0);
    printArray(arr, size);
    my_replace_if<int>(arr, size, [](int a){return a % 2 != 0; }, 1);
    printArray(arr, size);
    my_replace_if<int>(arr, size, [](int a){return a % 2 == 0; }, 0);
    printArray(arr, size);*/
    cout << "-------------------------------------------" << endl;
    /*my_remove_if<int>(arr, size, [](int a) {return a % 2 == 0; });
    printArray(arr, size);
    my_remove_if<int>(arr, size, [](int a) {return a < 0; });
    printArray(arr, size);*/
    cout << "-------------------------------------------" << endl;
    int* B = nullptr;
    int size_copy = 0;
    /*my_copy_if<int>(arr, size, B, size_copy, [](int a) {return a % 2 != 0; });
    printArray(arr, size);
    printArray(B, size_copy);*/
    delete[] arr;
    return 0;
}

