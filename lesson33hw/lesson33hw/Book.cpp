#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string name, string author, int year, string summary)
    : Publication(name, author, year), summary(summary) {}

string Book::getSummary() const {
    return summary;
}

void Book::setSummary(string summary) {
    this->summary = summary;
}

void Book::showInfo() const {
    cout << "Name: " << name << "\nAuthor: " << author
        << "\nYear of Publication: " << year << "\nSummary: " << summary << endl;
}
