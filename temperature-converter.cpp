#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "******** Temperature Conversion ****************" << std::endl;

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: " << std::endl;
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: " << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << unit << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << unit << std::endl;
    }
    else
    {
        std::cout << "Please enter only C or F";
    }

    std::cout << "************************************************" << std::endl;
    return 0;
}
