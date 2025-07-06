#include <iostream>
#include <cstdio>
using namespace std;

//1
//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "task1.txt", "w");
//	char word[50] = "";
//	float numFloat = 0;
//	int numInt = 0;
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		for (int i = 0; i < 5; i++) {
//			cout << "int: ";
//			cin >> numInt;
//			fprintf(file, "int: %d \n", numInt);
//		}
//		fprintf(file, "\n");
//		for (int i = 0; i < 5; i++) {
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

//2
//int fibonacci(int n) {
//    if (n <= 1) {
//        return n;
//    }
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//    FILE* file = nullptr;
//    fopen_s(&file, "task2.txt", "w");
//    int n;
//    cout << "n: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        fprintf(file, "%d ",fibonacci(i));
//    }
//    cout << "\nFile is written successfully\n";
//
//}

//3
//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "hw1.txt", "r");
//
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		int a;
//		cin >> a;
//
//		//for (int i = 0; i < 13; i++) {
//		//	int tmp = 0;
//		//	fscanf_s(file, "%d ", &tmp);
//		//	if (tmp > a) {
//		//		cout << tmp << " ";
//		//	}
//		//}
//		
//		while (!feof(file)) {
//			int tmp = 0;
//			
//			fscanf_s(file, "%d ", &tmp);
//
//			if (tmp > a) {
//				cout << tmp << " ";
//			}
//			
//		}
//	}
//	fclose(file);
//}

//4
//int main() {
//	FILE* file = nullptr;
//	fopen_s(&file, "hw1.txt", "r");
//	
//	if (file == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		int count = 0;
//		while (!feof(file)) {
//			int tmp = 0;
//				
//			fscanf_s(file, "%d ", &tmp);
//			if (tmp > 0) {
//				cout << tmp << " ";
//				count++;
//			}
//				
//		}
//		cout << endl;
//		int* arr = nullptr;
//		arr = new int[count];
//		fseek(file, 0, SEEK_SET);
//		int index = 0;
//		while (!feof(file)) {
//			int tmp = 0;
//
//			fscanf_s(file, "%d ", &tmp);
//			if (tmp > 0) {
//				cout << tmp << " ";
//				count++;
//				arr[index] = tmp;
//				index++;
//			}
//			
//		}
//		cout << endl;
//		for (int i = 0; i < index; i++) {
//			cout << arr[i] << " ";
//		}
//		delete[] arr;
//	}
//	fclose(file);
//}


//5
//int main() {
//	FILE* file = nullptr;
//	FILE* file2 = nullptr;
//	fopen_s(&file, "hw1.txt", "r");
//	fopen_s(&file2, "task5.txt", "w");
//	
//	if (file == nullptr || file2 == nullptr) {
//		cout << "Cannot open the file" << endl;
//	}
//	else {
//		while (!feof(file)) {
//			int tmp = 0;
//
//			fscanf_s(file, "%d ", &tmp);
//			cout << tmp << " ";
//
//		}
//		cout << endl << endl;
//		fseek(file, 0, SEEK_SET);
//		int a = 0;
//		int find = -1;
//		cin >> a;
//		cout << endl;
//		while (!feof(file)) {
//			int tmp = 0;
//			
//			fscanf_s(file, "%d ", &tmp);
//			if (tmp != a) {
//				fprintf(file2, "%d ", tmp);
//				cout << tmp << " ";
//				
//			}
//			else {
//				find++;
//			}
//				
//		}
//		cout << endl;
//		if (find == -1) {
//			cout << "Number not found" << endl;
//		}
//		cout << endl;
//		
//	}
//	fclose(file);
//	fclose(file2);
//}

//6
int main() {
	FILE* file1 = nullptr;
	FILE* file2 = nullptr;
	fopen_s(&file1, "hw1.txt", "r");
	fopen_s(&file2, "hw2.txt", "r");
	FILE* file3 = nullptr;
	FILE* file4 = nullptr;
	fopen_s(&file3, "hwSum.txt", "w");
	fopen_s(&file4, "hwMax.txt", "w");

	if (file1 == nullptr || file2 == nullptr || file3 == nullptr || file4 == nullptr) {
			cout << "Cannot open the file" << endl;
		}
	else {
		while (!feof(file1)) { //файлы одинакового размера поэтому думаю и так пойдет
			int tmp1 = 0;
			int tmp2 = 0;
			int sum = 0;
			int max = 0;
			fscanf_s(file1, "%d ", &tmp1);
			fscanf_s(file2, "%d ", &tmp2);
			sum = tmp1 + tmp2;
			fprintf(file3, "%d ", sum);
			max = tmp1 > tmp2 ? tmp1 : tmp2;
			fprintf(file4, "%d ", max);
			cout << tmp1 << "\t" <<
				tmp2 << "\t|\t" << sum
				<< "\t|\t" << max << endl;
		}		
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);
	fclose(file4);
}