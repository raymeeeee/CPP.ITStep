#include "DoubleArrayTemplate.h"


//int main()
//{
//    srand(time(0));
//    int row = 0; int col = 0;
//    int** m = nullptr;
//
//    cout << "Input row: " << endl; cin >> row;
//    cout << "Input col: " << endl; cin >> col;
//
//    createMemory(m, row, col);
//    randArray(m, row, col, -50, 50);
//    printArray(m, row, col);
//
//    deleteArray(m, row);
//    
//    return 0;
//}

//int main() {
//	int m, n;
//	int k;
//	srand(time(0));
//	cin >> m >> n >> k;
//	int** arr = nullptr;
//	createMemory(arr, m, n);
//	randArray(arr, m, n);
//	printArray(arr, m, n);
//
//	int sum = 0, mult = 0;
//
//	calcSum_Mult(arr, m, n, k, sum, mult);
//	cout << sum << " " << mult << endl;
//
//	deleteArray(arr, m);
//}

//int main() {
//	int** arr = nullptr;
//	int row, col;
//	cin >> row >> col;
//
//	createMemory(arr, row, col);
//	randArray(arr, row, col);
//	printArray(arr, row, col);
//
//	int k;
//	cin >> k;
//	addNewRow(arr, row, col, k-1, 0);
//	printArray(arr, row, col);
//	deleteArray(arr, row);
//}

//int main() {
//	int** arr = nullptr;
//	int row, col;
//	cin >> row >> col;
//	
//	createMemory(arr, row, col);
//	randArray(arr, row, col);
//	printArray(arr, row, col);
//	
//	int k;
//	cin >> k;
//	addNewCol(arr, row, col, k-1, 0);
//	printArray(arr, row, col);
//	deleteArray(arr, row);
//}

//int main() {
//	int n;
//	cin >> n;
//	char** countries = nullptr;
//	createMemory(countries, n, 100);
//	cin.ignore();
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Input country, city: " << endl;
//		cin.getline(countries[i], 100);
//	}
//
//	cout << "-----------------------" << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(countries[i], "Italy") != nullptr) {
//			cout << countries[i]+6 << endl;
//		}
//
//	}
//}

int main() {
	int n;
	cin >> n;
	char** countries = nullptr;
	createMemory(countries, n, 100);
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "Input part of the world, country: " << endl;
		cin.getline(countries[i], 100);
	}

	cout << "-----------------------" << endl;
	int africa = 0;
	int asia = 0;
	for (int i = 0; i < n; i++)
	{
		if (strstr(countries[i], "Africa") != nullptr) {
			cout << countries[i] + 7 << endl;
			for (int j = 0; j < strlen(countries[i]); j++) {
				if (countries[i][j]==' ') {
					africa++;
				}
			}
			
		}
		else if (strstr(countries[i], "Asia") != nullptr) {
			cout << countries[i] + 5 << endl;
			for (int j = 0; j < strlen(countries[i]); j++) {
				if (countries[i][j] == ' ') {
					asia++;	
				}
			}
		}

	}
	cout << "Africa: " << africa << endl;
	cout << "Asia: " << asia << endl;	
}