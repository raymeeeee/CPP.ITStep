#include <iostream>
#include <cstdio> //stdio.h
using namespace std;

//int main(){ //!!!
//    char product[50] = "";
//
//    cout << "Input name of a product you would like to buy: " << endl;
//    cin.getline(product, 50);
//
//    float weight = 0;
//
//    cout << "Input weight of a product: ";
//    cin >> weight;
//
//    FILE* fileShop = nullptr;
//
//    fopen_s(&fileShop, "shop.txt", "w");
//    if (fileShop == nullptr) {
//        cout << "Cannot open the file" << endl;
//    }
//    else {
//        fprintf(fileShop, "--------------------------------------\n");
//        fprintf(fileShop, "--------------------------------------\n");
//        fprintf(fileShop, "| %s: %0.2f kg x 20.50uah |\n", product, weight);
//        fprintf(fileShop, "--------------------------------------\n");
//        fprintf(fileShop, "| Sum = %0.2lf |\n", weight*20.5);
//        fprintf(fileShop, "--------------------------------------\n");
//
//        fclose(fileShop);
//        cout << "File is written successfully";
//    }
//}

//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task1.txt", "w");
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		for (int i = 10; i < 100; i += 5) {
//			
//			fprintf(file, "%d ", i);
//		}
//		
//		fclose(file);
//		cout << "\nFile is written successfully\n";
//	}
//}

//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task2.txt", "w");
//	char word[50] = "";
//	float numFloat = 0;
//	int numInt = 0;
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		for (int i = 0; i < 7; i++) {
//			cout << "int: ";
//			cin >> numInt;
//			fprintf(file, "int: %d \n", numInt);
//		}
//		fprintf(file, "\n");
//		for (int i = 0; i < 4; i++) {
//			cout << "float: ";
//			cin >> numFloat;
//			fprintf(file, "float: %f \n", numFloat);
//		}
//		fprintf(file, "\n");
//		for (int i = 0; i < 5; i++) {
//			cout << "word: ";
//			cin >> word;
//			fprintf(file, "word: %s \n", word);
//		}
//		fprintf(file, "\n");
//		fclose(file);
//		cout << "\nFile is written successfully\n";
//	}
//}



//int main() { //!!!
//	FILE* file = nullptr;
//	fopen_s(&file, "task5.txt", "r");
//
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		//for (int i = 0; i < 10; i++) { //если знаем количество информации
//		//	int tmp = 0;
//		//	fscanf_s(file, "%d ", &tmp);
//		//	cout << tmp << " ";
//		//}
//
//		while (!feof(file)) {
//			int tmp = 0;
//			fscanf_s(file, "%d ", &tmp);
//			cout << tmp << " ";
//		}
//	}
//	fclose(file);
//}



//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task5.txt", "r");
//	
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		int n = 0;
//		cout << "Enter index of a number: ";
//		cin >> n;
//		for (int i = 0; i < 10; i++) { //если знаем количество информации
//			int tmp = 0;
//			fscanf_s(file, "%d ", &tmp);
//			if (i == 0) {
//				cout << tmp << " ";
//			}
//			else if (i == 2) {
//				cout << tmp << " ";
//			}
//			else if (i == n) {
//				cout << tmp << " ";
//			}
//		}
//	
//	}
//	fclose(file);
//}

//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task7.txt", "r");
//	
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		char n = '\0';
//		cout << "Enter char of a word: ";
//		cin >> n;
//		while (!feof(file)) {
//			char str[50] = "";
//			fscanf_s(file, "%s ", str, 50);
//			if (str[0] == n) {
//				cout << str << endl;
//			}
//			
//		}
//	
//	}
//	fclose(file);
//}

//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task7.txt", "r");
//	
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		int i = 0;
//		int len = 0, max = 0;
//		char longest[50] = "";
//		int countW = 0, dIndex = 0;
//		while (!feof(file)) {
//			char str[50] = "";
//			fscanf_s(file, "%s ", str, 50);
//			i++;
//			if (str[0] == 'w') {
//				/*cout << str << endl;*/
//				countW++;
//			}
//			if (str[0] == 'd') {
//				dIndex = i;
//			}
//			if (i % 2 == 0) {
//				cout << str << " ";
//			}
//			if (strlen(str) > len) {
//				len = strlen(str);
//				strcpy_s(longest, 50, str);
//			}
//			
//		}
//		cout << endl;
//		cout << countW << endl;
//		cout << dIndex << endl;
//		cout << longest << endl;
//	
//	}
//	fclose(file);
//}

//int main() {
//	FILE* file1 = nullptr;
//	FILE* file2 = nullptr;
//	fopen_s(&file1, "task5.txt", "r");
//	fopen_s(&file2, "task9.txt", "w");
//		
//	if (file1 == nullptr || file2 == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		while (!feof(file1)) {
//			int tmp = 0;
//			fscanf_s(file1, "%d", &tmp);
//			fprintf_s(file2, "%d ", tmp);
//		}
//	}
//	fclose(file1);
//	fclose(file2);
//}

//int main() {
//	FILE* file1 = nullptr;
//	FILE* file2 = nullptr;
//	FILE* file3 = nullptr;
//	fopen_s(&file1, "task5.txt", "r");
//	fopen_s(&file2, "task11-even.txt", "w");
//	fopen_s(&file3, "task11-odd.txt", "w");
//			
//	if (file1 == nullptr || file2 == nullptr || file3 == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		while (!feof(file1)) {
//			int tmp = 0;
//			fscanf_s(file1, "%d", &tmp);
//			if (tmp % 2 == 0) {
//				fprintf_s(file2, "%d ", tmp);
//			}
//			else {
//				fprintf_s(file3, "%d ", tmp);
//			}
//		}
//	}
//	fclose(file1);
//	fclose(file2);
//	fclose(file3);
//
//}

