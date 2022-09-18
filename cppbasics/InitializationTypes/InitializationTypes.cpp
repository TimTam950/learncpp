// InitializationTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // copy initialization
    // copies value on right into variable on left side
    // not used much in modern c++
    int width = 5;

    // direct initialization
    // initially introduced or more efficient inits of complex objects
    // not used much in modern cpp
    int width2(5);

    // brace initialization (uniform, list initialization)
    // added unified syntax for inits
    // disallows narrow conversions
    int width3{ 5 };
    int height = { 6 }; // copy brace initialization of 6 into height variable
    int depth{};
}

