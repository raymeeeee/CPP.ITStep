#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//int main()
//{   
//    char C = 'c';
//    cout << int(C) << endl;
//    cout << (C+0) << endl;
//}


//int main() {
//	int N;
//	cin >> N;
//	cout << char(N) << endl;
//}

//int main() {
//	srand(time(0));
//	char A = 0;
//	if (rand() % 2) {
//		A = rand() % 26 + 65;
//	}
//	else {
//		A = rand() % 26 + 97;
//	}
//	cout << A << endl;
//	
//}

//int main() {
//	char C = 'C';
//	cout << char(C - 1) << endl;
//	cout << C << endl;
//	cout << char(C + 1) << endl;
//}

//#include <ctype.h>
//
//int main() {
//	char C;
//	cin >> C;
//	if (isdigit(char(C))) {
//		cout << "digit" << endl;
//	}
//	else if(isalpha(C)){
//		cout << "lat" << endl;
//	}
//	else {
//		cout << "symbol" << endl;
//	}
//}

//int main() {
//	char n1[100]{'\0'};
//	char n2[100]{'\0'};
//	
//
//	cin >> n1 >> n2;
//
//	if (strlen(n1) > strlen(n2)) {
//		cout << n1 << " Bigger" << endl;
//	}
//	else if (strlen(n1) == strlen(n2)) {
//		cout << "Equal" << endl;
//	}
//	else {
//		cout << n2 << " Bigger";
//	}
//
//}

//int main() {
//	char str[100]{ '\0' };
//	cin.getline(str, 100);
//
//	for (int i = 0; i < strlen(str); i++) {
//	
//		str[i] = tolower(str[i]);
//	}
//
//	cout << str;
//
//}

//int main() {
//	char str[100]{ '\0' };
//	cin >> str;
//	int size = strlen(str);
//	cout << str[2] << " " << str[size - 1] << " " << str[size - 1];
//}

//int main() {
//	char str[100]{ '\0' };
//	cin >> str;
//	int size = strlen(str);
//	int x = 0;
//	int dot = 0;
//	
//	for (int i = 0; i < size; i++) {
//		if (isdigit(str[i])) {
//			x++;
//		}
//		else if (str[i] == '.') {
//			dot++;
//		}
//		
//	}
//	if (x == size) {
//		cout << '1' << endl;
//	}
//	else if (dot == 1 && x == size-1) {
//		cout << '2' << endl;
//	}
//	else {
//		cout << '0' << endl;
//	}
//}

//#include <cstring>
//
//int main() {
//	char name[50]{ "" };
//	char surname[50]{ "" };
//	cin >> name >> surname;
//	name[0] = toupper(name[0]);
//	surname[0] = toupper(surname[0]);
//	int size = strlen(name) + strlen(surname) + 2;
//	
//	char* fullname = new char[size];
//
//	strcpy_s(fullname, size, surname);
//	strcat_s(fullname, size, " ");
//	strcat_s(fullname, size, name);
//	cout << fullname << endl;
//}

//int main() {
//	int n1, n2;
//	char s1[20]{ "" }, s2[20]{""};
//	cout << "Enter n1, n2: " << endl;
//	cin >> n1 >> n2;
//	cout << "Enter s1, s2: " << endl;
//	cin >> s1 >> s2;
//	int size = n1 + n2 + 1;
//	char* S = new char[size];
//	
//	strncpy_s(S, size, s1, n1);
//	strncat_s(S, size, s2, n2);
//	cout << endl;
//	cout << S << endl;
//}

//int main() {
//	char text[5][11]{ "16/04/2001", "21/08/2007", "05/11/2021", "19/09/2000", "31/12/2009" };
//	for (int i = 0; i < 5; i++) {
//		cout << text[i]+3 << endl;
//		int month = atoi(text[i] + 3);
//		cout << "\t" << month << endl;
//	}
//}

int main() {
	char text[8]{ "4+7-2-8" };
	int size = 8;
	int sum = 0;
	sum += atoi(text);
	
	for (int i = 1; i < size; i++) {
		if (text[i] == '+') {
			sum += atoi(text+i+1);
		}
		else if (text[i] == '-') {
			sum -= atoi(text+i+1);
		}
	}
	cout << sum;
} 