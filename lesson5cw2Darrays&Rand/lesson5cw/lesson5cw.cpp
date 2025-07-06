#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//int main()
//{
//    const int ROW = 5, COLUMN = 4;
//    int M[ROW][COLUMN] = {
//        {1,2,3,4 },
//        {5,6,7,8 },
//        {9,10,11,12},
//        {13,14,15,16},
//        {17,18,19,20}
//    };
//
//    cout << "Left top: " << M[0][0] << endl;
//    cout << "Right top: " << M[0][COLUMN-1] << endl;
//    cout << "Left bottom: " << M[ROW-1][0] << endl;
//    cout << "Right bottom: " << M[ROW-1][COLUMN-1] << endl;
//
//
//}

//int main() {
//	const int ROW = 5, COLUMN = 4;
//	int M[ROW][COLUMN] = {
//	    {1,2,3,4 },
//	    {5,6,7,8 },
//	    {9,10,11,12},
//	    {13,14,15,16},
//	    {17,18,19,20}
//	};
//
//	for (int i = 0; i < COLUMN; i++) {
//		cout << M[ROW - 1][i] << " ";
//	}
//	cout << endl;
//	int s = 0;
//	cin >> s;
//
//	for (int i = 0; i < COLUMN; i++) {
//		cout << M[s - 1][i] << " ";
//	}
//}

//int main() {
//	const int ROW = 5, COLUMN = 4;
//	int M[ROW][COLUMN] = {
//		{1,2,3,4 },
//		{5,6,7,8 },
//		{9,10,11,12},
//		{13,14,15,16},
//		{17,18,19,20}
//	};
//	int min = M[0][0];
//	int x = 0;
//	int y = 0;
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COLUMN; j++) {
//			if (M[i][j] < min){
//				min = M[i][j];
//				x = j;
//				y = i;
//			}
//
//		}
//
//	}
//	cout << min << " " << x << " " << y;
//
//	cout << endl;
//
//	x = 0;
//	y = 0;
//
//	int max = M[0][0];
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COLUMN; j++) {
//			if (M[i][j] > max) {
//				max = M[i][j];
//				x = j;
//				y = i;
//			}
//
//		}
//
//	}
//	cout << max << " " << x << " " << y;
//}

//int main() {
//	const int ROW = 5, COLUMN = 4;
//	int M[ROW][COLUMN] = {
//		{1,2,3,4 },
//		{5,6,7,8 },
//		{9,10,11,12},
//		{13,14,15,16},
//		{17,18,19,20}
//	};
//	int sum = 0;
//	for (int i = 0; i < ROW; i++) {
//		sum += M[i][1];
//	}
//	cout << sum;
//
//	cout << endl;
//
//	sum = 0;
//	int k = 0;
//	cin >> k;
//	cout << endl;
//	for (int i = 0; i < COLUMN; i++) {
//		sum += M[k-1][i];
//	}
//	cout << sum;
//
//	cout << endl;
//}

//int main() {
//
//	srand(time(0));
//
//	const int ROW = 18, COL = 36;
//	bool train[ROW][COL];
//
//	for (int i = 0; i < ROW; i++) {
//
//		cout << "vagon: " << i + 1 << "\n \t";
//		for (int j = 0; j < COL; j++) {
//			train[i][j] = rand() % 2;
//			cout << train[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "---------------------------------" << endl;
//	int choice;
//	cin >> choice;
//	int empty = 0;
//	for (int i = 0; i < COL; i++) {
//		cout << train[choice-1][i] << " ";
//		if (train[choice-1][i] == 0){
//			empty++;
//		}
//	}
//	cout << endl;
//	cout << empty;
//
//}

///////////////////////////////////////////////

//int main() {
//	srand(time(0));
//	const int size = 15;
//	int a[size]{0};
//
//	for (int i = 0; i < size; i++) {
//		a[i] = rand() % 61 + 150;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int b = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = b;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	float avg = (a[6] + a[7] + a[8])/3.0;
//	cout << "Avg: " << avg << endl;
//}

//int main() {
//
//	const int size = 12;
//	int  m[size]{ 0 };
//
//	srand(time(0));
//	
//	for (int i = 0; i < size; i++) {
//		m[i] = rand() % 951 + 50;
//		cout << m[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		int min_idx = i;
//		int min = m[min_idx];
//		for (int j = i + 1; j < size; j++)
//		{
//			if (m[j] < min)
//			{
//				min = m[j];
//				min_idx = j;
//			}
//		}
//		if (min_idx != i)
//		{
//			int tmp = m[min_idx];
//			m[min_idx] = m[i];
//			m[i] = tmp;
//		}
//	}
//
//	//вывод массива после сортировки
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//
//	cout << m[4] << endl;
//}

//int main() {
//	const int size = 20;
//	int m[size]{ 0 };
//	srand(time(0));
//		
//	for (int i = 0; i < size; i++) {
//		m[i] = rand() % 501;
//		cout << m[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 1; i < size; i++)
//	{
//		int temp = m[i];// запомним i-ый элемент
//		int j = i - 1;//будем идти начиная с i-1 элемента 
//		while (j >= 0 && temp < m[j])
//			// пока не достигли начала массива 
//			// или не нашли элемент больше i-1-го
//			// который храниться в переменной temp
//		{
//			m[j + 1] = m[j];
//			//проталкиваем элемент вверх
//			j--;
//		}
//		m[j + 1] = temp;
//		// возвращаем i-1 элемент 
//	}
//
//	//вывод массива после сортировки
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//
//	cout << m[4] << endl;
//}

//int main() {
//	const int size = 25;
//	int m[size]{ 0 };
//	srand(time(0));
//			
//	for (int i = 0; i < size; i++) {
//		m[i] = rand() % 61 + 150;
//		cout << m[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 1; i < size; i++)
//	{
//		int temp = m[i];// запомним i-ый элемент
//		int j = i - 1;//будем идти начиная с i-1 элемента 
//		while (j >= 0 && temp > m[j])
//			// пока не достигли начала массива 
//			// или не нашли элемент больше i-1-го
//			// который храниться в переменной temp
//		{
//			m[j + 1] = m[j];
//			//проталкиваем элемент вверх
//			j--;
//		}
//		m[j + 1] = temp;
//		// возвращаем i-1 элемент 
//	}
//
//	//вывод массива после сортировки
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//	cout << m[9] << endl;
//}

//int main() {
//	const int size = 15;
//	int m[size]{ 0 };
//	srand(time(0));
//
//	for (int i = 0; i < size; i++) {
//		m[i] = rand() % 151 + 50;
//		cout << m[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 1; i < size; i++)
//	{
//		int temp = m[i];// запомним i-ый элемент
//		int j = i - 1;//будем идти начиная с i-1 элемента 
//		while (j >= 0 && temp > m[j])
//			// пока не достигли начала массива 
//			// или не нашли элемент больше i-1-го
//			// который храниться в переменной temp
//		{
//			m[j + 1] = m[j];
//			//проталкиваем элемент вверх
//			j--;
//		}
//		m[j + 1] = temp;
//		// возвращаем i-1 элемент 
//	}
//
//	//вывод массива после сортировки
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//	cout << m[5] << endl;
//}

//int main() {
//	const int size = 7;
//	int m[size]{ 0 };
//	srand(time(0));
//
//	for (int i = 0; i < size; i++) {
//		m[i] = rand() % 50001 + 100000;
//		cout << m[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 1; i < size; i++)
//	{
//		int temp = m[i];// запомним i-ый элемент
//		int j = i - 1;//будем идти начиная с i-1 элемента 
//		while (j >= 0 && temp > m[j])
//			// пока не достигли начала массива 
//			// или не нашли элемент больше i-1-го
//			// который храниться в переменной temp
//		{
//			m[j + 1] = m[j];
//			//проталкиваем элемент вверх
//			j--;
//		}
//		m[j + 1] = temp;
//		// возвращаем i-1 элемент 
//	}
//
//	//вывод массива после сортировки
//	for (int i = 0; i < size; i++)
//	{
//		cout << m[i] << " ";
//	}
//	cout << endl;
//	cout << m[3] << endl;
//}

#include <string>
	int main(){
	const int size = 7;
	int m[size] = { 0 };
	string name[7] = { "bmw", "audi","hundai","skoda","toyota","honda","mercedes" };
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		m[i] = rand() % 150000 + 100000;
		cout << name[i] << ": " << m[i] << "\n";
	}
	cout << endl;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (m[j] < m[j + 1])
			{
				swap(m[j], m[j + 1]);
				swap(name[j], name[j + 1]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << ": " << m[i] << "\n";
	}
	cout << endl;
	cout << m[size / 2] << endl;
}