#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Student{

	char m_fullname[100];
	float m_avg_grade;
	char m_school[50];
	int m_group_number;

public:
	
	Student(); 
	Student(const char* fullname, float avg_grade, const char* school, int group_number);
	~Student();

	const char* getFullname();
	float getAvgGrade();
	const char* getSchool();
	int getGroupNumber();
	
	void setFullname(const char* fullname);
	void setAvgGrade(float avg_grade);
	void setSchool(const char* school);
	void setGroupNumber(int group_number);


	void showInfo();

};

