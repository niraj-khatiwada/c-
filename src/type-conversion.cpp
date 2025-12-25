#include <iostream>

int main()
{
    // int to double
    double integer = 3;        // implicit conversion
    auto _integer = (double)3; // explicit conversion

    // double to int
    int d = 3.14;
    auto _d = (int)3.14;

    double x = (int)3.14;
    std::cout << x << " " << typeid(x).name() << "\n";

    // char to int
    int ch = 'A';
    std::cout << ch << "\n";

    return 0;
}