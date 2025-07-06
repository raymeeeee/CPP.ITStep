#pragma once
#include "Bird.h"
#include "Fish.h"
#include "Mammal.h"
#include <vector>
#include "Zoo.h"
#include "ZooException.h"

class Cage
{
protected:
	string id;
	vector<Animal*> animals;
	int maxSize;
public:
	Cage() { maxSize = 0; };
	Cage(string id, int maxSize) {
		this->id = id;
		this->maxSize = maxSize;
	};
	~Cage() {
		for (auto i : animals)
		{
			delete[] i;
		}
	}

	void setID(string id) { this->id = id; };
	void setMaxSize(string id) { this->maxSize = maxSize; };

	string getID()const { return id; };
	int getMaxSize()const { return maxSize; };

	int currentSize()const { return animals.size(); };

	void addAnimal(Animal* animal) {
		if (animal->getName() == "") throw new NameException("Empty name", animal->getName());
		if (animal->getPredatory()) {
			for (auto i : animals)
			{
				if (i->getPredatory() == false) throw new PredatorException("Predator Exception", animal->getName());
			}
		}
		if (this->currentSize()==maxSize) throw new MaxCapacityException("Max capacity reached", maxSize);
		
		animals.push_back(animal);
	}
	void delAnimal(int index) {
		if (index > 0 && index <= animals.size()) {
			delete animals[index - 1];
			animals.erase(animals.begin() + index - 1);
		}
	}

	void showInfo()const {
		for (int i = 0; i < animals.size(); i++)
		{
			if (typeid(*animals[i]) == typeid(Fish)) {
				cout << "------Fish------" << endl;
			}
			else if (typeid(*animals[i]) == typeid(Bird)) {
				cout << "------Bird------" << endl;
			}
			else if (typeid(*animals[i]) == typeid(Mammal)) {
				cout << "------Mammal------" << endl;
			}
			animals[i]->showInfo();
			cout << endl;
		}
		cout << endl;
		cout << "ID: " << id << endl;
		cout << "Max size: "  << maxSize << endl;
		cout << "Current size: " << this->currentSize() << endl;
	}
};

