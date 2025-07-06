#include <iostream>
using namespace std;
#include "ArrayTemplate.h"
//template <typename T>
//void swap_f(T& X, T& Y) {
//    T buff = X;
//    X = Y;
//    Y = buff;
//}
//
//
//int main()
//{
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    cout << a << " " << b << " " << c << " " << d << endl;
//    swap_f(a, b);
//    cout << a << " " << b << " " << c << " " << d << endl;
//    swap_f(c, d);
//    cout << a << " " << b << " " << c << " " << d << endl;
//    swap_f(b, c);
//    cout << a << " " << b << " " << c << " " << d << endl;
//}



//void RectPS(int x1, int y1, int x2, int y2, int& P, int& S) {
//	int a = abs(x2 - x1);
//	int b = abs(y2 - y1);
//	S = a * b;
//	P = (a + b) * 2;
//}
//int main() {
//	int x_1 = 2, x_2 = 4, y_1 = 3, y_2 = 6;
//	int a=2, b=6, c=8, d=10;
//	int m = 10, n = 12, f = 14, k = 20;
//	int P = 0, S = 0;
//	RectPS(x_1, y_1, x_2, y_2, P, S);
//	cout << "P = " << P << " S = " << S << endl;
//	RectPS(a, b, c, d, P, S);
//	cout << "P = " << P << " S = " << S << endl;
//	RectPS(m, n, f, k, P, S);
//	cout << "P = " << P << " S = " << S << endl;
//}

//void addRightDigit(int D, int& K) {
//	K = K * 10 + D;
//}
//
//int main() {
//	int n1,n2,a=0;
//	cout << "digit: " << endl;
//	cin >> n1 >> n2;
//	cout << "num: " << endl;
//	cin >> a;
//	addRightDigit(n1, a);
//	cout << a << endl;
//	addRightDigit(n2, a);
//	cout << a << endl;
//}

int main()
{
    int N = 0;
    int* stud = nullptr;
    cout << "Array: " << stud << endl;

    cout << "Input amount of students: ";
    cin >> N; // 3 * int = 12 bytes

    stud = new int[N] {0}; // ..0.. ..0.. ..0.. 
    cout << "Array: " << stud << endl;
    randArray(stud, N, 1, 12);
    printArray(stud, N);

    cout << "-----------------------------------" << endl;

    addItemBack(stud, N, 10);
    cout << "Array: " << stud << endl;
    printArray(stud, N); 

    cout << "-----------------------------------" << endl;

    addItemForw(stud, N, 10);
    cout << "Array: " << stud << endl;
    printArray(stud, N);

    delete[] stud;
}

