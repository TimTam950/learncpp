// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "methods.h"
#include <iostream>

int main()
{
    double val1{ getDoubleFromUser() };
    double val2{ getDoubleFromUser() };
    char c{ getOppFromUser() };

    std::cout << "The value of your operation is: " << calculate(c, val1, val2);
}
