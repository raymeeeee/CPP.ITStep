#include "Lesson.h"

Lesson::Lesson()
{
    m_theme = "undefined";
    m_description = "undefined";
    m_homework = "undefined";
    cout << "Lesson()" << endl;
}

Lesson::Lesson(string theme, string description, string homework)
{
    m_theme = theme;
    m_description = description;
    m_homework = homework;
    cout << "Lesson(t,d,h)" << endl;
}

Lesson::~Lesson()
{
    cout << "~Lesson()" << endl;
}

void Lesson::setTheme(string theme)
{
    m_theme = theme;
}

void Lesson::setDescription(string description)
{
    m_description = description;

}

void Lesson::setHomework(string homework)
{
    m_homework = homework;

}

string Lesson::getTheme() const
{
    return m_theme;
}

string Lesson::getDescription() const
{
    return m_description;
}

string Lesson::getHomework() const
{
    return m_homework;
}

void Lesson::showLesson() const
{
    cout << "Theme: " << m_theme << endl;
    cout << "Description: " << m_description << endl;
    cout << "Homework: " << m_homework << endl;
}
