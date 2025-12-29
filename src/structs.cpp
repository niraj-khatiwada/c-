#include <iostream>

struct Person
{
    std::string name;
    int age;
    bool is_active = true; // default value
};
void print_person(const Person person);
void print_person2(const Person &person);

int main()
{
    Person person;
    person.name = "Niraj";
    person.age = 27;
    std::cout << "Person address = " << &person << "\n";

    print_person(person);
    print_person2(person);
}

void print_person(const Person person) // struct here is passed by value
{
    std::cout << &person << "\n";
    std::cout << person.name << "\n";
    std::cout << person.age << "\n";
    std::cout << person.is_active << "\n";
}
void print_person2(const Person &person) // struct here is passed by reference
{
    std::cout << &person << "\n";
    std::cout << person.name << "\n";
    std::cout << person.age << "\n";
    std::cout << person.is_active << "\n";
}