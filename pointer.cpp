#include <iostream>

int main()
{
    // & address-of operator
    // * dereference operator
    
    std::string name = "Pranta";
    int age = 30;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << std::endl;
    std::cout << pAge << std::endl;
    std::cout << pFreePizzas << std::endl;
    std::cout << *pName << std::endl;

    return 0;
}
