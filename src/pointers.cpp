#include <iostream>

int sum_and_increment_by_1(int* a, int* b) {
  int result = *a + *b;
  (*a)++;
  (*b)++;
  return result;
}

struct Point {
  int x;
  int y;

  void log_point() { std::printf("(%d, %d)\n", x, y); }
};

int main() {
  // Reference points the value within the address
  // Pointer points the address in memory.
  // learn `./reference.cpp` first
  int a = 100;
  int* b = &a;

  std::cout << b << " | " << &a << "\n";
  std::cout << *b << " | " << a << "\n";

  int c = 200;
  b = &c; // b was the address to a. now, we changed b to address of c.
          // that means, &a is detached from b and b holds a new pointer.
          // unlike reference which changes the value in address of a, we
          // changed the address completely not the value within the address

  std::cout << b << " | " << &c << "\n";
  std::cout << *b << " | " << c << "\n";

  *b = 201; // here, we're changing the actual value within the address not the
            // address itself

  std::cout << b << " | " << &c << "\n";
  std::cout << *b << " | " << c << "\n";

  sum_and_increment_by_1(&c, b);

  std::cout << *b << " | " << c << "\n";

  std::string name = "Niraj";
  std::string* pName = &name;

  std::cout << name << "\n";
  std::cout << *pName << "\n";

  *pName = "Suraj";

  std::cout << name << "\n";
  std::cout << *pName << "\n";

  std::string foods[2] = {"A", "B"};
  std::string* pFoods =
      foods; // we don't need to give & here since array
             // decays into a pointer to its first element i.e. compiler
             // implicitly converts foods to &foods[0]

  pFoods[1] = "C";

  for (int i = 0; i < 2; i++) {
    std::cout << foods[i] << "\n";
    std::cout << pFoods[i] << "\n";
  }

  Point p = {.x = 10, .y = 100};
  Point* ptr = &p;

  // there're 2 ways to access the struct members from pointer
  // method 1:

  std::cout << (*ptr).x << "\n";
  (*ptr).x = 11;
  (*ptr).log_point();

  // method 2: preferred
  // we can use -> instead of . for pointer to access struct members
  // -> means implicit dereferencing i.e ptr->y is same as *(ptr).y
  std::cout << ptr->x << "\n";
  ptr->y = 101;
  ptr->log_point();
}