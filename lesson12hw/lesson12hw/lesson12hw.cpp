//#include "ArrayTemplate.h"
#include "DoubleArrayTemplate.h"
//1.1
//int main()
//{
//	int i, j;
//	// «м≥нн≥ дл€ опису характеристик масив≥в.
//	// m1 Ч к≥льк≥сть р€дк≥в, m2 Ч к≥льк≥сть стовпц≥в
//	int m1, m2;
//	cout << "How many rows:\n";
//	cin >> m1;
//	int** pArr = new int* [m1];
//	for (i = 0; i < m1; i++)
//	{
//		cout << "How many cells in the row-" << i << "?\n";
//		cin >> m2;
//		pArr[i] = new int[m2];
//			// заповненн€ р€дка двовим≥рного динам≥чного
//			// масиву даними та вив≥д
//			for (j = 0; j < m2; j++)
//			{
//				pArr[i][j] = i * j;
//				cout << pArr[i][j] << " ";
//			}
//		cout << "\n";
//	}
//	// ѕосл≥довне знищенн€ двовим≥рного масиву...
//	for (i = 0; i < m1; i++)
//	{
//		delete[]pArr[i];
//	}
//	delete[]pArr;
//	return 0;
//}

//1.2
//int main()
//{
//	// m1 Ч к≥льк≥сть р€дк≥в, m2 Ч к≥льк≥сть стовпц≥в
//	int m1 = 5, m2 = 5;
//	int i, j, k;
//	int** pXArr = new int* [m1];
//	k = m2;
//	// ќрган≥зац≥€ двовим≥рного динам≥чного масиву
//	for (i = 0; i < m1; i++, k--)
//	{
//		pXArr[i] = new int[k];
//	}
//	for (i = 0; i < m1; i++, m2--)
//	{
//			for (j = 0; j < m2; j++)
//			{
//				// заповненн€ р€дка двовим≥рного
//				// динам≥чного масиву даними та вив≥д
//				pXArr[i][j] = 5;
//				cout << pXArr[i][j] << " ";
//			}
//		cout << "\n";
//	}
//	// ѕосл≥довне знищенн€ двовим≥рного масиву...
//	for (i = 0; i < m1; i++)
//	{
//		delete[]pXArr[i];
//	}
//	delete[]pXArr;
//	return 0;
//}

//1.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	// m1 Ч к≥льк≥сть р€дк≥в (висота),
//	// m2 Ч к≥льк≥сть стовпц≥в (ширина), m3 Ч глибина
//	int m1 = 5, m2 = 3, m3 = 2;
//		int i, j;
//	// покажчик на покажчик на покажчик :)
//	int*** pXArr = new int** [m1];
//	// ќрган≥зац≥€ тривим≥рного динам≥чного масиву
//	for (i = 0; i < m1; i++)
//	{
//		pXArr[i] = new int* [m2];
//		for (j = 0; j < m2; j++)
//		{
//			pXArr[i][j] = new int[m3];
//		}
//	}
//	// ƒоступ до елемент≥в масиву
//	pXArr[1][2][3] = 750;
//	cout << pXArr[1][2][3] << "\n";
//	// ¬идаленн€ в посл≥довност≥, зворотн≥й створенню
//	for (i = 0; i < m1; i++)
//	{
//		for (j = 0; j < m2; j++)
//		{
//			delete[]pXArr[i][j];
//		}
//		delete[]pXArr[i];
//	}
//	delete[] pXArr;
//	return 0;
//}



//2
//int main() {
//	int size1 = 5;
//	int size2 = 4;
//	int** arr = nullptr;
//	createMemory(arr, size1, size2);
//	randArray(arr, size1, size2);
//	printArray(arr, size1, size2);
//	int k;
//	cin >> k;
//	addNewRow(arr, size1, size2, k-1, 0);
//	cout << endl;
//	printArray(arr, size1, size2);
//	cin >> k;
//	addNewRow(arr, size1, size2, k - 1, 0);
//	cout << endl;
//	printArray(arr, size1, size2);
//	
//}

//3
//int main() {
//	int size1 = 5;
//	int size2 = 4;
//	int** arr = nullptr;
//	createMemory(arr, size1, size2);
//	randArray(arr, size1, size2);
//	printArray(arr, size1, size2);
//
//	int** temp = nullptr;
//	createMemory(temp, size1, size2);
//	cout << endl;
//	for (int i = 1; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			temp[i-1][j] = arr[i][j];
//		}
//	}
//	for (int i = 0; i < size2; i++) {
//		temp[size1-1][i] = arr[0][i];
//	}
//	printArray(temp, size1, size2);
//}

//4 
//template <typename T>
//void createTriangle(T**& m, int n=5, char ch='*') {
//	m = new T* [n];
//	for (int i = 0; i < n; i++) {
//		if (i > ((n / 2) + 1)) {
//			m[i] = new T[(n - i)+1];
//		}
//		else {
//			m[i] = new T[i + 1];
//		}
//		
//		for (int j = 0; j < i+1; j++)
//		{
//			if (j > (n-i)-1) {
//				break;
//			}
//			else {
//				m[i][j] = ch;
//				cout << char(m[i][j]) << " ";
//			}
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < n; i++){
//		delete[] m[i];
//	}
//	delete[] m;
//}
//
//int main() {
//	int** m = nullptr;
//	int n = 0;
//	char ch = '_';
//	cin >> n >> ch;
//	cout << endl;
//	if (n % 2 == 0) {
//		n++;
//	}
//	createTriangle(m, n, ch);
//	return 0;
//}



//5
//int main() {
//	char n[5][25]{ "Poluektov/10B/5","Dergunov/9C/4","Saltevskaya/11A/5","Belyaninova/10B/4","Akimov/10A/3" };
//	for (int i = 0; i < 5; i++) {
//		if (n[i][strlen(n[i])-1] == '5') {
//			for (int j = 0; j < strlen(n[i]); j++) {
//				if (n[i][j] == '/') {
//					break;
//				}
//				else {
//					cout << n[i][j];
//				}
//			}
//			cout << endl;
//		}
//
//	}
//}