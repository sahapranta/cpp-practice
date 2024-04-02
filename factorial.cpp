#include <iostream>

int factorial(int num);

int main()
{
    std::cout << factorial(10);

    return 0;
}

int factorial(int num)
{
    // iterative approach
    // int result = 1;

    // for (int i = 1; i <= num; i++)
    // {
    //     result = result * i;
    // }

    // return result;

    // recursive approach
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}
