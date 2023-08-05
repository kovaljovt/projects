#ifndef PROJECTS_ATM_H
#define PROJECTS_ATM_H

#include <iostream>

class ATM {
private:
	int balance;

public:
	explicit ATM(int bal);

	void getBalance() const;
	bool withdraw(int bal);
	void deposit(int bal);
};

#endif
