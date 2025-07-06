#pragma once
#include "Book.h";
#include "Magazine.h";
#include "Publication.h";
#include <vector>;
#include <algorithm>;



class Library
{
private:
	string name;
	vector<Publication*> publications;
public:
	Library() { name = "undefined"; };
	Library(string name) { this->name = name; };
	~Library() { 
		for (int i = 0; i < publications.size(); i++)
		{
			delete publications[i];
		}
	};

	void setName(string name) { this->name = name; };
	string getName()const { return name; };

	void addPublication(Publication* publication);
	void delPublication(int index);
	void findPublication(string name);
	void showPublications()const;

	void showInfo()const;
};

