#include <iostream>
using namespace std;

//float square_trap(int a, int b, int h) {
//    return (a + b) * 0.5 * h;
//}
//
//int main()
//{
//    float t1 = square_trap(5, 6, 2);
//    float t2 = square_trap(7, 8, 3);
//    float t3 = square_trap(8, 9, 4);
//    float sum = t1 + t2 + t3;
//    cout << sum << endl;
//}



//float circleS(int R) {
//	return 3.14 * (R * R);
//}
//
//int main() {
//	float c1 = circleS(10);
//	float c2 = circleS(15);
//	float c3 = circleS(20);
//	float sum = c1 + c2 + c3;
//	cout << sum << endl;
//}



//float rootsCount(float a, float b, float c) {
//	if (a != 0) {
//		float D = b * b - (4 * a * c);
//		if (D > 0) {
//			return 2;
//		}
//		else if (D < 0) {
//			return 0;
//		}
//		else {
//			return 1;
//		}
//	}
//	else {
//		return -1;
//	}
//}
//
//int main() {
//	cout << "Roots: " << rootsCount(5, 6, -4) << endl;
//	cout << "Roots: " << rootsCount(6, 5, -4) << endl;
//	cout << "Roots: " << rootsCount(-4, 5, 6) << endl;
//}



//int sumRange(int a, int b) {
//	if (a > b) {
//		return 0;
//	}
//	else {
//		int sum = 0;
//		for (int i=a; i < b+1; i++) {
//			sum += i;
//		}
//		return sum;
//	}
//}
//
//int main() {
//	int a = 1;
//	int b = 10;
//	int c = 15;
//	int sum = sumRange(a, b);
//	int sum1 = sumRange(b, c);
//	cout << sum << endl;
//	cout << sum1 << endl;
//}



//int quarter(int x, int y) {
//	if (x > 0 && y > 0) {
//		return 1;
//	}
//	if (x < 0 && y > 0) {
//		return 2;
//	}
//	if (x < 0 && y < 0) {
//		return 3;
//	}
//	if (x > 0 && y < 0) {
//		return 4;
//	}
//}
//
//int main() {
//	int m1 = quarter(4, -4);
//	int m2 = quarter(1, 1);
//	int m3 = quarter(-2, -10);
//	cout << m1 << endl;
//	cout << m2 << endl;
//	cout << m3 << endl;
//}



//int digitCount(int k) {
//	int c = 0;
//	int n = 0;
//	while (k > 0) {
//		c++;
//		k = k / 10;
//	}
//	return c;
//}
//
//int main() {
//	int c = digitCount(543543665);
//	cout << c << endl;
//}



//void drawLine(int a, char b = '*') {
//	for (int i = 0; i < a; i++) {
//		cout << b;
//	}
//	cout << endl;
//}
//void drawRect(int h, int w, char b = '*') {
//	for (int i = 0; i < h; i++) {
//		drawLine(w, b);
//	}
//	cout << endl;
//}
//
//int main() {
//	drawLine(8);
//	cout << endl;
//	drawRect(4, 6, '+');
//}



//void printN(int n) {
//	if (n > 1) {
//		printN(n - 1);
//	}
//	cout << n << " ";
//}
//
//int main() {
//	printN(5);
//}



//void printN(int a, int b) {
//	if (a < b) {
//		cout << a << " ";
//		printN(a + 1, b);
//	}
//	else if (a > b) {
//		printN(a, b + 1);
//		cout << b << " ";
//	}
//	else {
//		cout << b << " ";
//	}
//}
//	
//
//int main() {
//		printN(3, 12);
//		cout << endl;
//		printN(12, 3);
//}
int multiply(int a, int b) {
	if (b > 0) {
		return a + multiply(a, b-1);
	}
	else {
		return 0;
	}
	
}

int main() {
	int sum = multiply(2, 3);
	cout << sum;
}