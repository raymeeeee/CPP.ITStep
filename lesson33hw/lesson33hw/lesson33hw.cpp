#include "Library.h"

int main()
{

    Library l("ITstep");
    vector<string> articles;
    articles.push_back("Some cool article");
    articles.push_back("Some cool article");
    articles.push_back("Some cool article");
    try { l.addPublication(new Book("name", "author", -1, "cool book")); }
    catch (PublicationException* obj) {
        cout << obj->message() << endl; delete obj;
    }
    try { l.addPublication(new Book("", "author", 2024, "cool book")); }
    catch (PublicationException* obj) {
        cout << obj->message() << endl; delete obj;
    }
    l.addPublication(new Magazine("name", "author", 2024, { "Some cool article" ,"Some cool article" ,"Some cool article" }));
    l.addPublication(new Magazine("name", "author", 2024, articles));
    l.addPublication(new Book("name", "author", 2024, "cool book"));
    //l.findPublication("name");

    Book book1("name", "author", 2024, "cool book");
    //cout << endl;
    //cout << endl;
    //book1.showInfo();

    l.showInfo();
    l.~Library();
}

