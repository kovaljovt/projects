#include "ATM.h"

ATM::ATM(int bal) : balance(bal) {}

void ATM::getBalance() const {
	std::cout << "Your balance is: " << balance << '\n';
}

bool ATM::withdraw(int amount) {
	if (amount > balance) {
		return false;
	}
	balance -= amount;
	std::cout << "Your balance is: " << balance << '\n';
	return true;
}

void ATM::deposit(int amount) {
	balance += amount;
	std::cout << "Your balance is: " << balance << '\n';
}



