#include "ATM.h"
#include <iostream>
#include <limits> // for input validation

int main() {
	ATM atm(1000);

	int choice;
	std::string option;

	do {
		std::cout << "ATM MACHINE SIMULATOR" << '\n';
		std::cout << '\n';
		std::cout << "1. View Balance" << '\n';
		std::cout << "2. Cash Withdraw" << '\n';
		std::cout << "3. Cash Deposit" << '\n';
		std::cout << "4. EXIT\n" << '\n';
		std::cout << "What would you like to do?\n";

		while (!(std::cin >> choice)) {
			std::cout << "Invalid input. Please enter a valid option: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		switch (choice) {
			case 1:
				atm.getBalance();
				break;
			case 2: {
				int withdrawAmount;
				std::cout << "How much money do you want to withdraw? ";
				while (!(std::cin >> withdrawAmount)) {
					std::cout << "Invalid input. Please enter a valid amount: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				if (atm.withdraw(withdrawAmount)) {
					std::cout << "Withdrawal successful.\n";
				} else {
					std::cout << "Insufficient balance. Withdrawal failed.\n";
				}
				break;
			}
			case 3: {
				int depositAmount;
				std::cout << "How much money do you want to deposit? ";
				while (!(std::cin >> depositAmount)) {
					std::cout << "Invalid input. Please enter a valid amount: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				atm.deposit(depositAmount);
				break;
			}
			case 4:
				std::cout << "Thank you for your visit!" << '\n';
				break;
			default:
				std::cout << "Error: Invalid option\n";
				break;
		}

		std::cout << "Do you want to try another transaction? [Yes/No] ";
		std::cin >> option;

	} while (option == "Yes" || option == "yes");

	return 0;
}
