#include "Book.h"

Book::Book()
{
    
    m_author ="";
    m_edition="";
    m_publicationDate;
    m_isbn = rand() % (999999 - 100000 + 1) + 100000; //(b-a+1)+a
}

Book::Book(string author, string edition, Date publicationDate)
{
    
    m_author = author;
    m_edition = edition;
    m_publicationDate = publicationDate;
    m_isbn = rand() % (999999 - 100000 + 1) + 100000;
}

void Book::setAuthor(string author)
{
    m_author = author;
}

void Book::setEdition(string edition)
{
    m_edition = edition;
}

void Book::setPublicationDate(Date publicationDate)
{
    m_publicationDate = publicationDate;
}

string Book::getAuthor() const
{
    return m_author;
}

string Book::getEdition() const
{
    return m_edition;
}

Date Book::getPublicationDate() const
{
    return m_publicationDate;
}

unsigned long long int Book::getISBN() const
{
    return m_isbn;
}

void Book::showBook() const
{
    cout << "Author: " << m_author << endl;
    cout << "Edition: " << m_edition << endl;
    cout << "Publication date: " << m_publicationDate << endl;
    cout << "ISBN: " << m_isbn << endl;
}
