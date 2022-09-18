// iostreaminto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << "\n";
    return 0;
}


