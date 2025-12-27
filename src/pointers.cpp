#include <iostream>

int main()
{
    std::string name = "Niraj";
    std::string *pName = &name;

    std::cout << name << "\n";
    std::cout << *pName << "\n";

    *pName = "Suraj";

    std::cout << name << "\n";
    std::cout << *pName << "\n";

    std::string foods[2] = {"A", "B"};
    std::string *pFoods = foods; // we don't need to give & here since array is already a pointer

    pFoods[1] = "C";

    for (int i = 0; i < 2; i++)
    {
        std::cout << foods[i] << "\n";
        std::cout << pFoods[i] << "\n";
    }
}