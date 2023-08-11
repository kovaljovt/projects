#ifndef PROJECTS_STUDENT_H
#define PROJECTS_STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
	int rollNumber, age;
	std::string name;

public:
	Student(int stdRollNumber, int stdAge, std::string stdName);

	void setRollNumber(int stdRollNumber);
	int getRollNumber();

	void setAge(int stdAge);
	int getAge();

	void setName(std::string stdName);
	std::string getName();
};

#endif
