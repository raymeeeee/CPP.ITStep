
#include "ArrayTemplate.h"
#include <iostream>
using namespace std;

////1.1
//int add(int n, int m)
//{
//	return n + m;
//}
//int division(int n, int m)
//{
//	return n / m;
//}
//int mult(int n, int m)
//{
//	return n * m;
//}
//int subt(int n, int m)
//{
//	return n - m;
//}
//int main()
//{
//	int (*par)(int, int); // Покажчик на функцію
//	int a = 6, b = 2;
//	char c = '+';
//	par = add;
//	while (c != ' ')
//	{
//		cout << "\n Arguments: a = " << a
//			<< ", b = " << b;
//			cout << ". Result for c = \'" << c << "\':";
//		switch (c)
//		{
//		case '+':
//		{
//			par = add;
//			c = '/';
//			break;
//		}
//		case '-':
//		{
//			par = subt;
//			c = ' ';
//			break;
//		}
//		case '*':
//		{
//			par = mult;
//			c = '-';
//			break;
//		}
//		case '/':
//		{
//			par = division;
//			c = '*';
//			break;
//		}
//		}
//		a = (*par)(a, b);// Виклик за адресою
//		cout << a << "\n";
//	}
//	return 0;
//}


////1.2
//void act1(char* name)
//{
//	cout << "Create file..." << name;
//}
//void act2(char* name)
//{
//	cout << "Delete file... " << name;
//}
//void act3(char* name)
//{
//	cout << "Read file... " << name;
//}
//void act4(char* name)
//{
//	cout << "Mode file... " << name;
//}
//void act5(char* name)
//{
//	cout << "Close file... " << name;
//}
//
//int main()
//{
//	// Створення й ініціалізація масиву покажчиків
//	void (*MenuAct[5])(char*) = { act1, act2, act3,
//	act4, act5 };
//	int number; // Номер обраного пункту меню.
//	char FileName[30]; // Рядок для імені файлу.
//	// Реалізація меню
//	cout << "\n 1 - Create";
//	cout << "\n 2 - Delete";
//	cout << "\n 3 - Read";
//	cout << "\n 4 - Mode";
//	cout << "\n 5 - Close";
//	while (1)// Нескінченний цикл
//	{
//		while (1)
//		{
//			/* Цикл продовжується до вводу
//			правильного номера.*/
//			cout << "\n\nSelect action: ";
//			cin >> number;
//			if ((number >= 1) && (number <= 5))
//			{
//				break;
//			}
//			else
//			{
//				cout << "\nWrong number!";
//			}
//		}
//		if (number != 5)
//		{
//			cout << "Enter file name: ";
//			cin >> FileName; // Читати ім’я файлу.
//				// Виклик функції за покажчиком на неї
//				(*MenuAct[number - 1])(FileName);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}






//2

int main() {
    int size = 10;
    int* arr = new int[size] {-5, -2, 2, 3, 4, 5, -10, 12, 9, 11};
    printArray(arr, size);
    cout << "---------------------------" << endl;
    my_sort_if<int>(arr, size, [](int a, int b) {return a > b; });
    printArray(arr, size);
    my_sort_if<int>(arr, size, [](int a, int b) {return a < b; });
    printArray(arr, size);
    my_sort_if<int>(arr, size, [](int a, int b) {return a % 2 == 0; });
    printArray(arr, size);

}













//3

//int main() {
//    int size = 10;
//    int* arr = new int[size] {-5, -2, 2, 3, 4, 5, -10, 12, 9, 11};
//    printArray(arr, size);
//
//    cout << "Find last pos: " << my_findLast_if<int>(arr, size, [](int a) {return a > 0; }) << endl;
//    cout << "Find last neg: " << my_findLast_if<int>(arr, size, [](int a) {return a < 0; }) << endl;
//    cout << "Find last odd: " << my_findLast_if<int>(arr, size, [](int a) {return a % 2 != 0; }) << endl;
//    cout << "Find last even: " << my_findLast_if<int>(arr, size, [](int a) {return a % 2 == 0; }) << endl;
//
//
//}