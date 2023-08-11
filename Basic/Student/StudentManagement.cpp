#include "StudentManagement.h"

void StudentManagement::addNewStudent() {
	std::string name;
	int age;
	int rollNumber;
	std::cout << "\nEnter student's name: \n";
	std::cin >> name;
	std::cout << "Enter student's age: \n";
	std::cin >> age;
	std::cout << "Enter student's roll number: \n";
	std::cin >> rollNumber;
	Student newStudent = {rollNumber, age, name};
	students.emplace_back(newStudent);
	std::cout << "\nStudent added successfully.\n";
	std::cout << '\n';
}

void StudentManagement::displayStudents() {
	std::cout << '\n';
	if (students.empty())
		std::cout << "There are currently no students available." << '\n';
	for (Student student: students) {
		std::cout << student.getName() << '\n';
	}
	std::cout << '\n';
}

void StudentManagement::searchStudent() {
	int rollNum;
	std::cout << "\nEnter roll number of a student, that you want to find: " << '\n';
	std::cin >> rollNum;
	for (Student student: students) {
		if (rollNum == student.getRollNumber()) {
			std::cout << "Student " << student.getName() << " found." << '\n';
		} else {
			std::cout << "Student that you want to find isn't in our database." << '\n';
		}
	}
	std::cout << '\n';
}

void StudentManagement::updateStudent() {
	std::string studentName;
	bool found = false;
	int choice;
	std::cout << "\nEnter student's name to update his/her record: " << '\n';
	std::cin >> studentName;
	for (auto & student : students) {
		if (student.getName() == studentName) {
			found = true;
			std::cout << "--- Student " << student.getName() << " found ---" << '\n';
			std::cout << "1. Update roll number\n";
			std::cout << "2. Update age\n";
			std::cout << "3. Update name\n";
			std::cout << "0. Exit\n";
			std::cin >> choice;
			switch (choice) {
				case 1:{
					int rollNum;
					std::cout << "Enter " << student.getName() << "'s new roll number: \n";
					std::cin >> rollNum;
					student.setRollNumber(rollNum);
					break;
				}
				case 2:{
					int studentAge;
					std::cout << "Enter " << student.getName() << "'s new age: \n";
					std::cin >> studentAge;
					student.setAge(studentAge);
					break;
				}
				case 3:{
					std::string newName;
					std::cout << "Enter " << student.getName() << "'s new name: \n";
					std::cin >> newName;
					student.setName(newName);
					break;
				}
				default:
					std::cout << "Error: Invalid option.\n";
					break;
			}
		}
		if (!found)
			std::cout << "Student not found.\n";
	}
	std::cout << '\n';
}

void StudentManagement::deleteStudent() {
	std::string studentName;
	std::cout << "\nEnter the name of the student, that you want to remove: " << '\n';
	std::cin >> studentName;
	for (int i = 0; i < students.size(); i++) {
		if (students[i].getName() == studentName) {
			students.erase(students.begin() + i);
			std::cout << "Student removed successfully." << '\n';
		} else {
			std::cout << "Student that you want to delete isn't in our database." << '\n';
		}
	}
	std::cout << '\n';
}
