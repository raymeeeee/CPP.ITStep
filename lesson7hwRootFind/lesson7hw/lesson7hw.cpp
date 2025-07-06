
#include "Header.h"
using namespace std;
//int main()
//{
//    
//
//}

//1.1
//#include <iostream>
//#include <string>
//#include <time.h>
//using namespace std;
//// відображення масиву
//void ShowArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
///* ініціалізуємо масив усередині функції випадковими
//числами на відміну від звичайних змінних, зміни
//елементів масиву, що відбуваються всередині функції,
//при виході з функції зберігаються
//*/
//void InitArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 100;
//	}
//	cout << endl;
//}
//int main()
//{
//	srand(time(NULL));
//	const int aSize = 10;
//	int iArr[aSize];
//	InitArray(iArr, aSize);
//	ShowArray(iArr, aSize);
//	return 0;
//}


//1.2.1
//#include <iostream>
//using namespace std;
//long max_element(int n, int array[])
//
//// Функція для масивів з елементами типу int.
//{
//	int value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (int) : "; return long(value);
//}
//long max_element(int n, long array[])
//// Функція для масивів з елементами типу long.
//{
//	long value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (long) :";
//	return value;
//}
//double max_element(int n, float array[])
//// Функція для масивів з елементами типу float.
//{
//	float value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (float) : ";
//	return double(value);
//}
//double max_element(int n, double array[])
//// Функція для масивів з елементами типу double.
//{
//	double value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (double) : ";
//	return value;
//}
//
//int main()
//{
//	int x[] = { 10, 20, 30, 40, 50, 60 };
//	long f[] = { 12L, 44L, 5L, 22L, 37L, 30L };
//	float y[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };
//	double z[] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06 };
//	cout << "max_elem(6,x) = " << max_element(6, x);
//	cout << "max_elem(6,f) = " << max_element(6, f);
//	cout << "max_elem(6,y) = " << max_element(6, y);
//	cout << "max elem(6,z) = " << max_element(6, z);
//	return 0;
//}


//1.2.2

//int main() {
//	cout << "Max from 10 and 5 = " << Max(10, 5) << "\n";
//	cout << "Max from 'A' and 'B' = " << Max('A', 'B') << "\n";
//	cout << "Max from 3.5 and 5.1 = " << Max(3.5, 5.1) << "\n";
//}

//1.3

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//template <class T>
//void setMin(T a[], long size) {
//	T min = a[0];
//	for (int i = 1; i < size; i++)
//		if (a[i] < min)
//			min = a[i];
//	a[0] = min;
//}
//template <class T>
//void insertSortGuarded(T a[], long size) {
//	T x = 0;
//	long i, j;
//	// зберегти старий перший елемент
//	T backup = a[0];
//	// замінити на мінімальний
//	setMin(a, size);
//	// вісортувати масив
//	for (i = 1; i < size; i++) {
//		х = a[i];
//		for (j = i - 1; a[j] > x; j--)
//			a[j + 1] = a[j];
//			a[j + 1] = x;
//	}
//	// вставити backup на правильне місце
//	for (j = 1; j < size && a[j] < backup; j++)
//		a[j - 1] = a[j];
//	// вставка елемента
//	a[j - 1] = backup;
//}
//int main() {
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE]{ 0 };
//	// до сортування
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = rand() % 100;
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	insertSortGuarded(ar, SIZE);
//	// після сортування
//	for (int i = 0; i < SIZE; i++) {
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
//}





//2

//void InitArray(int arr[], int size) {
//		for (int i = 0; i < size; i++) {
//			arr[i] = rand() % 100;
//		}
//		cout << endl;
//	}
//
//void ShowArray(int arr[], int size) {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//int main() {
//  srand(time(NULL));
//	const int size = 10;
//	int arr[size]{ 0 };
//	InitArray(arr, size);
//	ShowArray(arr, size);
//	smoothArray(arr, size);
//	ShowArray(arr, size);
//	smoothArray(arr, size);
//	ShowArray(arr, size);
//	smoothArray(arr, size);
//	ShowArray(arr, size);
//	smoothArray(arr, size);
//	ShowArray(arr, size);
//	smoothArray(arr, size);
//	ShowArray(arr, size);
//}




//3

//void InitArray(int arr[], int size) {
//			for (int i = 0; i < size; i++) {
//				arr[i] = rand() % 100;
//			}
//			cout << endl;
//		}
//	
//void ShowArray(int arr[], int size) {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//int main() {
//	srand(time(NULL));
//	const int size = 10;
//	int arr[size]{ 0 };
//	InitArray(arr, size);
//	ShowArray(arr, size);
//	float avgM = averageMoreM(arr, size, 40);
//	cout << avgM << " 40 " << endl;
//}




//4

int main() { 
	string x = rootFind(10.0, -20.0);
	cout << x;
	cout << endl;
	x = rootFind(2.0, 3.0, -20.0);
	cout << x;
}