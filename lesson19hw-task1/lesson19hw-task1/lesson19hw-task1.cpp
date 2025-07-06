#include "Student.h"
	
int main()
{
	Student* student = nullptr;
	student = new Student("Poluektov Danylo", 10.2, "ITstep", 32);

	cout << "Fullname: " << student->getFullname() << endl;
	cout << "Grade: " << student->getAvgGrade() << endl;
	cout << "School: " << student->getSchool() << endl;
	cout << "Group: " << student->getGroupNumber() << endl;
	cout << endl;

	char tmp1[100];
	float tmp2;
	int tmp3;
	cout << "Fullname:" << endl;
	cin >> tmp1;
	student->setFullname(tmp1);
	cout << "Grade:" << endl;
	cin >> tmp2;
	student->setAvgGrade(tmp2);
	cout << "School:" << endl;
	cin >> tmp1;
	student->setSchool(tmp1);
	cout << "Group:" << endl;
	cin >> tmp3;
	student->setGroupNumber(tmp3);
	cout << endl;

	student->showInfo();

	student->~Student();

}
