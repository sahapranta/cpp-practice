#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << "This person is eating\n";
    }
};

class Car
{
public:
    std::string make;
    std::string model;

    void brake()
    {
        std::cout << "Hard brake: " << model << std::endl;
    }
};

int main()
{
    // OOP
    Human human1;
    Human human2;

    human1.name = "Pranta Saha";
    human1.occupation = "Software Developer";
    human1.age = 30;

    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 17;

    std::cout << human1.name << " " << human1.occupation << " " << human1.age << std::endl;
    std::cout << human2.name << " " << human2.occupation << " " << human2.age << std::endl;

    human1.eat();

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";

    car1.brake();

    return 0;
}
