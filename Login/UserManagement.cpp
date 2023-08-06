#include "UserManagement.h"

void UserManagement::registerUser() {
	std::cout << '\n';
	std::string username, password;
	std::cout << "Enter username: ";
	std::cin >> username;
	std::cout << "Enter password: ";
	std::cin >> password;
	User newUser(username, password);
	users.push_back(newUser);
	std::cout << "User registered successfully." << '\n';
	std::cout << '\n';
}

bool UserManagement::loginUser(const std::string &username, const std::string &pass) {
	for (auto &user: users) {
		if (user.getUserName() == username && user.getPassword() == pass) {
			std::cout << "User logged in successfully." << '\n';
			std::cout << '\n';
			return true;
		}
	}
	std::cout << "Invalid username or password." << '\n';
	std::cout << '\n';
	return false;
}

void UserManagement::showUserList() {
	for (auto &user: users) {
		std::cout << user.getUserName() << '\n';
	}
	std::cout << '\n';
}

void UserManagement::searchUser(const std::string &username) {
	for (auto &user: users) {
		if (user.getUserName() == username)
			std::cout << "User found." << '\n';
		else
			std::cout << "User not found." << '\n';
	}
}

void UserManagement::deleteUser(const std::string &username) {
	for (int i = 0; i < users.size(); i++) {
		if (users[i].getUserName() == username) {
			users.erase(users.begin() + i);
			std::cout << "User removed successfully." << '\n';
		}
		std::cout << "This user doesn't exist." << '\n';
	}
}