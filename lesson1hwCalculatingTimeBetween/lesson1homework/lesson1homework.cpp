#include <iostream>
#include <stdlib.h>
using namespace std;


//1.1
//int main()
//{
//	
//
//	
//		/* Наступна команда через 4 табуляції виводить текст
//		Escape Sequences і переводить вивід на наступний
//		рядок
//		*/
//		cout << "\t\t\t\tEscape Sequences\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		/* Через 2 табуляції виводить текст \b, і ще через
//		1 табуляцію Backspace. Потім \n переводить вивід на
//		наступний рядок
//		*/
//		cout << "\t\t\\b" << "\tBackspace\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		/* Через 2 табуляції виводить текст \n, і ще через
//		1 табуляцію New line
//		Потім \n переводить вивід на наступний рядок
//		*/
//		cout << "\t\t\\n" << "\tNew line\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		/* Через 2 табуляції виводить текст \t, і ще через
//		1 табуляцію Horizontal tab. Потім \n переводить
//		вивід на наступний рядок
//		*/
//		cout << "\t\t\\t" << "\tHorizontal tab\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		
//		//Урок № 1
//		/* Через 2 табуляції виводить текст \\, і ще через
//		1 табуляцію Backslash \
//		Потім \n переводить вивід на наступний рядок
//		*/
//		cout << "\t\t\\\\" << "\tBackslash \\\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		/* Через 2 табуляції виводить текст \t,
//		і ще через 1 табуляцію Double quotation mark "
//		Потім \n переводить вивід на наступний рядок
//		*/
//		cout << "\t\t\"" << "\tDouble quotation mark \"\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		/* Через 2 табуляції виводить текст \',
//		і ще через 1 табуляцію Single quotation mark '
//		Потім \n переводить вивід на наступний рядок
//		*/
//		cout << "\t\t\'" << "\tSingle quotation mark \'\n";
//		// Виводить порожній рядок
//		cout << "\n";
//		return 0;
//
//
//}

//1.2
//
//int main() {
//	// Запрошення "Давай грати!"
//	cout << "Let's play!\n";
//	// Оголошення змінної i
//	int i;
//	// Запрошення "Введіть число"
//	cout << "Enter a number:";
//	// Введення числа
//	cin >> i;
//	// Вивід числа, яке "загадав" комп'ютер
//	cout << "I have " << i + 1 << "\n";
//	// Вивід результату гри
//	cout << "I'm winner!\n";
//	return 0;
//}

//1.3
//
//int main() {
//	// оголошення змінних і запит на ввід даних
//	float digit;
//	cout << "Enter a digit: ";
//	cin >> digit;
//	/* Навіть якщо користувач ввів число
//	20
//	Урок № 2
//	з дійсною частиною, результат виразу
//	запишеться в int, і дійсна частина буде
//	втрачена; розділивши число на 100, ми отримаємо
//	кількість сотень у ньому. */
//	int res = digit / 100;
//	cout << res << "! There are this many hundreds"
//				   " in your digit!!!\n\n";
//	return 0;
//}

//2
//
//int main()
//{
//	system("COLOR 3E");
//	cout << "+-----[configuration]-----+\n";
//	cout << "|                         |\n";
//	cout << "| File transfer protocols |\n";
//	cout << "| Serial port setup       |\n";
//	cout << "| Modem and dialing       |\n";
//	cout << "| Screen and keyboard     |\n";
//	cout << "| Save setup as dfl       |\n";
//	cout << "| Save setup as..         |\n";
//	cout << "| Exit                    |\n";
//	cout << "| Exit from Minicom       |\n";
//	cout << "+-------------------------+\n";
//
//}

//3
// 
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float k = 0.0;
//	float f = 0.0;
//	cout << "Enter length of palisade: \n";
//	cin >> a;
//	cout << "Enter width of palisade: \n";
//	cin >> b;
//	cout << "Enter length of plank: \n";
//	cin >> k;
//	cout << "Enter width of plank: \n";
//	cin >> f;
//	float res1 = a * b;
//	float res2 = k * f;
//	float resf = res1 / res2;
//	cout << "You need " << round(resf) << " planks";
//
//}

//4
//
//int main()
//{
//	float budget = 0;
//	float house = 0;
//	cout << "Enter budget of the family:\n";
//	cin >> budget;
//	cout << "Enter percent of money for house rent:\n";
//	cin >> house;
//	float result1 = budget * (house / 100);
//	float result = budget - result1;
//	cout << "Money for house: " << result1 << " Rest of budget: " << result;
//
//}

//5

int main()
{
	int h1 = 0;
	int min1 = 0;
	int h2 = 0;
	int min2 = 0;
   
    cout << "Enter the starting time (hours and minutes):\n";
    cin >> h1 >> min1;
    cout << "Enter the ending time (hours and minutes):\n";
    cin >> h2 >> min2;

    int minutes1 = h1 * 60 + min1;
    int minutes2 = h2 * 60 + min2;

    int alltime = (minutes2 - minutes1 + 1440) % 1440;

    int hours = alltime / 60;
    int minutes = alltime % 60;

    cout << "Student worked on the problems for: " << hours << " hours and " << minutes << " minutes\n";

}