#include <iostream>
using namespace std;


int main()
{
    int a = 3, d = 8;
    double b = 6.5;
    int* p = &a;
    *p = 15;
    p = &d;

    double* ptr = &b;
    *ptr = 3.15;

    int arr[5]{ 1,2,10,15,16 };

    return 0;
}   


//int main() {
//	int a[10]{ 1,5,6,7,8,9,11,13,15,16 };
//	int* p = a;
//	for (int i = 0; i < 10; i++) {
//		cout << p << " " << *p << endl;
//		p++;
//	}
//
//	cout << "after loop:" << p << endl;
//
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		sum += *(a+i);
//		p++;
//	}
//
//	cout << sum << endl;
//	cout << "after loop:" << p << endl;
//	return 0;
//}

//int main() {
//	int c[20]{ 1,5,6,7,8,9,11,13,15,16,21,23,24,25,30,31,32,34,35,40};
//	int* p = &c[19];
//	for (int i = 0; i < 20; i++) {
//			cout << p << " " << *p << endl;
//			p--;
//		}
//}

//int main() {
//	int c[20]{ 1,5,6,7,8,9,11,13,15,16,21,23,24,25,30,31,32,34,35,40 };
//	int a[20]{ 3,4,5,1,2,3,5,7,8,8,1,2,3,5,5,6,7,8,8,9 };
//	int x[40]{ 0 };
//	int* p1 = c;
//	int* p2 = a;
//	int* px = x;
//	for (int i = 0; i < 39; i+=2) {
//		x[i] = *p1;
//		p1++;
//		x[i+1] = *p2;
//		p2++;
//	}
//
//	for (int i = 0; i < 40; i++) {
//			cout << px << " " << *px << endl;
//			px++;
//		}
//
//	return 0;
//
//}


//int main() {
//	int a[10]{ 1,5,6,7,8,19,11,13,15,16 };
//	int max = *a;
//	for (int i = 0; i < 10; i++) {
//		if (*(a + i) > max) {
//			max = *(a + i);
//		}
//	}
//	cout << max << endl;
//}