// Complete Guide to C++ Programming Foundations
// Exercise 01_03
// Text-Input; ReisacherSebastian

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Please enter your name: " <<std::flush;       //std::flush ensure that text is sent to terminal before the next line is printed
    std::cin >> name;

    std::cout << std::endl << std::endl;
    std::cout << "Your name is " << name << '.' << std::endl;

    return 0;
}