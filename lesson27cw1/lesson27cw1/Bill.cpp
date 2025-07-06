#include "Bill.h"

Bill::Bill()
{
}

Bill::Bill(Buy b) : Buy(b)
{
}

void Bill::printBill(string fileName)
{
	ofstream file(fileName);
	if (file.is_open()) {
		file << "======================" << endl;
		file << "Product: " << this->getName() << endl;
		file << "Price: " << this->getPrice() << endl;
		file << "Weight: " << this->getWeight() << endl;
		file << "======================" << endl;
		file << "Amount: " << this->getAmount() << endl;
		file << "Total Cost: " << this->calcTotalCost() << endl;
		file << "Total Weight: " << this->calcTotalWeight() << endl;
		file.close();
	}
}
