#include <iostream>
using namespace std;

//1.1
//int getNumberOfStars(const char* str) {
//		int n = 0;
//
//		for (int i =0; str[i];i++){
//			if (str[i] == '*') {
//				n++;
//			}
//		}
//		return n;
//	}
//
//int main() {
//	const int n = 20;
//	char* userStr = new char[n];
//	fgets(userStr, n, stdin);
//	cout << "num of symb '*' = " << getNumberOfStars(userStr) << endl;
//	delete[] userStr;
//	return 0;
//}

//1.2
//int getLengthOfFirstWord(const char* str) {
//	int spaceInd = 0;
//		
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] == ' ') {
//			spaceInd = i;
//			break;
//		}
//	}
//	return spaceInd;
//}
//
//int getLengthOfLastWord(const char* str) {
//	int spaceInd = 0;
//
//	for (int i = strlen(str)-1; i >= 0; i--) {
//		if (str[i] == ' ') {
//			spaceInd = i;
//			break;
//		}
//	}
//	return  strlen(str)-spaceInd-1;
//}
//
//int main() {
//	const int n = 20;
//
//	char* userStr = new char[n];
//
//
//	cout << "Input string: ";
//
//	fgets(userStr, n, stdin);
//	if (getLengthOfFirstWord(userStr) == 0) {
//		cout << "There is no space symbol in your string!\n";
//	}
//	else
//	{
//		if (getLengthOfFirstWord(userStr) > getLengthOfLastWord(userStr)) {
//			cout << "The length of the 1st word is longer" << endl;
//		}
//		else if (getLengthOfFirstWord(userStr) < getLengthOfLastWord(userStr)) {
//			cout << "The length of the last word is longer" << endl;
//		}
//		else {
//			cout << "The 1st and last words are the same length" << endl;;				
//		}
//
//	}
//	delete[] userStr;
//	return 0;
//}

//1.3
//int checkUserLevel(char* userLog, const char* adminLog, const char* standartLog) {
//	cout << "User login: " << userLog << endl;
//		
//	cout << "Admin login: " << adminLog << endl;
//		
//	cout << "Standard login: " << standartLog << endl;
//	char* userLogTemp = userLog;
//	_strlwr_s(userLog, strlen(userLog)+1);
//	if (strcmp(userLogTemp, adminLog) == 0) {
//		return 1;
//	}
//	else if ((strstr(userLog, standartLog)) && (strlen(userLog) <= 10)) {
//		return 0;
//	}
//	else {
//		return -1;
//	}
//}
//
//
//void copyStrPart(char* dest, char* src, int n) {
//	for (int i = 0; i < n - 1; i++) {
//		dest[i] = src[i];
//
//	}
//	dest[n - 1] = '\0';
//}
//
//int main() {
//	const int n = 50;
//	const char* adminLog = "admin";
//	const char* standartLog = "user";
//	char* login = new char[n];
//	fgets(login, n, stdin);
//	int m = strlen(login);
//	char* tempLog = new char[m];
//	copyStrPart(tempLog, login, m);
//	if (checkUserLevel(tempLog, adminLog, standartLog) == 1) {
//		cout << "Welcome, admin!" << endl;
//			
//	}
//	else if (checkUserLevel(tempLog, adminLog, standartLog) == 0) {
//		cout << "Welcome, user!" << endl;
//	}
//	else {
//		cout << "Wrong login!" << endl;
//	}
//	delete[] login;
//	return 0;
//}

//2	
//
//int main() {
//	char str[100]{ '\0' };
//	cin >> str;
//	int lenght = strlen(str);
//	int odd = 0;
//	if (lenght % 2 == 1) {
//		lenght--;
//		odd++;
//	}
//	int pallindrome = 0;
//	for (int i = 0; i < (lenght/2); i++) {
//		if (str[i] == str[lenght - 1 - i + odd]) {
//			/*cout << "true" << endl;*/
//			pallindrome++;
//		}
//		else {
//			/*cout << "false" << endl;*/
//			
//		}
//	}
//	cout << endl;
//	if (pallindrome == (lenght / 2)) {
//		cout << "True" << endl;
//	}
//	else {
//		cout << "False" << endl;
//	}
//}

//3
//
//int main(){
//	char str[100]{ '\0' };
//	cout << "string: " << endl;
//	cin >> str;
//	int step = 0;
//	cout << "step: " << endl;
//	cin >> step;
//	for (int i = 0; i < strlen(str); i++) {
//		if ((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122)){
//			if (isupper(str[i])) {
//				if (str[i] - step < 65) {
//					cout << char(str[i] - step + 26);
//				}
//				else {
//					cout << char(str[i] - step);
//				}
//			
//			}
//			else if (islower(str[i])) {
//				if (str[i] - step < 97) {
//					cout << char(str[i] - step + 26);
//				}
//				else {
//					cout << char(str[i] - step);
//				}
//			}
//		}
//		else {
//			cout << str[i];
//		}
//		
//	}
//}

//4
//
//int main() {
//	char str[100]{"Poluektov/Danylo/Math/5/English/4/Music/2/Physics/3/PE/4/Biology/3/"};
//	
//	int avg = 0;
//	int cnt = 0;
//	for (int i = 0; i < strlen(str); i++) {
//		if (isdigit(str[i])) {
//			avg += atoi(str+i);
//			cnt++;
//		}
//	}
//	cout << float(avg) / cnt << endl;
//}

//5 
//
//#include <string.h>
//int main() {
//	string str = "";
//	cout << "North, South, East, West + Steps      || (stop to exit)" << endl;
//	int steps = 0;
//	int x = 0, y = 0;
//	while (true) {
//		str = " ";
//		steps = 0;
//		cin >> str;
//		if (str == "stop") {
//			cout << "See you again!" << endl;
//			break;
//		}
//		cin >> steps;
//		if (str == "North") {
//			/*cout << "1" << endl;*/
//			y += steps;
//		}
//		else if (str == "South") {
//			/*cout << "2" << endl;*/
//			y -= steps;
//		}
//		else if (str == "East") {
//			/*cout << "3" << endl;*/
//			x += steps;
//		}
//		else if (str == "West") {
//			/*cout << "4" << endl;*/
//			x -= steps;
//		}
//		else {
//			cout << "Wrong condition" << endl;
//		}
//		cout << endl;
//		cout << "You are now at " << "[" << x << ";" << y << "]" << endl;
//	}
//}