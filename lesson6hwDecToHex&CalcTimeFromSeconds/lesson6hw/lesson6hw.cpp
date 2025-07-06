//1.1

//#include <iostream>
//#include <string>
//using namespace std;
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	// Значення, яке повернув
//	// return, можна записати в змінну
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// Значення, яке повернув
//	// return, можна відразу вивести на екран
//	cout << "Maximum is: " << Max(42, 2);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int Min(int a, int b) {
//	return a < b ? a : b;
//}
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	// Значення, яке повернув return,
//	// можна записати в змінну
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// Значення, яке повернув return,
//	// можна відразу вивести на екран
//	cout << "Minimum is: " << Min(10, 30);
//	return 0;
//}

//1.2

//#include <iostream>
//using namespace std;
//void SomeFunc() {
//		/*
//		Змінна створюється при першому виклику функції
//		Після виходу з функції вона не знищується
//		і зберігає своє значення
//		*/
//		static int a = 0;
//	a++;
//	cout << a << endl;
//}
//int main()
//{
//	// 1
//	SomeFunc();
//	// 2
//	SomeFunc();
//	// 3
//	SomeFunc();
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

//2

//double power2(double a, double n) {
//	if (n == 0) return 1;
//	if (n < 0) { 
//		return power2(1.0 / a, -n);
//	}
//	if (n > 0) { 
//		return a * power2(a, n - 1);
//	}
//}
//
//int main() {
//	double result = power2(5, 0);
//	cout << result << endl;
//	double result1 = power2(5, 3);
//	cout << result1 << endl;
//	double result2 = power2(5, -3);
//	cout << result2 << endl;
//
//}

//3

//void calcSecondsToHMS(int seconds) {
//    int hours, minutes, seconds1;
//
//    hours = seconds / 3600;
//    minutes = (seconds % 3600) / 60;
//    seconds1 = seconds % 60;
//
//    cout << seconds << " s - is " << hours << " h " << minutes << " min " << seconds1 << " s" << endl;
//}
//int main() {
//    calcSecondsToHMS(7515);
//}

//4

void decToOCT(int n) {
    if (n > 0) {
        int r1 = n % 8;
        decToOCT(n/8);
        cout << r1 << "";
    }
}

void decToHEX(int n) {
    if (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            decToHEX(n / 16);
            cout << remainder;
        }
        else {
            
            char r2 = 'x';
            switch (remainder)
            {
            case 10:
                r2 = 'A';
                decToHEX(n / 16);
                cout << r2;
                break;
            case 11:
                r2 = 'B';
                decToHEX(n / 16);
                cout << r2;
                break;
            case 12:
                r2 = 'C';
                decToHEX(n / 16);
                cout << r2;
                break;
               
            case 13:
                r2 = 'D';
                decToHEX(n / 16);
                cout << r2;
                break;
              
            case 14:
                r2 = 'E';
                decToHEX(n / 16);
                cout << r2;
                break;
            case 15:
                r2 = 'F';
                decToHEX(n / 16);
                cout << r2;
                break;
               
            }
        }
    }
}



int main() {
    int number;
    cin >> number;

    decToOCT(number);
    cout << endl;
    decToHEX(number);

    return 0;
}


//5

//int modAB(int a, int b) {
//    if (a < b) {
//        return a;
//    }
//    else {
//        return modAB(a - b, b);
//    }
//}
//
//int main() {
//	int result = modAB(13, 4);
//    cout << result << endl;
//}