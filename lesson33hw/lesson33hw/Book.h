#pragma once
#include "Publication.h"

class Book : public Publication {
private:
    string summary;  

public:
    Book(string name, string author, int year, string summary);

    string getSummary() const;
    void setSummary(string summary);

    void showInfo() const override;
};
