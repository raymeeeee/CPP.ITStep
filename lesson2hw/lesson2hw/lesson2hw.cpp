#include <iostream>
using namespace std;

//1.1
//
//int main()
//{
//    // Ласкаво просимо. Три випробування честі.
//// Лихий маг викрав принцесу і її доля у твоїх
//// руках. Він пропонує тобі пройти 3 випробування
//// честі в його лабіринті.
//    cout << "Welcome. Three Tests of Honor."
//        "A beautiful princess was spirited off by"
//        "a wicked magician,\n\n";
//    cout << "\nand her fate is in your hands now."
//        "He proposed you\n";
//    cout << "\nto pass Three Tests of Honor in his "
//        "maze.\n";
//    
//   
//    bool goldTaken, diamondsTaken, killByDragon;
//    // Ти входиш у першу кімнату, тут дуже багато
//    // золота.
//    cout << "You enter the first room with lots of gold "
//        "scattered all over the place.\n\n";
//    // Ти візьмеш його?
//    cout << "Will you take it?(1-yes, 0-no)\n\n";
//    cin >> goldTaken;
//    if (goldTaken) // якщо візьмеш,
//    {
//        // золото залишається тобі, але ти провалив
//        // випробування. ГРУ ЗАКІНЧЕНО!!!
//        cout << "The gold is yours, but you have "
//            "failed the test. GAME OVER\n\n";
//    }
//    else // якщо ні,
//    {
//        // Вітаю! Ти пройшов перше випробування честі!
//        cout << "Congratulations! You have passed "
//            "the First Test of Honor!\n\n";
//        // Ти переходиш до наступної кімнати.
//        // Вона сповнена діамантів
//        cout << "You enter the next room. "
//            "It is full of diamonds \n\n";
//        // Ти візьмеш діаманти?
//        cout << "Will you take the diamonds? "
//            "(1-yes,0-no)\n\n";
//        cin >> diamondsTaken;
//        if (diamondsTaken)// якщо візьмеш
//        {
//            // Діаманти залишаються тобі,
//            // але ти провалив друге випробування
//            cout << "The diamonds are yours, but you "
//                "have failed the Second Test \n\n";
//            // ГРУ ЗАКІНЧЕНО!!!
//            cout << "GAME OVER\n\n";
//        }
//       
//        else // якщо ні
//        {
//            // Вітаю, ти пройшов друге випробування
//            // честі!!!
//            cout << "Congratulations! You have passed "
//                "the Second Test of Honor!\n\n";
//            // Ти входиш у третю кімнату.
//            cout << "You enter the third room. \n\n";
//            // На селянина напав дракон!
//            // Рухатися далі,
//            cout << "A peasant is attacked by "
//                "a dragon! Move along \n\n";
//            // не звертаючи на них уваги
//            cout << "and ignore them "
//                "(1-yes,0-no)?\n\n";
//            cin >> killByDragon;
//            if (killByDragon)// якщо так
//            {
//                // Ти намагаєшся прослизнути повз,
//                // але дракон
//                cout << "You try to sneak past them, "
//                    "but the dragon \n\n";
//                // помічає тебе.
//                cout << "notices you\n\n";
//                // Він перетворює тебе на попіл.
//                // Ти мертвий!!!
//                cout << "It burns you to ashes. "
//                    "You died!\n\n";
//                // ГРУ ЗАКІНЧЕНО!!!
//                cout << "GAME OVER\n\n";
//            }
//            else// якщо ні
//            {
//                // Вітаю, ти з честю пройшов усі
//                // випробування!!!
//                cout << "Congratulations! You have passed"
//                    "all Tests of Honor! "
//                    "\n\n";
//           
//                    // Принцеса дістається тобі!!!
//                    cout << "You get the princess!\n\n";
//            }
//        }
//    }
//    return 0;
//}


//1.2
//
//int main() {
//	// Оголошення перерахувань для команд і напрямку
//	enum command { forward, right, left = -1 };
//	enum direction { north = 1, west, south, east };
//	// Оголошення змінних для прийнятої команди
//	// і початкового напрямку робота
//	int Command, Direction;
//	cout << "Enter the starting direction of "
//		"the robot" << endl;
//	
//		cout << "\t 1- North\n"
//		<< "\t 2- West\n"
//		<< "\t 3- South\n"
//		<< "\t 4- East\n";
//	cin >> Direction;
//	cout << "Select action :" << endl;
//	cout << "\t 0- forward\n"
//		<< "\t 1- turn right\n"
//		<< "\t -1- turn left\n";
//	cin >> Command;
//	switch (Direction)
//		// визначаємо початковий напрямок робота
//	{
//	case north: // якщо робот спочатку дивився
//		// на північ,
//		switch (Command)
//			// визначаємо подальшу поведінку робота
//		{
//		case forward:
//			cout << "The robot is looking "
//				"notrh\n";
//			break;
//		case right:
//			cout << "The robot is looking "
//				"east\n";
//			break;
//		case left:
//			cout << "The robot is looking "
//				"west\n";
//			break;
//		}
//		break;
//	case west: // якщо робот спочатку дивився
//		// на захід,
//		switch (Command)
//			
//			// визначаємо подальшу поведінку робота
//		{
//		case forward:
//			cout << "The robot is looking "
//				"west\n";
//			break;
//		case right:
//			cout << "The robot is looking "
//				"north\n";
//			break;
//		case left:
//			cout << "The robot is looking "
//				"south\n";
//			break;
//		}
//		break;
//	case south: // якщо робот спочатку дивився на південь,
//		switch (Command)
//			// визначаємо подальшу поведінку робота
//		{
//		case forward:
//			cout << "The robot is looking south\n";
//			break;
//		case right:
//			cout << "The robot is looking west\n";
//			break;
//		case left:
//			cout << "The robot is looking east\n";
//			break;
//		}
//		break;
//	case east: // якщо робот спочатку дивився
//		// на схід,
//		switch (Command)
//			// визначаємо подальшу поведінку робота
//		{
//		case forward:
//			
//				cout << "The robot is looking east\n";
//			break;
//		case right:
//			cout << "The robot is looking south\n";
//			break;
//		case left:
//			cout << "The robot is looking north\n";
//			break;
//		}
//		break;
//	default:
//		cout << "not found" << endl;
//	}
//	return 0;
//}


//2
//
//int main() {
//	int a=300; //minutes
//	int b=150; //uah
//	int c=5; //uah per minute 
//	int user_minutes;
//	cout << "Enter the number of minutes you spoke: "; cin >> user_minutes;
//	(user_minutes > a) ? cout << "To payment: "  << ((user_minutes - 300) * 5)+150 : cout << "To payment: " << b;
//	
//}



//3
// 
//int main() {
//	int salary;
//	enum standing
//	{
//		a = 1,
//		b,
//		c,
//	};
//	int command;
//	cout << "Enter standing from 1 to 3: "; cin >> command;
//	cout << "Enter salary: "; cin >> salary;
//	switch (command)
//	{
//	case a:
//		cout << "Your salary is " << salary * 0.02 + salary << " | The premium is " << salary * 0.02;
//		break;
//	case b:
//		cout << "Your salary is " << salary * 0.05 + salary << " | The premium is " << salary * 0.05;
//		break;
//	case c:
//		cout << "Your salary is " << salary * 0.07 + salary << " | The premium is " << salary * 0.07;
//		break;
//	default:
//		cout << "Error";
//		break;
//	}
//}


int main() {
	enum hall
	{
		red = 1,
		blue,
		light_blue,
	};
	enum session1
	{
		s1=12, //25
		s2=16, //35
		s3=20, //45
	}; 
	enum session2
	{
		s4 = 10, //25
		s5 = 13, //35
		s6 = 16, //35
	};
	enum session3
	{
		s7 = 10, //35
		s8 = 14, //45
		s9 = 18, //45
	};
	int choice_hall;
	int choice_session;
	int tickets;
	int result;
	cout << "Enter the hall from 1 to 3: "; cin >> choice_hall;
	cout << "Enter the number of tickets: ";  cin >> tickets;
	switch (choice_hall)
	{
	case red:
		cout << "Enter time(12,16,20): "; cin >> choice_session;
		
		switch (choice_session)
		{
		case s1:
			result = tickets * 25;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s2:
			result = tickets * 35;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s3:
			result = tickets * 45;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	case blue:
		cout << "Enter time(10,13,16): "; cin >> choice_session;

		switch (choice_session)
		{
		case s4:
			result = tickets * 25;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s5:
			result = tickets * 35;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s6:
			result = tickets * 35;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	case light_blue:
		cout << "Enter time (10,14,18): "; cin >> choice_session;

		switch (choice_session)
		{
		case s7:
			result = tickets * 35;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s8:
			result = tickets * 45;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		case s9:
			result = tickets * 45;
			(tickets >= 5 && tickets < 10) ? result = result - result * 0.05 : (tickets >= 10) ? result = result - result * 0.1 : result;
			cout << "hall: " << choice_hall << " session: " << choice_session << " tickets: " << tickets << " to payment: " << result;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	default:
		cout << "Error";
		break;
	}

}
