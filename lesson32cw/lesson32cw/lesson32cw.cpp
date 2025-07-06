#include "Provider.h"

//int main()
//{
//
//    int a = 0, b = 0;
//    float c = 0;
//
//    cout << "Input a & b: ";
//    cin >> a >> b;
//
//    try {
//        c = a / b; //float(a) / 0 = infinity 
//    }
//    catch(...) {
//        cout << "error" << endl;
//    }
//
//    cout << "Result: " << c << endl;
//}

//float average(int arr[], int size) {
//	int amount = 0;
//	float sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 2 != 0) {
//			amount++;
//			sum += arr[i];
//		}
//	}
//	if (amount == 0) throw "amount == 0";
//	return sum / amount;
//}
//
//int main() {
//	int A[5]{ 4, 2, 4, 76, 6 };
//	int B[5]{ 1, 2, 7, 76, 6 };
//
//	float a1 = 0, b1 = 0;
//
//	try {
//		a1 = average(A, 5);
//		cout << "Result: " << a1 << endl;
//	}
//	catch (const char* s) {
//		cout << "Array A: " << s << endl;
//	}
//
//	try {
//		b1 = average(B, 5);
//		cout << "Result: " << b1 << endl;
//	}
//	catch (const char* s) {
//		cout << "Array B: " << s << endl;
//	}
//	
//}
		
int main(void) {
	Provider Kievstar("Kievstar");

	try { Kievstar.addTariff(new SecondsTariff("Day", 0.05)); }
	catch (MobileException* obj) {
		cout << obj->showMessage() << endl; delete obj;
	}	

	try { Kievstar.addTariff(new SecondsTariff("", -500)); }
	catch (MobileException* obj) {
		cout << obj->showMessage() << endl; delete obj;
	}

	try { Kievstar.addTariff(new SecondsTariff("XXX day", 500)); }
	catch (MobileException* obj) {
		cout << obj->showMessage() << endl; delete obj;
	}
	cout << endl;
	Kievstar.showList();
}

