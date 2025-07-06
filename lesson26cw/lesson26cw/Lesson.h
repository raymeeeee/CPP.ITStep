#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lesson
{
protected:
	string m_theme;
	string m_description;
private:
	string m_homework;
public:
	Lesson();
	Lesson(string theme, string description, string homework);
	~Lesson();

	void setTheme(string theme);
	void setDescription(string description);
	void setHomework(string homework);

	string getTheme()const;
	string getDescription()const;
	string getHomework()const;

	void showLesson()const;
};

