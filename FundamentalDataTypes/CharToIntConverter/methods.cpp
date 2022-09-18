#include "methods.h"
#include <iostream>

char getCharacter() {
	std::cout << "Please enter a single character: ";

	char c{};
	std::cin >> c;
	return c;
}

void printIntValueOfCharacter(char c) {
	std::cout << "The integer value of " << c << " is " << static_cast<int>(c);
}