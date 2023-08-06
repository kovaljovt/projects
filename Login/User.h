#ifndef PROJECTS_USER_H
#define PROJECTS_USER_H

#include <iostream>
#include <string>

class User {
private:
	std::string username, password;
public:
	User(const std::string &name, const std::string &password);

	std::string getUserName();

	std::string getPassword();
};

#endif
