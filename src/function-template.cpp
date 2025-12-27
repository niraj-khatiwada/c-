#include <iostream>

template <typename T, typename U>
auto max(T a, U b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout << max(1, 2) << "\n";
    std::cout << max(1.2, 2.2) << "\n";
    std::cout << max('A', 'B') << "\n";

    std::cout << max('A', 64) << "\n";
    std::cout << max(1, 2.2) << "\n";
}
