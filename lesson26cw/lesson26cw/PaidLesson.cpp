#include "PaidLesson.h"

PaidLesson::PaidLesson()
{
    //Lesson()
    m_price = 0;
    cout << "PaidLesson()" << endl;
}

PaidLesson::PaidLesson(string theme, string description, string homework, float price)
    :Lesson(theme, description, homework) //best method
{
    //Lesson(t,d,h)
    /*m_theme = theme;
    m_description = description;
    setHomework(homework);*/

    m_price = price;
    cout << "PaidLesson(t,d,h,p)" << endl;
}

PaidLesson::~PaidLesson()
{
    cout << "~PaidLesson()" << endl;
}

void PaidLesson::setPrice(float price)
{
    m_price = price;
}

float PaidLesson::getPrice() const
{
    return m_price;
}

void PaidLesson::showLesson() const
{
    Lesson::showLesson();
    cout << "Price: " << m_price << endl;
}
