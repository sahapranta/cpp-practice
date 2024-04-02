#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::getline(std::cin >> std::ws, name); // std::ws to remove whitespace if any

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "Your are " << age << " years old" << std::endl;

    return 0;
}
