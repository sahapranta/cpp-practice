#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    std::cout << "Enter side C: ";
    std::cin >> c;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "side c: " << c << std::endl;
    return 0;
}
