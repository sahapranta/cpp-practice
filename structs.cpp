#include <iostream>

struct Car
{
    std::string model;
    std::string color;
    int year;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.color = "Blue";
    car1.year = 2023;

    car2.model = "Corvette";
    car2.color = "Silver";
    car2.year = 2024;

    paintCar(car1, "Golden");
    printCar(car1);
    
    paintCar(car2, "Space Gray");
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    std::cout << car.model << std::endl;
    std::cout << car.color << std::endl;
    std::cout << car.year << std::endl;
}

void paintCar(Car &car, std::string color)
{
    car.color = color;
}
