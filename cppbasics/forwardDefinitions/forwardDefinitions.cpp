// forwardDefinitions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// this is a forward definition
// allows compiler to be aware of identifier before it is actually defined

// one definition rule
/*
1. Within a given file, a function, variable, type, or template can only have one definition.
2. Within a given program, a variable or normal function can only have one definition.
3. Types, templates, inline functions, and inline variables are allowed to have identical definitions in different files.
*/
int add(int x, int y);

int main()
{
    std::cout << "sum: " << add(3, 4);
}

int add(int x, int y) {
    return x + y;
}

