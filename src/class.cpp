#include <iostream>

class Person {
private:
  std::string name;
  bool is_active = true;

public:
  void set_name(std::string name) { this->name = name; }
  std::string get_name() { return this->name; }
  bool is_person_active() { return this->is_active; }

  Person() {}
  Person(std::string name, bool is_active = true) {
    this->name = name;
    this->is_active = is_active;
  }
};

int main() {
  Person person;
  person.set_name("Niraj");
  std::cout << person.get_name() << "\n";
  std::cout << person.is_person_active() << "\n";

  Person person2("Niraj");
  std::cout << person2.get_name() << "\n";
  std::cout << person2.is_person_active() << "\n";
}
