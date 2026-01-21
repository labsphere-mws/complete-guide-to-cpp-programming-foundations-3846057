// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool dayTime;
    a = 7;
    dayTime = false;
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "dayTime is: " << dayTime << std::endl;
    dayTime = true;
    std::cout << "dayTime is: " << dayTime << std::endl;
    std::cout << "a + b: " << a + b << std::endl;
    std::cout << "b - a: " << b - a << std::endl;
    unsigned int pos;
    pos = b - a;
    std::cout << "pos (b - a(unsigned)): " << pos << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
