#include <iostream>
#include <cstdio>
#include <random>
using namespace std;

//1
//int main(){
//	FILE* file1;
//	FILE* file2;
//	FILE* file3;
//	fopen_s(&file1, "1_1.task", "wb");
//	fopen_s(&file2, "1_2.task", "wb");
//	fopen_s(&file3, "1_3.task", "wb");
//	srand(time(NULL));
//
//	if (file1 == nullptr || file2 == nullptr || file3 == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int num1 = 0;
//		int a, b;
//		float num2 = 0;
//		char* word = new char[50];
//		int len = 0;
//		cout << "From a to b ";
//		cin >> a >> b;
//		for (int i = 0; i < 15; i++) {
//			num1 = rand() % (b-a+1)+a;
//			fwrite(&num1, sizeof(int), 1, file1);
//		}
//		cout << "Float ";
//		cin >> num2;
//		for (int i = 0; i < 5; i++) {
//			fwrite(&num2, sizeof(float), 1, file2);
//		}
//		cin.ignore();	
//		cin.getline(word, 50);
//		len = strlen(word) + 1;
//		fwrite(&len, sizeof(int), 1, file3);
//		for (int i = 0; i < 5; i++) {
//			fwrite(word, sizeof(char), len, file3);
//		}
//		cout << "Success" << endl << endl;
//		fclose(file1);
//		fclose(file2);
//		fclose(file3);
//		delete[] word;
//	}
//
//}

//2
int main() {
	FILE* file;
	fopen_s(&file, "1_1.task", "rb");

	if (file == nullptr) {
		cout << "Error" << endl;
	}
	else {
		int d = 0;
		cout << "d: ";
		cin >> d;
		while (!feof(file)) {
			int num = 0;
			if (fread(&num, sizeof(int), 1, file)) {
				if (num > d) {
					cout << num << " ";
				}
			}
			
		}
		cout << endl;
		cout << "Success" << endl << endl;
		fclose(file);
	}
}

//3
//int main() {
//	FILE* file;
//	fopen_s(&file, "1_1.task", "rb");
//
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int* arr1 = nullptr;
//		int* arr2 = nullptr;
//		int size1 = 0;
//		int size2 = 0;
//		int index1 = 0;
//		int index2 = 0;
//		while (!feof(file)) {
//			int num = 0;
//			if (fread(&num, sizeof(int), 1, file)) {
//				if (num >= 0) {
//					size1++;
//				}
//				if (num % 2 == 0) {
//					size2++;
//				}
//			}
//
//		}
//		arr1 = new int[size1];
//		arr2 = new int[size2];
//		fseek(file, 0, SEEK_SET);
//		while (!feof(file)) {
//			int num = 0;
//			if (fread(&num, sizeof(int), 1, file)) {
//				if (num >= 0) {
//					arr1[index1] = num;
//					index1++;
//				}
//				if (num % 2 == 0) {
//					arr2[index2] = num;
//					index2++;
//				}
//			}
//		}
//
//		for (int i = 0; i < size1; i++) {
//			cout << arr1[i] << " ";
//		}
//		cout << endl;
//		for (int i = 0; i < size2; i++) {
//			cout << arr2[i] << " ";
//		}
//		cout << endl;
//		cout << "Success" << endl << endl;
//		fclose(file);
//		delete[] arr1;
//		delete[] arr2;
//	}
//}

//4
//int main() {
//	FILE* file;
//	fopen_s(&file, "9.bin", "rb");
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int i = 0;
//		int j = 0;
//		cout << "Row: ";
//		cin >> i;
//		cout << "Col: ";
//		cin >> j;
//		int num = 0;
//		int bytesI = (i - 1) * 12;
//		int bytesJ = (j - 1) * 4;
//		fseek(file, 4 + bytesI + bytesJ, SEEK_SET);
//		fread(&num, sizeof(int), 1, file);
//		cout << num << endl;
//		cout << "Success" << endl << endl;
//		fclose(file);
//	}
//}