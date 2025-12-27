#include <iostream>

void swap(std::string &a, std::string &b);
void log(const std::string &a, const std::string &b);

int main()
{
    std::string name = "Niraj";

    // address of name
    std::cout << &name << "\n";

    std::string name2;
    name2 = name;
    name = "Suraj";

    std::cout << name << " | " << name2 << "\n";

    std::string a = "A";
    std::string b = "B";
    swap(a, b);

    std::cout << a << " | " << b << "\n";

    log(a, b);
}

// pass by reference
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

// const parameter: make parameter read only
void log(const std::string &a, const std::string &b)
{
    // a = "asas"; // ❌
    // b = "asas"; // ❌
    std::cout << a << "\n";
    std::cout << b << "\n";
}