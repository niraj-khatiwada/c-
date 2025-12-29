#include <iostream>

enum Status
{
    Active,
    Inactive
};

int main()
{
    Status status = Status::Inactive;

    std::cout << status << "\n"; // will print the position
    std::cout << (status == Status::Active) << "\n";
}
