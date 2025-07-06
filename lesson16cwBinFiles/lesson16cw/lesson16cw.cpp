#include <iostream>
#include <cstdio>

using namespace std;
//int main(){
//    FILE* file = nullptr;
//
//    int a = 5; float b = 3.14; char e = 'A';
//    int size = 5;
//    int* arr = new int[size] {10, 30, 40, 2, 4};
//
//    fopen_s(&file, "test.test", "wb");
//    if (file == nullptr) {
//        cout << "Error" << endl;
//    }
//    else {
//        fwrite(&a, sizeof(int), 1, file);
//        fwrite(&b, sizeof(float), 1, file);
//        fwrite(&e, sizeof(char), 1, file);
//
//        fwrite(&size, sizeof(int), 1, file);
//        fwrite(arr, sizeof(int), size, file);
//        fclose(file);
//    }
//	  cout << "Success" << endl;  
//    delete[] arr;
//}

//int main() {
//	FILE* file = nullptr;
//	
//	int a = 0; float b = 0; char e = 0;
//	int size = 0;
//	int* arr = nullptr;
//	
//	fopen_s(&file, "test.test", "rb");
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		fread(&a, sizeof(int), 1, file);
//		fread(&b, sizeof(float), 1, file);
//		fread(&e, sizeof(char), 1, file);
//
//		fread(&size, sizeof(int), 1, file);
//		arr = new int[size];
//		fread(arr, sizeof(int), size, file);
//		fclose(file);
//		cout << "Success" << endl << endl;
//	}
//	
//	cout << a << endl;
//	cout << b << endl;
//	cout << e << endl;
//	for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
//
//	delete[] arr;
//}





//int main() {
//	FILE* file;
//	fopen_s(&file, "task1.file", "wb");
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		for (int i = 0; i <= 30; i++) {
//			fwrite(&i, sizeof(int), 1, file);
//		}
//		fclose(file);
//	}
//	cout << "Success" << endl << endl;
//	fopen_s(&file, "task1.file", "rb");
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int num = 0;
//		for (int i = 0; i <= 30; i++) {
//			fread(&num, sizeof(int), 1, file);
//			cout << num << " ";
//		}
//		cout << endl;
//		fclose(file);
//	}
//	cout << "Success" << endl << endl;
//}

//int main() {
//	FILE* file;
//	fopen_s(&file, "task2.file", "wb");
//	
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int num1 = 0;
//		float num2 = 0;
//		char* word = new char[50];
//		int len = 0;
//		for (int i = 0; i < 7; i++) {
//			cin >> num1;
//			fwrite(&num1, sizeof(int), 1, file);
//		}
//		for (int i = 0; i < 4; i++) {
//			cin >> num2;
//			fwrite(&num2, sizeof(float), 1, file);
//		}
//		cin.ignore();
//		for (int i = 0; i < 5; i++) {
//			cin.getline(word, 50);
//			len = strlen(word)+1;
//			fwrite(&len, sizeof(int), 1, file);
//			fwrite(word, sizeof(char), len, file);
//		}
//		fclose(file);
//	}
//	cout << "Success" << endl << endl;
//}

//#include <random>
//int main() {
//	FILE* file;
//	srand(time(NULL));
//	fopen_s(&file, "task3.file", "wb");
//	int size = 20;
//	int* arr = new int[size];
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 100 + 1;
//	}
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		fwrite(&size, sizeof(int), 1, file);
//		fwrite(arr, sizeof(int), size, file);
//		fclose(file);
//	}
//	cout << "Success" << endl << endl;
//	delete[] arr;
//}

//int main() {
//	FILE* file;
//	fopen_s(&file, "4.bin", "rb");
//		
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int num1 = 0, num2 = 0, num3 = 0;
//		int n = 0;
//		cin >> n;
//		fread(&num1, sizeof(int), 1, file);
//		fseek(file, 4, SEEK_CUR);
//		fread(&num2, sizeof(int), 1, file);
//		int bytes = (n - 1) * 4;
//		fseek(file, bytes, SEEK_SET);
//		fread(&num3, sizeof(int), 1, file);
//
//		cout << num1 << " " << num2 << " " << num3;
//		cout << "Success" << endl << endl;
//		fclose(file);
//		
//	}
//}

//int main() {
//	FILE* file;
//	fopen_s(&file, "5.bin", "rb");
//			
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		int a = 0, size = 0;
//		fread(&size, sizeof(int), 1, file);
//		float* arr = new float[size];
//		fread(arr, sizeof(float), size, file);
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//		cout << "Success" << endl << endl;
//		fclose(file);
//	}
//}

//int main() {
//	FILE* file;
//	fopen_s(&file, "6.bin", "rb");
//
//	if (file == nullptr) {
//		cout << "Error" << endl;
//	}
//	else {
//		while (!feof(file)) {
//			int size = 0;
//			fread(&size, sizeof(int), 1, file);
//			char* text = new char[size];
//			fread(text, sizeof(char), size, file);
//			text[size] = '\0';
//			if (text[0] == 'c') {
//				cout << text << endl;
//			}
//			
//		}
//		cout << endl;
//		cout << "Success" << endl << endl;
//		fclose(file);
//	}
//}

int main() {
	FILE* file;
	fopen_s(&file, "9.bin", "rb");

	if (file == nullptr) {
		cout << "Error" << endl;
	}
	else {
		int size = 0;
		fread(&size, sizeof(int), 1, file);
		int* arr = new int[size];
		int n = 0;
		cin >> n;
		int bytes = (n-1)*12;
		fseek(file, 4+bytes, SEEK_SET);
		fread(arr, sizeof(int), size, file);
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
}