#pragma once
#include "Films.h"

template <typename T>
void sortFilms(T* arr, int size, bool (*cmp)(T, T)) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (cmp(arr[j + 1], arr[j])) {
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Sorting done successfully" << endl << endl;
}
