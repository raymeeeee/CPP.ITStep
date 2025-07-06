#pragma once
#include "Films.h"

template <typename T>
void searchFilm(T*& arr, int& size, char* choice) {
	char choiceUser[50] = "";
	if (strstr(choice, "name")) {
		cout << "\tName:\t\t";
		cin.getline(choiceUser, 50);
		cout << endl;
		searchFilmByName(arr, size, choiceUser);
	}
	else if (strstr(choice, "genre")) {
		cout << "\tGenre:\t\t";
		cin.getline(choiceUser, 50);
		cout << endl;
		searchFilmByGenre(arr, size, choiceUser);
	}
	else if (strstr(choice, "producer")) {
		cout << "\tProducer:\t\t";
		cin.getline(choiceUser, 50);
		cout << endl;
		searchFilmByProducer(arr, size, choiceUser);
	}
	else {
		cout << "Invalid request" << endl << endl;
	}
}

template <typename T>
int searchFilmByName(T* arr, int& size, char* choice) {
	
	int find = -1;
	/*auto find = find_if(arr, arr+size, [choice](Films a) { return strcmp(a.name, choice) == 0; });*/
	
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].name, choice) == 0) {
			find = i;
		}
	}
	if (find == -1) {
		cout << "No such film" << endl << endl;
	}
	else {
		arr[find].showFilm();
	}
	return find;
}

template <typename T>
int searchFilmByGenre(T*& arr, int& size, char* choice) {
	int find = -1;

	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].genre, choice) == 0) {
			arr[i].showFilm();
			find = i;
		}
	}
	if (find == -1) {
		cout << "No such genre" << endl << endl;
	}
	return find;
}

template <typename T>
int searchFilmByProducer(T*& arr, int& size, char* choice) {
	int find = -1;
			
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].producer, choice) == 0) {
			arr[i].showFilm();
			find = i;
		}
	}
	if (find == -1) {
		cout << "No such producer" << endl << endl;
	}
	return find;
}