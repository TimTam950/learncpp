#include "methods.h"
#include <iostream>

double getDoubleFromUser() {
	std::cout << "Enter a double: ";
	double d{};
	std::cin >> d;
	return d;
}

char getOppFromUser() {
	std::cout << "Enter one of the following: +, -, *, or /: *";
	char c{};
	std::cin >> c;
	return c;
}

double calculate(char operation, double val1, double val2) {
	if (operation == '+')
	{
		return val1 + val2;
	}
	else if (operation == '-')
	{
		return val1 - val2;
	}
	else if (operation == '/')
	{
		return val1 / val2;
	}
	else
	{
		return val1 * val2;
	}
}