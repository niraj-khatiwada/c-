#include <iostream>
#include <cmath>

int main()
{

    std::cout << std::max(1, 100) << "\n"; // max
    std::cout << std::min(1, 100) << "\n"; // min
    std::cout << std::floor(10.2) << "\n"; // floor
    std::cout << std::ceil(10.2) << "\n";  // ceil
    std::cout << std::round(10.2) << "\n"; // round
    std::cout << std::pow(2, 8) << "\n";   // power
    std::cout << std::sqrt(64) << "\n";    // square root
    std::cout << std::abs(-64) << "\n";    // absolute
    std::cout << std::log(100) << "\n";    // log base e
    std::cout << std::log2(64) << "\n";    // log base 2
    std::cout << std::log10(100) << "\n";  // log base 10

    // practice: calculate hypotenuse of the triangle
    std::string a;
    std::string b;
    std::cout << "Enter value for a: ";
    std::getline(std::cin, a);
    std::cout << "Enter value for b: ";
    std::getline(std::cin, b);
    double h = std::sqrt(std::pow(std::stod(a), 2) + std::pow(std::stod(b), 2));
    std::cout << "The hypotenuse of triangle is " << h << "\n";
    return 0;
}