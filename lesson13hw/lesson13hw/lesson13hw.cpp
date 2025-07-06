#include "Films.h"
#include "Sort.h"
#include "Edit.h"
#include "Search.h"
#include "Receipt.h"

int main(){	
	
	srand(time(0));
	int size = 20;
	FILE* ticket = nullptr;
	Films* arr = new Films[size]{
		{ "Interstellar", "Christopher Nolan","Crime",
			2014, 8.7, 399, "https://www.imdb.com/title/tt0816692/" },
		{ "Fight club", "David Fincher", "Crime",
			1999, 8.8, 429, "https://www.imdb.com/title/tt0137523/"},
		{ "Black lightning", "Alexander Voitinsky","Action",
			2009, 5.7, 249, "https://www.imdb.com/title/tt1569364/"},
		{ "The Shawshank Redemption", "Frank Darabont", "Drama",
			1994, 9.3, 459, "https://www.imdb.com/title/tt0111161/"},
		{ "The Matrix", "Lana Wachowski", "Action",
			1999, 8.7, 419, "https://www.imdb.com/title/tt0133093/"},
		{ "The Green Mile", "Frank Darabont", "Drama",
			1999, 8.6, 389, "https://www.imdb.com/title/tt0120689/"},
		{ "The Pianist", "Roman Polanski", "Drama",
			2002, 8.5, 409, "https://www.imdb.com/title/tt0253474/"},
		{ "Parasite", "Bong Joon Ho", "Thriller",
			2019, 8.5, 439, "https://www.imdb.com/title/tt6751668/"},
		{ "Whiplash", "Damien Chazelle", "Music",
			2014, 8.5, 449, "https://www.imdb.com/title/tt2582802/"},
		{ "The Intouchables", "Olivier Nakache", "Comedy",
			2011, 8.5, 379, "https://www.imdb.com/title/tt1675434/"},
		{ "Alien", "Ridley Scott", "Horror",
			1979, 8.5, 329, "https://www.imdb.com/title/tt0078748/"},
		{ "Shutter Island", "Martin Scorsese", "Drama",
			2010, 8.2, 339, "https://www.imdb.com/title/tt1130884/"},
		{ "The Gentlemen", "Guy Ritchie", "Crime",
			2019, 7.8, 379, "https://www.imdb.com/title/tt8367814/"},
		{ "Dune", "Denis Villeneuve", "Action",
			2021, 8.0, 399, "https://www.imdb.com/title/tt1160419/"},
		{ "Donnie Darko", "Richard Kelly", "Drama",
			2001, 8.0, 359, "https://www.imdb.com/title/tt0246578/"},
		{ "Spirited Away", "Hayao Miyazaki", "Animation",
			2001, 8.6, 299, "https://www.imdb.com/title/tt0245429/"},
		{ "Your Name", "Makoto Shinkai", "Animation",
			2016, 8.4, 299, "https://www.imdb.com/title/tt5311514/"},
		{ "1408", "Mikael Hafstrom", "Horror",
			2007, 6.8, 299, "https://www.imdb.com/title/tt0450385/"},
		{ "Aquaman", "James Wan", "Action",
			2018, 6.8, 279, "https://www.imdb.com/title/tt1477834/"},
		{ "Astral", "Chris Mul", "Horror",
			2018, 4.6, 229, "https://www.imdb.com/title/tt4765240/"} };

	Films newFilm;
	Receipt receipt;

	char userID[50] = "";

	char menuAdmin[] = R"(To see this menu again type - 'help'
To leave this program type - 'break'

To show all films type - 'show'
To add film type - 'add'
To edit film type - 'edit'
To delete film type - 'delete'
To find film by name, genre or producer type - 'find'
To sort films by rating type - 'sort'
To buy film type - 'buy'
To see how much you need to pay type - 'pay'

To get the receipt type - 'receipt'

)";

	char menuUser[] = R"(To see this menu again type - 'help'
To leave this program type - 'break'

To show all films type - 'show'
To find film by name, genre or producer type - 'find'
To sort films by rating type - 'sort'
To buy film type - 'buy'
To see how much you need to pay type - 'pay'

To get the receipt type - 'receipt'

)";

	
	cout << "Register in system, User or Admin: ";
	cin >> userID;
	cout << endl;

	if (strstr(userID, "Admin")) {
		cout << menuAdmin;
	}
	else {
		cout << menuUser;
	}
	

	while (true) {
		char choice[20] = "";
		char choiceName[100] = "";
		char choiceSort = '>';
		int ticketsAmount = 0;

		cout << "Command:\t";
		cin >> choice;
		cout << endl;

		if (strstr(choice, "help")) {
			if (strstr(userID, "Admin")) {
				cout << menuAdmin;
			}
			else {
				cout << menuUser;
			}
		}

		else if (strstr(choice, "show")){
			showFilms(arr, size);
		}

		else if (strstr(choice, "add") && strstr(userID, "Admin")) {
			cin.ignore();
			addFilm(arr, size, newFilm);
		}

		else if (strstr(choice, "edit") && strstr(userID, "Admin")) {
			cout << "Name a film to edit:\t\t";
			cin.ignore();
			cin.getline(choiceName, 100);
			cout << endl;
			editFilm(arr, size, choiceName);
		}

		else if (strstr(choice, "delete") && strstr(userID, "Admin")) {
			cout << "Delete by name:\t\t";
			cin.ignore();
			cin.getline(choiceName, 100);
			cout << endl;
			deleteFilm(arr, size, choiceName);
		}

		else if (strstr(choice, "find")) {
			cout << "Find by ... (name, genre, producer):\t\t";
			cin.ignore();
			cin.getline(choiceName, 100);
			cout << endl;
			searchFilm(arr, size, choiceName);
		}

		else if (strstr(choice, "buy")) {

			cout << "Name:\t\t";
			cin.ignore();
			cin.getline(choiceName, 100);
			cout << endl;

			int choiceFilm = searchFilmByName(arr, size, choiceName);

			if (choiceFilm != -1) {

				cout << "Tickets:\t";
				cin >> ticketsAmount;
				cout << endl;

				buyFilm(arr, size, choiceFilm, receipt.payment, ticketsAmount);
				add_word(receipt.filmsReceipt, receipt.filmsAmount, choiceName);
				addItemBack(receipt.ticketsFilms, receipt.ticketsFilmsAmount, ticketsAmount);
				receipt.tickets += ticketsAmount;	
				

			}

		}

		else if (strstr(choice, "sort")) {
			cout << "Sort by ... (year, rating or price):\t";
			cin >> choice;
			cout << endl;

			if (strstr(choice, "rating")) {
				cout << "Choose sort method:\n from biggest to smallest > \n from smallest to biggest <\n Sort:\t\t";
				cin >> choiceSort;
				cout << endl;
				if (choiceSort == '>') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.rating > b.rating; });
				}
				else if (choiceSort == '<') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.rating < b.rating; });
				}
				else {
					cout << "Invalid sort method" << endl;
				}
				
			}

			else if (strstr(choice, "year")) {
				cout << "Choose sort method:\n from newest to oldest > \n from oldest to newest <\n Sort:\t\t";
				cin >> choiceSort;
				cout << endl;
				if (choiceSort == '>') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.year > b.year; });
				}
				else if (choiceSort == '<') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.year < b.year; });
				}
				else {
					cout << "Invalid sort method" << endl;
				}

			}

			else if (strstr(choice, "price")) {
				cout << "Choose sort method:\n from biggest to smallest > \n from smallest to biggest <\n Sort:\t\t";
				cin >> choiceSort;
				cout << endl;
				if (choiceSort == '>') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.price > b.price; });	
				}
				else if (choiceSort == '<') {
					sortFilms<Films>(arr, size, [](Films a, Films b) {return a.price < b.price; });
				}
				else {
					cout << "Invalid sort method" << endl;
				}
			}

			else {
				cout << "Invalid sort choice" << endl << endl;
			}
			
		}

		else if (strstr(choice, "pay")) {
			cout << "\tTo payment:\t\t" << receipt.payment << " UAH" << endl << endl;
		}

		else if (strstr(choice, "receipt")) {

			if (receipt.tickets > 0) {
				receipt.fillReceipt();
				receipt.printReceipt(ticket);
			}
			else {
				cout << "You need to buy some tickets for films first" << endl << endl;
			}
			
		}

		else if (strstr(choice, "break")) {
			cout << "See you soon!" << endl;
			break;
		}

		else {
			cout << "No such command, please type 'help' to see available commands" << endl << endl;
		}

	}

	delete[] arr;

	return 0;
}