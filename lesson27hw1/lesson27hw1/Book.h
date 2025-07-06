#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Date.h"
using namespace std;
class Book
{
protected:
	string m_author;
	string m_edition;
	Date m_publicationDate;
	unsigned long long int m_isbn;
public:
	Book();
	Book(string author, string edition, Date publicationDate);

	void setAuthor(string author);
	void setEdition(string edition);
	void setPublicationDate(Date publicationDate);

	string getAuthor()const;
	string getEdition()const;
	Date getPublicationDate()const;
	unsigned long long int getISBN()const;
	void showBook()const;

};

