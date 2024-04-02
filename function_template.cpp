#include <iostream>

// overloaded functions
// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }

// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }

// template <typename T>
template <typename T, typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(3, 5) << std::endl;
    std::cout << max(3.23, 5.34) << std::endl;
    std::cout << max(2, 5.34) << std::endl;
    return 0;
}
