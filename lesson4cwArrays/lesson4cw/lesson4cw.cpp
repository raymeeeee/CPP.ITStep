
#include <iostream>
using namespace std;
#include <random>
//int main()
//{
//    int A[8]{37, 0, 50, 46, 34, 46, 0, 13};
//    for (int i = 0; i < 8; i++) {
//        cout << A[i] << " ";
//    }
//}

//int main() {
//	int A[15] = { 0 };
//	for (int i = 0; i < 15; i++) {
//		A[i] = rand() % 101;
//		cout << A[i] << " ";
//	}
//}

//int main() {
//	int A[20]{ 0 };
//	int s, k;
//	for (int i = 0; i < 20; i++) {
//			A[i] = rand() % 151 - 50;
//			cout << A[i] << " ";
//			
//		}
//	cout << endl;
//	cin >> k >> s;
//	if (A[s] > 0)
//		cout << A[s] << " positive\n";
//	else
//		cout << A[s] << " is not positive\n";
//
//	if (A[k] % 2 == 0)
//		cout << A[k] << " even\n";
//	else
//		cout << A[k] << " is odd\n";
//
//	if (A[s] > A[k])
//		cout << "S is bigger";
//	else if (A[s] == A[k])
//		cout << "They are same";
//	else
//		cout << "K is bigger";
//}

//int main() {
//	int A[5]{ 15,20,40,41,58 };
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		if (i % 2 == 0) {
//			sum += A[i];
//		}
//		else {
//			sum -= A[i];
//		}
//	}
//	cout << sum;
//}

//int main() {
//	int A[5]{ 15,20,-40,-41,58 };
//	int index = -1;
//	for (int i = 0; i < 5; i++) {
//		if (A[i] < 0) {
//			index = i;
//			break;
//		}
//	}
//	if (index == -1) {
//		cout << "Not found";
//	}
//	else {
//		cout << index << " " << A[index];
//	}
//}

//int main() {
//	int A[50]{ 0 };
//	int maxPrice = 0;
//	for (int i = 0; i < 50; i++) {
//		A[i] = rand() % 100000 + 100000;
//		cout << A[i] << " | ";
//		if (A[i] > A[maxPrice])
//			maxPrice = i;
//	}
//	cout << endl;
//	cout << A[maxPrice];
//}

//int main() {
//	int A[40]{ 0 };
//	int maxSpeed = 0;
//	for (int i = 0; i < 40; i++) {
//		A[i] = rand() % 81 + 20;
//		cout << A[i] << " | ";
//		
//	}
//	cout << endl;
//	int index = 0;
//	for (int i = 0; i < 40; i++) {
//		if (A[i] > maxSpeed) {
//			maxSpeed = A[i];
//			index = i;
//
//		}
//	}
//	cout << maxSpeed << " " << index;
//
//}


//int main() {
//	int A[6]{ 1,2,3,4,5,6 };
//	int temp = 0;
//	for (int i = 0; i < 6; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	/*temp = A[1];
//	A[1] = A[5];
//	A[5] = temp;*/
//	int m, k;
//	cin >> m >> k;
//	m -= 1, k -= 1;
//	temp = A[m];
//	A[m] = A[k];
//	A[k] = temp;
//
//	for (int i = 0; i < 6; i++) {
//		cout << A[i] << " ";
//	}
//}

//int main() {
//	int A[6]{ 1,2,3,4,5,6 };
//	int temp = 0;
//	for (int i = 0; i < 6; i++) {
//		if (i % 2 == 0) {
//			temp = A[i];
//			A[i] = A[i+1];
//			A[i+1] = temp;
//		}
//	}
//	for (int i = 0; i < 6; i++) {
//			cout << A[i] << " ";
//		}
//}

//int main() {
//	int A[6]{ 1,2,3,4,5,6 };
//	for (int i = 2; i < 6; i++) {
//		A[i] = A[i + 1];
//	}
//	A[5] = 0;
//	for (int i = 0; i < 6; i++) {
//			cout << A[i] << " ";
//		}
//}

int main() {
	int A[6]{ 1,2,3,4,5,6 };
	int k;
	cin >> k;
	k -= 1;
	for (int i = k; i < 6; i++) {
			A[i] = A[i + 1];
		}
	A[5] = 0;
	for (int i = 0; i < 6; i++) {
			cout << A[i] << " ";
		}
}

//int main() {
//	float square[5]{ 12.5,20,7.5,10.25,15 };
//	float wheat[5]{ 100, 200, 150, 175, 205 };
//	float avg[5]{ 0 };
//	for (int i = 0; i < 5; i++) {
//		avg[i] = wheat[i] / square[i];
//	}
//	for (int i = 0; i < 5; i++) {
//			cout << avg[i] << " ";
//		}
//}