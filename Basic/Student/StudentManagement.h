#ifndef PROJECTS_STUDENTMANAGEMENT_H
#define PROJECTS_STUDENTMANAGEMENT_H

#include "Student.h"

#include <vector>

class StudentManagement {
private:
	std::vector<Student> students = {};

public:
	void addNewStudent();

	void displayStudents();

	void searchStudent();

	void updateStudent();

	void deleteStudent();
};

#endif
