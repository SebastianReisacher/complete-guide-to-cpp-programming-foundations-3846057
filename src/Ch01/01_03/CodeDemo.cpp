// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << std::endl << std::endl;
    std::cout << "Your name is " << name << '.' << std::endl;
    
    return 0;
}