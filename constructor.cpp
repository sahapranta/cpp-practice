#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gp)
    {
        this->name = name;
        this->age = age;
        gpa = gp;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    std::string color;
    int year;

    Car(std::string make, std::string model, std::string color, int year)
    {
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
    }
};

// overloaded constructor
class Pizza
{
private:
    double price = 50;

public:
    std::string topping1;
    std::string topping2;

    Pizza()
    {
        this->topping1 = "plain";
    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2, double price)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
        setPrice(price);
    }

    // getters
    double getPrice()
    {
        return price;
    }

    void setPrice(double price)
    {
        this->price = price;
    }
};

int main()
{
    Student student1("Pranta", 30, 3.35);

    std::cout << "#1: " << student1.name << " " << student1.age << " " << student1.gpa << std::endl;

    Car car1("Ford", "Mustang", "Red", 2024);

    std::cout << "car 1: " << car1.make << " " << car1.model << " " << car1.color << " " << car1.year << "\n";

    Pizza pizza1("Pepperoni");
    pizza1.setPrice(100);

    Pizza pizza2("mushrooms", "peppers", 310.50);

    Pizza pizza3;

    std::cout << pizza1.topping1 << " " << pizza1.getPrice() << std::endl;
    std::cout << pizza2.topping1 << " " << pizza2.getPrice() << std::endl;
    std::cout << pizza3.topping1 << " " << pizza3.getPrice() << std::endl;

    return 0;
}
