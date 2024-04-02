#include <iostream>

class Animal
{
public:
    std::string name;
    static const bool alive = true;

    Animal(std::string name)
    {
        this->name = name;
    }

    void eat()
    {
        std::cout << name << " is alive" << std::endl;
    }
};

class Dog : public Animal
{
public:
    Dog(std::string name)
        : Animal(name)
    {
    }

    void bark()
    {
        std::cout << name << " is barking" << std::endl;
    }
};

class Cat : public Animal
{
public:
    Cat(std::string name)
        : Animal(name)
    {
    }

    void mew()
    {
        std::cout << name << " meow meow" << std::endl;
    }
};

class Shape
{
public:
    double area;
    double volume;
    static const float PI;

    void print()
    {
        std::cout << "Area: " << this->area << "cm^2" << std::endl;
        std::cout << "Volume: " << this->volume << "cm^3" << std::endl;
    }
};

const float Shape::PI = 3.14159;

class Cube : public Shape
{
public:
    double side;
    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape
{
public:
    double radius;

    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * this->PI * (radius * radius);
        this->volume = (4 / 3.0) * this->PI * (radius * radius * radius);
    }
};

int main()
{
    Dog dog1("Rocky");
    Cat cat1("Moon");

    dog1.eat();
    dog1.bark();
    std::cout << "\n";

    cat1.eat();
    cat1.mew();
    std::cout << "\n";

    Cube cube(10);
    Sphere sphere(4);

    cube.print();
    std::cout << "\n";
    sphere.print();

    return 0;
}
