// multiFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// forward declaration works here as well, linker will find that function in other file and use it
int add(int x, int y);

int main()
{
    std::cout << "Sum of 3 and 4 is " << add(3,4);
}

