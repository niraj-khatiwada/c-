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

    // string to int
    auto agei = std::stoi("100");
    std::cout << agei << "|" << typeid(agei).name() << "\n";

    // string to double
    auto aged = std::stod("100.0");
    std::cout << aged << "|" << typeid(aged).name() << "\n";

    // int to character
    auto ch = (char)65;
    std::cout << ch << "|" << typeid(ch).name() << "\n";

    return 0;
}