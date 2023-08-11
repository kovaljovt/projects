#include "StudentManagement.h"

#include <iostream>

int main() {
	StudentManagement manager;

	int option;

	do {
		std::cout << "--- STUDENT MANAGEMENT SYSTEM --- \n" << '\n';
		std::cout << "1. Add New Student " << '\n';
		std::cout << "2. Display All Students" << '\n';
		std::cout << "3. Search Student" << '\n';
		std::cout << "4. Update Student" << '\n';
		std::cout << "5. Delete Student" << '\n';
		std::cout << "0. Exit" << '\n' << '\n';
		std::cout << "Enter your choice: \n";
		std::cin >> option;
		switch (option) {
			case 1:
				manager.addNewStudent();
				break;
			case 2:
				manager.displayStudents();
				break;
			case 3:
				manager.searchStudent();
				break;
			case 4:
				manager.updateStudent();
				break;
			case 5:
				manager.deleteStudent();
				break;
			case 0:
				std::cout << "\nGoodbye.\n";
				break;
			default:
				std::cout << "Error: Invalid option!" << '\n';
				break;
		}
	} while (option != 0);

	return 0;
}