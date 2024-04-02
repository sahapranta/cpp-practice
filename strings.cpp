#include <iostream>

int main()
{
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    if (name.length() > 10)
    {
        std::cout << "Your name can't exceed 10 characters";
    }
    else
    {
        // name.clear();
        // name.erase(0, 1);
        name.append("@gmail.com");
        name.insert(0, 1, '&');

        std::cout << "Welcome, " << name << std::endl;

        // std::cout << name.at(1) << std::endl;
        // std::cout << name.find(' ') << std::endl;
    }

    int number;

    do
    {
        std::cout << "Enter a positive number #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number << std::endl;

    return 0;
}
