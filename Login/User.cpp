#include "User.h"

User::User(const std::string &username, const std::string &password) {
	this->username = username;
	this->password = password;
}

std::string User::getUserName() {
	return username;
}

std::string User::getPassword() {
	return password;
}
