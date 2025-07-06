// lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int main()
//{
//    int a, b;
//    int k = 0;
//    cin >> a >> b;
//    for (; a <= b; a++, k++) {
//        cout << a << " ";
//        
//    }
//    cout << k;
//    
//}

//int main() {
//	int m, k;
//    int n = 0;
//	cin >> m >> k;
// 
//    while (m >= k) {
//        m-=k;
//        n++;
//    }
//    cout << "rest: " << m << " amount of icecream: " << n;
//}

//int main() {
//	float n;
//	cin >> n;
//	int d=0;
//	for (; n < 20; d++) {
//		n = n + n * 0.1;
//		cout << n;
//		cout << endl << endl;
//	}
//	cout << d;
//}

//int main() {
//	int num;
//	int sum = 0;
//	int amount = 0;
//	do
//	{
//		cout << "Input number (0 to exit): "; cin >> num;
//		sum += num;
//		amount++;
//	} while (num != 0);
//	float avg = (float)sum / (amount-1);
//	cout << avg;
//}

//int main() {
//	int num;
//	cin >> num;
//	for (int i=0; i < 10; i++) {
//		cout << num << " ";
//
//	}
//}

//int main() {
//	int a, b;
//	cin >> a >> b;
//	for (int i = b - 1; i > a; i--)
//		cout << i << " ";
//}

//int main() {
//	float f = 0.453;
//	for (int i = 1; i < 11; i++)
//		cout << i << " " << i * f << endl;
//}

//int main() {
//	const double growth = 0.01;
//	const double transfer = 0.01;
//
//	int n2 = 0;
//	int n = 0;
//	cin >> n;
//	int d;
//	for (d = 1; n2 < 35000; d++) {
//		n += n * growth;
//		if (n > 50000 && d % 30 == 0) {
//			n2 += n * transfer;
//			n -= transfer * n;
//		}
//	}
//	cout << d;
//}

int main()
{
    int x = 2022, y = 15;
    int res = x + y;
    cout << "result = " << res << endl;

    return 0;
}