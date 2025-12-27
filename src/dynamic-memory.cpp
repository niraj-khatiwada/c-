#include <iostream>

int main()
{
    // Dynamically allocate a size.
    std::cout << "Enter a size: " << "\n";
    std::string size;
    std::getline(std::cin, size);
    int sizeint = std::stoi(size);

    std::string *grades = nullptr;
    grades = new std::string[sizeint]; // allocates the memory on heap instead of stack

    for (int i = 0; i < sizeint; i++)
    {
        std::cout << "Enter grade #" << i + 1 << "\n";
        std::getline(std::cin, grades[i]);
    }

    for (int i = 0; i < sizeint; i++)
    {
        std::cout << grades[i] << " ";
    }
    std::cout << "\n";

    delete[] grades; // make sure to delete the memory to free up.
}