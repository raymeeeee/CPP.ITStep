#pragma once
#include "Films.h"

template <typename T>
void addFilm(T*& arr, int& size, T& item) {
	T* tmp = new T[size + 1];
	for (int i = 0; i < size; i++) { tmp[i] = arr[i]; }
	cout << "Add: " << endl;
	item.fillFilm();
	tmp[size] = item;
	if (arr != nullptr) delete[] arr;
	arr = tmp;
	size++;
	cout << "Film added successfully" << endl << endl;
}

template <typename T>
void deleteFilm(T*& arr, int& size, char* name) {
	T* tmp = new T[size - 1];
	int deleteCheck = searchFilmByName(arr, size, name);
	if (deleteCheck == -1) {
		return;
	}
	for (int i = 0, j = 0; i < size; i++) {
		if (strcmp(arr[i].name, name) != 0) {
			tmp[j] = arr[i];
			j++;

		}
	}
	if (arr != nullptr) delete[] arr;
	arr = tmp;
	size--;
	cout << "Film deleted successfully" << endl << endl;
}

template <typename T>
void editFilm(T*& arr, int& size, char* name) {
	int find = searchFilmByName(arr, size, name);

	if (find == -1) {
		return;
	}
	else {
		cout << "Edit: " << endl;
		arr[find].fillFilm();
		cout << "Film edited successfully" << endl << endl;
	}
}