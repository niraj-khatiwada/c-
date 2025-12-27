#include <iostream>

int main()
{
    int *pointer = nullptr;

    std::cout << (pointer == nullptr) << "\n";

    int x = 100;

    pointer = &x;

    x = 200;

    if (pointer != nullptr)
    {

        std::cout << *pointer << "\n"; // dereferencing a nullptr would be segfault so we need to always perform nullptr check.
    }
}