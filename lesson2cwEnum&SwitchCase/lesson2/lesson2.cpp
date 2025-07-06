#include <iostream>
#include <clocale>
using namespace std;

//int main(){  
//    int S;
//    int M;
//    cout << "Sasha`s age: \n";
//    cin >> S;
//    cout << "Masha`s age: \n";
//    cin >> M;
//
//    if (S > M) {
//        cout << "Sasha is older than Masha";
//    }
//    else if (M > S) {
//        cout << "Masha is older than Sasha";
//    }
//    else {
//        cout << "Masha and Sasha have the same age";
//    }
//}

//int main() {
//	int x;
//	cin >> x;
//	(x > 0) ? cout << x + 1 : cout << x - 2;
//}

//int main() {
//	float V;
//	float V1;
//	float V2;
//	cout << "Volume of your liquid: ";
//	cin >> V;
//	cout << "Volume of your vessel1: ";
//	cin >> V1;
//	cout << "Volume of your vessel2: ";
//	cin >> V2;
//	if (V1 + V2 >= V) {
//		cout << "Volume of your vessels is enough to contain your liquid";
//	}
//	else {
//		cout << "Volume of your vessels is not enough to contain your liquid";
//	}
//		
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a;
//	cin >> b;
//	(b % a == 0) ? cout << "a is divider of b" : cout << "a is not divider of b";
//}

//int main() {
//	float km;
//	cout << "Enter your quantity of km: ";
//	cin >> km;
//	km = km * 1000 / 0.45;
//	float feet;
//	cout << "Enter your quantity of feet: ";
//	cin >> feet;
//	(km > feet) ? cout << "km is greater" : cout << "feet is greater";
//}

//int main() {
//	int age;
//	cout << "Enter your age: ";
//	cin >> age;
//	(25 <= age && age <= 40) ? cout << "Your age suits the company" : cout << "Your age is not suitable for company";
//}

//int main() {
//	int day;
//	cout << "Enter the day of the month: ";
//	cin >> day;
//	if (1 <= day && day <= 10){
//		cout << "First ten days of the month";
//	}
//	else if (11 <= day && day <= 20) {
//		cout << "Second ten days of the month";
//	}
//	else if (21 <= day && day <= 31) {
//		cout << "Third ten days of the month";
//	}
//}

//int main() {
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (a + b > c && a + c > b && c + b > a) {
//		cout << "Triangle can exist";
//	}
//	else {
//		cout << "Triangle cannot exist";
//	}
//	
//}

//int main() {
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (a + b > c && a + c > b && c + b > a) {
//		if (a == b && a == c && b == c) {
//			cout << "Triangle is equilateral";
//		}
//		else if (a == b || a == c || b == c) {
//			cout << "Triangle is isosceles";
//		}
//		else if (a != b && a != c && b != c) {
//			cout << "Triangle is arbitrary";
//		}
//	}
//	else {
//		cout << "Triangle cannot exist";
//	}
//
//}

//int main() {
//	int day;
//	cin >> day;
//	switch (day) {
//	case 1: cout << "Math, English, PE, Physics"; break;
//	case 2: cout << "Math, English, PE, Physics"; break;
//	case 3: cout << "Math, English, PE, Physics"; break;
//	case 4: cout << "Math, English, PE, Physics"; break;
//	case 5: cout << "Math, English, PE, Physics"; break;
//	case 6: cout << "Day off"; break;
//	case 7: cout << "Day off"; break;
//	default: cout << "Not a day of week"; break;
//	}
//}

//int main() {
//	int month;
//	enum monthes {
//		ja = 1,
//		fe,
//		ma,
//		ap,
//		may,
//		june,
//		july,
//		au,
//		sept,
//		oc,
//		no,
//		dec,
//
//	};
//	cin >> month;
//	switch (month)
//	{
//	case dec:
//	case ja:
//	case fe:
//		cout << "Winter";
//		break;
//	case ma:
//	case ap:
//	case may:
//		cout << "Spring";
//		break;
//	case june:
//	case july:
//	case au:
//		cout << "Summer";
//		break;
//	case sept:
//	case oc:
//	case no:
//		cout << "Autumn";
//		break;
//	
//	default:
//		cout << "Error";
//		break;
//	}
//}

//int main() {
//	int country;
//	int time_of_talking;
//	enum countries {
//		USA = 1,
//		France = 33,
//		Italy = 39,
//		Australia = 61,
//	};
//	cin >> country;
//	cin >> time_of_talking;
//	switch (country)
//	{
//	case USA:
//		cout << "For payment in USA: " << 25 * time_of_talking << " UAH";
//		break;
//	case France:
//		cout << "For payment in France: " << 19 * time_of_talking << " UAH";
//		break;
//	case Italy:
//		cout << "For payment in Italy: " << 17 * time_of_talking << " UAH";
//		break;
//	case Australia:
//		cout << "For payment in Australia: " << 30 * time_of_talking << " UAH";
//		break;
//	default:
//		cout << "Error";
//		break;
//	}
//}

//int main() {
//	int d;
//	int m;
//	cin >> m;
//	cin >> d;
//	setlocale(0, "RU");
//	if ((m == 3 && d >= 21) || (m == 4 && d <= 20)) {
//		cout << "Овен";
//	}
//	else if (m == 4 && d >= 21 || m == 5 && d <= 21) {
//		cout << "Телець";
//	}
//	else if (m == 5 && d >= 22 || m == 6 && d <= 21) {
//		cout << "Близнюки";
//	}
//	else if (m == 6 && d >= 22 || m == 7 && d <= 22) {
//		cout << "Рак";
//	}
//	else if (m == 7 && d >= 23 || m == 8 && d <= 23) {
//		cout << "Лев";
//	}
//	else if (m == 8 && d >= 24 || m == 9 && d <= 22) {
//		cout << "Діва";
//	}
//	else if (m == 9 && d >= 23 || m == 10 && d <= 22) {
//		cout << "Терези";
//	}
//	else if (m == 10 && d >= 23 || m == 11 && d <= 21) {
//		cout << "Скорпіон";
//	}
//	else if (m == 11 && d >= 22 || m == 12 && d <= 21) {
//		cout << "Стрілець";
//	}
//	else if (m == 12 && d >= 22 || m == 1 && d <= 20) {
//		cout << "Козеріг";
//	}
//	else if (m == 1 && d >= 21 || m == 2 && d <= 19) {
//		cout << "Водолій";
//	}
//	else if (m == 2 && d >= 20 || m == 3 && d <= 20) {
//		cout << "Риби";
//	}
//	else
//		cout << "Error";
//
//}

//int main() {
//	int place;
//	int food;
//	int stars;
//	cin >> place; cin >> food; cin >> stars;
//	switch (stars)
//	{
//	case 3:
//		if (place == 1 && food == 1)
//			cout << "Price 400";
//		else if (place == 1 && food == 0)
//			cout << "Price 300";
//		else if (place == 2 && food == 0)
//			cout << "Price 450";
//		else if (place == 2 && food == 1)
//			cout << "Price 600";
//		else
//			cout << "Error";
//		break;
//	case 4:
//		if (place == 1 && food == 1)
//			cout << "Price 1000";
//		else if (place == 1 && food == 0)
//			cout << "Price 900";
//		else if (place == 2 && food == 0)
//			cout << "Price 800";
//		else if (place == 2 && food == 1)
//			cout << "Price 1200";
//		else
//			cout << "Error";
//		break;
//	case 5:
//		if (place == 1 && food == 1)
//			cout << "Price 1600";
//		else if (place == 1 && food == 0)
//			cout << "Price 1300";
//		else if (place == 2 && food == 0)
//			cout << "Price 1700";
//		else if (place == 2 && food == 1)
//			cout << "Price 1800";
//		else
//			cout << "Error";
//		break;
//	default:
//		cout << "Error";
//		break;
//	}
//}