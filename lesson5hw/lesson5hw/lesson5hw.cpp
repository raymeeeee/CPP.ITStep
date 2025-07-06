#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//1

//int main()
//{
//    // задаЇмо розм≥рн≥сть масиву
//    const int m = 3;
//    const int n = 2;
//    int A[m][n]; // оголошуЇмо двовим≥рний масив
//    // заповненн€ масиву випадковими числами
//    // ≥ вив≥д на екран
//    // перебираЇмо окрем≥ р€дки
//    for (int i = 0; i < m; i++)
//    {
//        // перебираЇмо окрем≥ елементи кожного р€дка
//        for (int j = 0; j < n; j++)
//        {
//            // ≥н≥ц≥ал≥зац≥€ елемент≥в значенн€ми
//            // у д≥апазон≥ в≥д 0 до 100
//            A[i][j] = rand() % 100;
//            // вив≥д значень на екран
//            cout << A[i][j] << " ";
//        }
//            // перех≥д на ≥нший р€док матриц≥
//            cout << "\n\n";
//    }
//    cout << "\n\n";
//    // пошук у р€дках максимального елемента
//    // перебираЇмо окрем≥ р€дки
//    for (int i = 0; i < m; i++)
//    {
//        // припускаЇмо, що максимальним Ї
//        // нульовий елемент р€дка
//        int max = A[i][0];
//        // пошук максимального елемента
//        // в поточному р€дку
//        // зм≥на ≥ндексу стовпц€ дл€ поточного р€дка
//        for (int j = 0; j < n; j++)
//        {
//            if (A[i][j] > max)
//                max = A[i][j];
//        }
//        cout << "Max element " << i << " row=" <<
//            max << endl;
//    }
//    return 0;
//}

//2

//int main() {
//	const int x = 6;
//	const int y = 5;
//	int a[x][y]{
//	{1,2,3,4,5},
//	{1,2,3,4,5},
//	{1,2,3,4,5},
//	{1,2,3,4,5},
//	{1,2,3,4,5},
//	{1,2,3,4,5} };
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			if (j == 0) {
//				sum1 += a[i][j];
//			}
//			else if (j == y-2) {
//				sum2 += a[i][j];
//			}
//		}
//	}
//	if (sum1 > sum2) { cout << sum1<< " " << sum2 << " 1col > " << endl; }
//	else if (sum1 < sum2) { cout << sum1 << " " << sum2 << " 4col > 1col" << endl; }
//	else { cout << "equal" << endl; }
//}

//3

//int main() {
//	const int x = 6;
//	const int y = 5;
//	int a[x][y]{
//	{1,3,2,4,2},
//	{7,2,1,4,9},
//	{3,2,9,6,5},
//	{9,1,2,3,5},
//	{7,8,3,6,5},
//	{2,3,3,8,1} };
//	
//	for (int i = 0; i < x; i++) {
//
//		for (int j = 0; j < y; j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int temp = 0;
//	int posx = 0;
//	int posy = 0;
//	int min = 0;
//	for (int i = 0; i < x; i++) {
//		min = a[i][0];
//		cout << endl;
//		temp = 0;
//		posx = 0;
//		posy = 0;
//		for (int j = 0; j < y; j++) {
//			if (min > a[i][j]) {
//				min = a[i][j];
//				posx = i;
//				posy = j;
//			}
//		}
//		temp = a[i][y - 1];
//		a[i][y - 1] = min;
//		a[posx][posy] = temp;
//
//	}
//	cout << endl;
//
//	for (int i = 0; i < x; i++) {
//
//		for (int j = 0; j < y; j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//4

int main() {
	const int size = 18;
	int c1[size]{ 0 };
	int c2[size]{ 0 };
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		c1[i] = rand() % 7 + 6;
		cout << c1[i] << " ";
		cout << "\t";
		c2[i] = rand() % 7 + 6;
		cout << c2[i] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (c1[j] < c1[j + 1])
			{
				int b = c1[j];
				c1[j] = c1[j + 1];
				c1[j + 1] = b;
			}
			if (c2[j] < c2[j + 1])
			{
				int b = c2[j];
				c2[j] = c2[j + 1];
				c2[j + 1] = b;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{

		cout << c1[i] << " ";
		cout << "\t";
		
		cout << c2[i] << " ";
		cout << endl;
	}
	if (c1[2] > c2[2]) { cout << c1[2] << " " << c2[2] << " c1 > c2 " << endl; }
	else if (c1[2] < c2[2]) { cout << c1[2] << " " << c2[2] << " c2 > c1 " << endl; }
	else { cout << "equal" << endl; }
}

