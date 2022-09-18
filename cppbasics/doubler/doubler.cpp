// doubler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getInputFromUser()
{
    
    std::cout << "Please enter a number: ";
    int number{};
    std::cin >> number;
    return number;
}

void printDouble(int number)
{
    std::cout << number << " doubled is " << number * 2;
}

int main()
{
    int userInput{ getInputFromUser() };
    printDouble(userInput);
    return 0;
}
