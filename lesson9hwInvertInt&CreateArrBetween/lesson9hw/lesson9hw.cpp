#include "ArrayTemplate.h"
//1.1
//// Обмін з використанням покажчиків
//void interchange_ptr(int* u, int* v) {
//    int temp = *u;
//    *u = *v;
//    *v = temp;
//}
//// Обмін з використанням посилань
//void interchange_ref(int& u, int& v) {
//    int temp = u;
//        u = v;
//    v = temp;
//}
//int main() {
//    int x = 5, y = 10;
//    cout << "Change with pointers:\n";
//    cout << "x = " << x << " y = " << y << "\n";
//    // використаємо покажчики
//    interchange_ptr(&x, &y);
//    cout << "x = " << x << " y = " << y << "\n";
//    cout << "----------------------------- " << "\n";
//    cout << "Change with references:\n";
//    cout << "x = " << x << " y = " << y << "\n";
//    // використаємо посилання
//    interchange_ref(x, y);
//    cout << "x = " << x << " y = " << y << "\n";
//    return 0;
//}



//1.2
//int main() {
//    srand(time(NULL));
//    int size;
//    int* dar;
//    // запит розміру масиву з клавіатури
//    cout << "Enter size:\n";
//    cin >> size;
//    // виділення пам'яті під масив з кількістю
//    // елементів size
//    dar = new int[size];
//    // заповнення масиву та вивід на екран
//    for (int i = 0; i < size; i++) {
//        dar[i] = rand() % 100;
//        cout << dar[i] << "\t";
//    }
//    cout << "\n\n";
//    delete[] dar;
//    return 0;
//}





//2

//void incTime(int& H, int& M, int& S, int T) {
//	int hours, minutes, seconds1;
//	int seconds = 3600 * H + 60 * M + S + T;
//
//	H = seconds / 3600;
//	M = (seconds % 3600) / 60;
//	S = seconds % 60;
//}
//
//int main() {
//	int h=3, m=15, s=42;
//	cout << h << " " << m << " " << s;
//	cout << endl;
//	incTime(h, m, s, 3568);
//	cout << h << " " << m << " " << s;
//}






//3
void InvertDigits(int& K) {
	int temp = 0;
	while (K % 10 >= 1) {
		temp = temp*10 + K % 10;
		K = K / 10;
	}
	K = temp;

}

int main() {
	int k = 123456789;
	InvertDigits(k);
	cout << k << endl;
}





//4

//
//
//void createArrayBetween(int* arr, int size, int from, int to, int*& sub_arr, int& sub_size) {
//	int tmp = 0;
//	for (int i = from; i < to + 1; i++) {
//		sub_arr[tmp] = arr[i];
//		tmp++;
//	}
//}
//
//int main() {
//	int from, to;
//	cin >> from >> to;
//	int sub_size = to - from + 1;
//	const int size = 10;
//	int arr[size]{ 45,-34,9,12,0,-75,12,78,33,55 };
//	int* sub_arr = nullptr;
//	sub_arr = new int[sub_size] {0};
//	printArray(arr, size);
//	createArrayBetween(arr, size, from, to, sub_arr, sub_size);
//	printArray(sub_arr, sub_size);
//
//}