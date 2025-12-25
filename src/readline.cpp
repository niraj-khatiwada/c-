#include <iostream>

int main()
{

    std::string name;
    std::cout << "What's your name?" << "\n";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "\n";

    std::string age;
    std::cout << "What's your age?" << "\n";
    std::getline(std::cin, age);
    int _age = std::stoi(age);
    std::cout << "You're " << _age << " years old." << "\n";

    return 0;
}