
#include <iostream>
using namespace std;

//1.a

//int main() {
//	int BEGIN = 1; // початок діапазону підсумовуваних
//	// значень
//	int END = 5; // кінець діапазону підсумовуваних
//	// значень
//	int SUM = 0; // змінна для накопичення суми
//	int i = BEGIN; // керуюча змінна циклу
//	// перевірка умови
//	while (i <= END) {// (порівняння керуючої змінної
//		// з кінцем діапазону)
//		SUM += i; // накопичення суми
//		i++; // зміна керуючої змінної
//	}
//	// показ результату
//	cout << "Result " << SUM << "\n\n";
//	return 0;
//}


//int main() {
//	int COUNT = 5; // кількість зірочок (довжина лінії)
//	int i = 0; // керуюча змінна циклу
//		while (i <= COUNT) { // перевірка умови
//			cout << "*"; // вивід зірочки
//			i++; // зміна керуючої змінної
//		}
//	cout << "\n\n";
//	return 0;
//}




//1.b

//int main() {
//	for (int count = 1; count <= 5; count++)
//	{
//		cout << "The student squatted " << count <<
//			" time\n";
//	}
//	return 0;
//}


//int main() {
//	int sum = 0;
//	for (int bom = 1; bom <= 12; bom++)
//	{
//		sum += bom; // накопичення суми ударів
//	}
//	// Годинник пробив 78 разів.
//	cout << " Hours have punched " << sum
//		<< " times.\n\n";
//	return 0;
//}


//int main() {
//	int digit, sum = 0;
//	for (;;) { // реалізація нескінченного циклу
//		cout << "Enter digit:";
//		cin >> digit; // ввід числа
//		if (digit == 0) // якщо введено 0
//			break; // зупинити цикл
//		sum += digit; // накопичення суми
//	}
//		// показ результату
//		cout << "Sum of digits" << sum << "\n\n";
//	return 0;
//}


//int main() {
//	int digit;
//	cout << "Enter digit:";
//	cin >> digit;
//	// цикл перебирає числа від 2 до введеного числа
//	for (int i = 2; i < digit; i++) {
//		// якщо число не ділиться на поточне значення i
//		// без залишку, зупинити цей крок і перейти
//		// до наступного
//		if (digit % i != 0)continue;
//		// показати i на екрані
//		cout << i << " ";
//	}
//	cout << endl << endl;
//	return 0;
//}


//int main() {
//	// кількість якісних деталей
//	int amount = 0;
//	// цикл для перебору 4 деталей
//	for (int d = 1; d <= 4; d++)
//	{
//		// сумарний час виготовлення деталі
//		int alltime = 0;
//		// змінна для зберігання часу на верстаті
//		int time = 0;
//		// запитуємо час на першому верстаті
//		cout << "How much time the first machine "
//			"spends for " << d << " part\n";
//		cin >> time;
//	
//			alltime += time;
//		// перевіряємо, чи не перевищено ліміт часу
//		if (alltime > 120)
//		{
//			cout << "That part is defective. "
//				"The time limit exceeded\n";
//			continue;
//		}
//		// запитуємо час на другому верстаті
//		cout << "How much time the second machine "
//			"spends for " << d << " part\n";
//		cin >> time;
//		alltime += time;
//		// перевіряємо, чи не перевищено ліміт часу
//		if (alltime > 120)
//		{
//			cout << "That part is defective. "
//				"The time limit exceeded\n";
//			continue;
//		}
//		// якщо час не було превищено на обох
//		// верстатах, збільшуємо кількість правильно
//		// виготовленої деталі
//		amount++;
//	}
//	cout << "\nThe factory manufactured " << amount <<
//		" parts\n\n";
//	return 0;
//}




//1.c


// N — розмірність
// таблиці
//int main() {
//	int N = 4;
//	for (int i = 0;
//		i < N; i++)
//	{
//		for (int j = 0;
//			j < N; j++)
//		{
//			// головна діагональ
//			if (i == j)
//				cout << " + ";
//			else
//				cout << " = ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}


//int main() {
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			// область під головною та
//			// під побічною діагоналями
//			if (i + j >= 9 && i >= j)
//				cout << " |===| ";
//			else
//				cout << "       ";
//		}
//		cout << endl;
//	}
//}


//2

//int main() {
//	float money = 1000;
//	float plus;
//	int month = 0;
//	float s = 0;
//	cin >> plus;
//	if (plus > 0 && plus <= 25) {
//		while (money <= 1100) {
//			money += money * (plus / 100);
//			month += 1;
//			cout << money << " ";
//		}
//	}
//	cout << "month " << month << " s " << money;
//}




//3

int main() {
	int n = 0;

	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	
	while (digit1 != 10){
		
		
		if (digit3 == digit2 && digit2 == digit1 && digit3 == digit1) {
			cout << "invalid | ";
			n -= 1;
		}
		else {
			cout << digit1 << digit2 << digit3 << " | ";
		}
		digit3 += 1;
		n += 1;
		if (digit3 == 10) {
			digit3 = 0;
			digit2 += 1;
		}
		if (digit2 == 10) {
			digit2 = 0;
			digit1 += 1;
		}
		
	}
	cout << endl;
	cout << n << " seconds";
}


//4

//int main() {
//	float distance = 1000;
//	int n;
//	int c = 0;
//	float total = 0;
//	float home = 0;
//	cin >> n;
//	while (c != n) {
//		
//		c += 1;
//		total += distance / c;
//		if (c % 2 == 1) {
//			home += distance / c;
//		}
//		else {
//			home -= distance / c;
//		}
//		
//
//		cout << "total " << total << " steps " << c << " distance from home " << home << endl;
//	}
//
//}