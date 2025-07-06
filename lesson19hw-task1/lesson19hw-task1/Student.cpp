#include "Student.h"

Student::Student()
{
	strcpy_s(m_fullname, 100, "StudentDef");
	m_avg_grade = 0;
	strcpy_s(m_school, 50, "SchoolDef");
	m_group_number = 0;

	cout << "Default student created: " << m_fullname << endl;
	showInfo();

}

Student::Student(const char* fullname, float avg_grade, const char* school, int group_number) {

	strcpy_s(m_fullname, 100, fullname);
	m_avg_grade = avg_grade;
	strcpy_s(m_school, 50, school);
	m_group_number = group_number;

	cout << "Student successfully created!" << endl << endl;
	showInfo();

}

Student::~Student()
{
	cout << "Student deleted: " << m_fullname << endl;
}



const char* Student::getFullname()
{
	return m_fullname;
}

float Student::getAvgGrade()
{
	return m_avg_grade;
}

const char* Student::getSchool()
{
	return m_school;
}

int Student::getGroupNumber()
{
	return m_group_number;
}



void Student::setFullname(const char* fullname)
{
	strcpy_s(m_fullname, 100, fullname);
}

void Student::setAvgGrade(float avg_grade)
{
	if (avg_grade > 12 || avg_grade < 0) {
		cout << "Error: invalid grade" << endl;
	}
	else {
		m_avg_grade = avg_grade;
	}
	
}

void Student::setSchool(const char* school)
{
	strcpy_s(m_school, 50, school);
}

void Student::setGroupNumber(int group_number)
{
	m_group_number = group_number;
}



void Student::showInfo()
{
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "| Full name:        " << m_fullname << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "| Grade: " << m_avg_grade << endl;
	cout << "| School: " << m_school << endl;
	cout << "| Group: " << m_group_number << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
}


