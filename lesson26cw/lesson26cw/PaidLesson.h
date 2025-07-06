#pragma once
#include "Lesson.h"
class PaidLesson : public Lesson
{
protected:
	float m_price;
public:
	PaidLesson();
	PaidLesson(string theme, string description, string homework, float price);
	~PaidLesson();

	void setPrice(float price);
	float getPrice()const;

	void showLesson()const;
};

