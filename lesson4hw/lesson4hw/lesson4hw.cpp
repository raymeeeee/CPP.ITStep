#include <iostream>
using namespace std;

//1.1

//int main()
//{
//    const int size = 3;
//    int ar[size]; // створення масиву з трьох елементів
//    // цикл, що перебирає елементи масиву
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Enter element\n";
//        /* на кожній ітерації циклу користувачеві
//        підставляється елемент з індексом i для
//        заповнення. Секрет у тому, що i — щоразу
//        нове значення */
//            cin >> ar[i];
//    }
//    cout << "\n\n";
//    // цикл, що перебирає елементи масиву
//    for (int i = 0; i < size; i++)
//    {
//        // вивід елемента з індексом i на екран
//        cout << ar[i] << "\n";
//    }
//    return 0;
//}

//1.2

//int main() {
//    // визначення кількості елементів масиву
//    const int size = 5;
//    // створення та ініціалізація масиву
//    int ar[size] = { 23,11,9,18,25 };
//    int max = ar[0]; // нехай 0 елемент буде максимальним
//    int min = ar[0]; // нехай 0 елемент буде мінімальним
//    // цикл перебирає елементи
//    // масиву, починаючи з одиниці
//        for (int i = 1; i < size; i++)
//        {
//            // якщо поточний елемент менший за мінімум
//            if (min > ar[i])
//                // перезаписати значення мінімуму
//                min = ar[i];
//            // якщо поточний елемент більший за максимум
//            if (max < ar[i])
//                // перезаписати значення максимуму
//                max = ar[i];
//        }
//    // вивід результату на екран
//    cout << "Max = " << max << "\n\n";
//    cout << "Min = " << min << "\n\n";
//    return 0;
//}

//2.1

//int main() {
//	const int size = 10;
//	int m[size] = { 9, 6, 7, 10, 14, 16, 5, 11, 4, 8 };
//
//	int k = 5;
//	for (int i = k; i < size - 1; i++)
//	{
//		m[i] = m[i + 1];
//	}
//	//останньому елементу присвоюємо 0
//	m[size - 1] = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//}

//2.2

//int main() {
//	const int size = 11;
//	int m[size] = { 3, -12, 5, 14, 27, -6, 1, -34, 10, -15, 0 };
//
//	int b = 100;
//	int k = 4;
//	for (int i = size - 1; i > k; i--) {
//		//зсув елементів на одну позицію назад
//		m[i + 1] = m[i];
//	}
//	m[k + 1] = b; //вставка елемента на місце після k-го
//
//	for (int i = 0; i < size; i++) {
//		cout << m[i] << " ";
//	}
//	cout << endl;
//}

//3

//int main() {
//	int l[40]{ 0 };
//	int choice;
//	int sum = 0;
//	int porchV = 0;
//	cout << "Enter number of apartment: ";
//	cin >> choice;
//	for (int i = 0; i < 40; i++) {
//		l[i] = rand() % 6 + 1;
//		cout << l[i] << " | ";
//	}
//	cout << endl;
//	//a
//	if (choice % 2 == 1) {
//		cout << choice << " apartment - ";
//		cout << l[choice - 1];
//		cout << "\nneighbour`s apartment - ";
//		cout << l[choice]; //-1 +1
//	}
//	else {
//		cout << choice << " apartment - ";
//		cout << l[choice - 1];
//		cout << "\nneighbour`s apartment - ";
//		cout << l[choice-2]; //-1 -1
//	}
//	cout << endl;
//	//b
//	for (int y = 0; y < 4; y++) {
//		sum = 0;
//		for (int i = 0; i < 10; i++) {
//			sum += l[i+porchV];
//		}
//		porchV += 10;
//		cout << y+1 << " porch - " << sum << endl;
//	}
//	cout << endl;
//	//c
//	for (int i = 0; i < 40; i++) {
//		if (l[i] > 5) {
//			cout << i + 1 << " " << l[i];
//			cout << endl;
//		}
//	}
//}

//4

//int main() {
//	int age[30]{ 0 };
//	int a0 = 0;
//	for (int i = 0; i < 30; i++) {
//			age[i] = rand() % 11 + 2000;
//			cout << age[i] << " | ";
//		}
//	for (int i = 0; i < 30; i++) {
//		if (2024 - age[i] > 2024 - age[a0]){
//			 a0 = i;
//			}
//	}
//	cout << endl;
//	cout << a0+1 << " " << age[a0] << " " << 2024-age[a0];
//}

//5

//int main() {
//	int age[25]{ 0 };
//	for (int i = 0; i < 25; i++) {
//			age[i] = rand() % 4 + 13;
//			cout << age[i] << " | ";
//		}
//	int choice;
//	cout << endl;
//	cin >> choice;
//	for (int i = 0; i < 25; i++) {
//		if (age[i] == choice) {
//			choice = i;
//			break;
//		}
//		else {
//			
//		}
//	}
//
//	for (int i = choice; i < 25; i++) {
//		age[i] = age[i + 1];
//	}
//	age[24] = 0;
//	for (int i = 0; i < 25; i++) {
//		cout <<age[i] << " | ";
//	}
//	
//}

//6

int main() {
	int a[9]{ 2,4,1,7,5,6,7,8,2};
	int b[9]{ 0 };
	int choice = 0;
	//b
	for (int i = 0; i < 9; i++) {
			cout << a[i] << " | ";
		}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cin >> choice;
		b[i] = a[choice-1];
	}
	for (int i = 0; i < 9; i++) {
		cout << b[i] << " | ";
	}
	cout << endl;
	//a
	/*for (int i = 0; i < 9; i++) {
		cout << a[i] << " | ";
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cin >> choice;
		b[choice-1] = a[choice-1];
	}
	for (int i = 0; i < 9; i++) {
		cout << b[i] << " | ";
	}*/

}
