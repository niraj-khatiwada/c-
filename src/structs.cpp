#include <iostream>

struct Person {
  std::string name;
  int age;
  bool is_active = true; // default value
};
void print_person(const Person person);
void print_person2(const Person& person);

// alias for struct
// instead of writing Point everywhere, you can just use P
typedef struct Point {
  int x;
  int y;

  void log_point() { std::printf("(%d, %d)\n", x, y); }
} P;

// struct vs class
// struct also supports public and private access modifiers like C++
// - *struct has public access by default whereas class has private
// - struct also supports constructor just like class
// - struct can also inherit from a parent struct just like class
int main() {
  Person person;
  person.name = "Niraj";
  person.age = 27;
  std::cout << "Person address = " << &person << "\n";

  print_person(person);
  print_person2(person);

  // Different ways to initialize a struct
  // Struct initialization method 1
  // struct Point point; // you can even write "struct" at the beginning but
  // it's optional in C++. It's required in C.
  Point point;
  point.x = 10;
  point.y = 100;

  // Struct initialization method 2
  P p; // P is an alias of Point
  p.x = 10;
  p.y = 100;

  std::printf("%d %d\n", p.x, p.y);

  // Struct initialization method 3
  P p2 = {10, 100}; // must be in same order
  std::printf("%d %d\n", p2.x, p2.y);

  // Struct initialization method 4
  Point point2 = {.x = 10, .y = 100};
  std::printf("%d %d\n", point2.x, point2.y);

  point2.log_point();
}

void print_person(const Person person) // struct here is passed by value
{
  std::cout << &person << "\n";
  std::cout << person.name << "\n";
  std::cout << person.age << "\n";
  std::cout << person.is_active << "\n";
}
void print_person2(const Person& person) // struct here is passed by reference
{
  std::cout << &person << "\n";
  std::cout << person.name << "\n";
  std::cout << person.age << "\n";
  std::cout << person.is_active << "\n";
}