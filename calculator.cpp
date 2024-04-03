#include <iostream>
#include <vector>
#include <sstream>

bool isInteger(double n);
double num(double n);

int main()
{
    double num1 = 0, num2 = 0;
    std::string calc = "";
    std::vector<std::string> vecCalc;

    std::cout << "Enter Calculating (ex. 5 + 6) : ";
    std::getline(std::cin, calc);

    char space = ' ';

    if (calc.find(' ') == std::string::npos)
    {
        std::cout << "Invalid! Please add a space between operator." << std::endl;
        return 0;
    }

    std::stringstream ss(calc);
    std::string indStr;

    while (std::getline(ss, indStr, space))
    {
        vecCalc.push_back(indStr);
    }

    num1 = std::stod(vecCalc[0]);
    num2 = std::stod(vecCalc[2]);
    std::string operation = vecCalc[1];

    std::cout << "Result: ";
    switch (operation[0])
    {
    case '+':
        std::cout << num(num1) << " + " << num(num2) << " = " << num(num1 + num2);
        break;
    case '-':
        std::cout << num(num1) << " - " << num(num2) << " = " << num(num1 - num2);
        break;
    case '*':
        std::cout << num(num1) << " * " << num(num2) << " = " << num(num1 * num2);
        break;
    case '%':
        std::cout << num(num1) << " % " << num(num2) << " = " << (int)num1 % (int)num2;
        break;
    case '/':
        if (num2 == 0)
            std::cout << "Cannot divide by zero.\n";
        else
            std::cout << num(num1) << " / " << num(num2) << " = " << num(num1 / num2);
        break;
    default:
        std::cout << "Please enter only +, -, *, /\n";
        return 1;
    }

    std::cout << std::endl;

    return 0;
}

bool isInteger(double n)
{
    return std::floor(n) == n;
}

double num(double n)
{
    return isInteger(n) ? static_cast<int>(n) : n;
}
