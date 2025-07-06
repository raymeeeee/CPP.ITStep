#include "Country.h"
#include "ArrayTemplate.h"

int main()
{
	int size = 5;
	Country* arr = new Country[size]{
		{"Ukraine", "Europe", 603, 4200},
		{"China", "Asia", 8128, 1400},
		{"Japan", "Asia", 672, 500},
		{"France", "Europe", 173, 115},
		{"USA", "America", 4677, 270}
	};
	
	addItemBack(arr, size, { "Canada", "America", 5123, 130 });

	cout << "|" << setw(12) << "Name"
		<< "|" << setw(12) << "Part"
		<< "|" << setw(8) << "Square"
		<< "|" << setw(12) << "Population" << "|" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	for (int i = 0; i < size; i++) {
		arr[i].showTable();
	}

	cout << "Sorting by square: " << endl;

	my_sort_if<Country>(arr, size, [](Country a, Country b) {
		return a.square > b.square;
	});

	for (int i = 0; i < size; i++) {
		arr[i].showTable();
	}

	cout << "Sorting by population: " << endl;

	my_sort_if<Country>(arr, size, [](Country a, Country b) {
		return a.population > b.population;
		});

	for (int i = 0; i < size; i++) {
		arr[i].showTable();
	}
	/*system("pause");
	system("cls");*/
	char line[50] = "";
	cout << "Name: " << endl;
	cin.getline(line, 50);
	int index = -1;
	for (int i = 0; i < size; i++) {
		if (strcmp(line, arr[i].name) == 0) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		cout << "Not found" << endl;
	}
	else {
		arr[index].showInfo();
	}
	char part[50] = "";
	cout << "Part: " << endl;
	cin >> part;
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (strcmp(part, arr[i].part) == 0) {
			cout << arr[i].name << endl;
		}
	}
}

