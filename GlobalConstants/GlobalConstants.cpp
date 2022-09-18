// GlobalConstants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "constants_old_way.h"

int main()
{
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';
}

