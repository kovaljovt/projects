#ifndef PROJECTS_USERMANAGEMENT_H
#define PROJECTS_USERMANAGEMENT_H

#include "User.h"

#include <iostream>
#include <string>
#include <vector>

class UserManagement {
private:
	std::vector<User> users = {};
public:
	void registerUser();

	bool loginUser(const std::string &name, const std::string &pass);

	void showUserList();

	void searchUser(const std::string &username);

	void deleteUser(const std::string &username);
};

#endif
