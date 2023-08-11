#include "Student.h"

Student::Student(int stdRollNumber, int stdAge, std::string stdName) {
	this->rollNumber = stdRollNumber;
	this->age = stdAge;
	this->name = stdName;
}

void Student::setRollNumber(int stdRollNumber) {
	rollNumber = stdRollNumber;
}

int Student::getRollNumber() {
	return rollNumber;
}

void Student::setAge(int stdAge) {
	age = stdAge;
}

int Student::getAge() {
	return age;
}

void Student::setName(std::string stdName) {
	name = stdName;
}

std::string Student::getName() {
	return name;
}
