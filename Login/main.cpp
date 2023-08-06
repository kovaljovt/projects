#include "UserManagement.h"

int main() {
	UserManagement userManager;

	int option;

	do {
		std::cout << "--- LOGIN SYSTEM --- \n" << '\n';
		std::cout << "1. Register User " << '\n';
		std::cout << "2. Login" << '\n';
		std::cout << "3. Show User List" << '\n';
		std::cout << "4. Search User" << '\n';
		std::cout << "5. Delete a User" << '\n';
		std::cout << "0. Exit" << '\n' << '\n';
		std::cout << "Enter your choice: \n";
		std::cin >> option;
		switch (option) {
			case 1:
				userManager.registerUser();
				break;
			case 2: {
				std::cout << '\n';
				std::string username;
				std::string password;
				std::cout << "Enter username: \n";
				std::cin >> username;
				std::cout << "Enter password: \n";
				std::cin >> password;
				userManager.loginUser(username, password);
				break;
			}
			case 3:
				userManager.showUserList();
				break;
			case 4: {
				std::string username;
				std::cout << "Enter username: \n";
				std::cin >> username;
				userManager.searchUser(username);
				break;
			}
			case 5: {
				std::string username;
				std::cout << "Enter username: \n";
				std::cin >> username;
				userManager.deleteUser(username);
				break;
			}
			case 0:
				std::cout << "Thank you for visiting." << '\n';
				break;
			default:
				std::cout << "Error: Invalid option!" << '\n';
				break;
		}
	} while (option != 0);

	return 0;
}