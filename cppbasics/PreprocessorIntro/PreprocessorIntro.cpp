// PreprocessorIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MY_NAME "Tommy"
#define PRINT_JOE

int main()
{
    std::cout << "My name is: " << MY_NAME;

#ifdef PRINT_JOE
    std::cout << "\nJOE\n";
#endif PRINT_JOE

#ifdef PRINT_BOB
    std::cout << "\nJOE\n";
#endif PRINT_BOB
}


