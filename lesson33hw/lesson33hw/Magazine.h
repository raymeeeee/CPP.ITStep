#pragma once
#include "Publication.h"
#include <vector>
class Magazine :
    public Publication
{
protected:
    vector<string> articles;
public:
    Magazine(string name, string author, int year, vector<string> articles) : Publication(name, author, year){
        this->articles = articles;
    };

    vector<string> getArticles() const {
        return articles;
    };
    void addArticle(string article) {
        articles.push_back(article);
    };
    void delArticle(int index) {
        articles.erase(articles.begin() + index);
    };

    void showInfo() const override {
        cout << "Book: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "Articles: " << endl;
        for (int i = 0; i < articles.size(); i++)
        {

            cout << "\tArticle#" << i + 1 << endl;
            cout << articles[i] << endl;
        }
    };
};

