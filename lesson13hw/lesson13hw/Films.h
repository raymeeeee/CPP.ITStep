#pragma once
#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include "ArrayTemplate.h"

using namespace std;

char separator[100]{ "*********************************************************************************\n" };
struct Films {
	char name[50] = "";
	char producer[50] = "";
	char genre[50] = "";
	int year = 0;	
	float rating = 0;
	int price = 0;
	char url[100] = "";

	void showFilm() {
		cout << separator << endl;
		cout << "Name:\t\t" << name << endl
			<< "Producer:\t" << producer << endl
			<< "Genre:\t\t" << genre << endl
			<< "Year:\t\t" << year << endl
			<< "Rating:\t\t" << rating << endl
			<< "Price:\t\t" << price << endl
			<< "Trailer:\t\t" << url << endl << endl;
		cout << separator << endl;
	}
	void fillFilm() {
		cout << "\tName:\t\t";
		cin.getline(name, 50);
		cout << "\tProducer:\t";
		cin.getline(producer, 50);
		cout << "\tGenre:\t\t";
		cin.getline(genre, 50);	
		cout << "\tYear:\t\t";
		cin >> year;
		cout << "\tRating:\t\t";
		cin >> rating;
		cout << "\tPrice:\t\t";
		cin >> price;
		cout << "\tUrl:\t\t";
		cin >> url;
		cout << endl;
	}
};

void showFilms(Films* arr, int size) {
	
	for (int i = 0; i < size; i++) {
		cout << separator << endl;
		cout << "Name:\t\t" << arr[i].name << endl
			<< "Producer:\t" << arr[i].producer << endl
			<< "Genre:\t\t" << arr[i].genre << endl
			<< "Year:\t\t" << arr[i].year << endl
			<< "Rating:\t\t" << arr[i].rating << endl
			<< "Price:\t\t" << arr[i].price << endl
			<< "Trailer:\t\t" << arr[i].url << endl << endl;
		cout << separator << endl;
		
	}
	
}

template <typename T>
void buyFilm(T*& arr, int& size, int choice, int& sum, int tickets) {
	sum += arr[choice].price * tickets;
	cout << "Film bought successfully" << endl << endl;
}
