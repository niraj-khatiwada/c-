#include <iostream>

int main() {
  int a = 100;
  int* b = &a;

  std::cout << b << " | " << &a << "\n";
}