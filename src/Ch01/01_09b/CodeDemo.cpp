// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "ENTER YOUR NAME NOW! (plz): " << std::flush;
    std::cin >> name;
    std::cout << "HELLO " << name << "! NICE TO MEET YOU!";

    std::cout << std::endl << std::endl;
    return 0;
}