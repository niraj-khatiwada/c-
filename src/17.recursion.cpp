#include <iostream>

int factorial(int x);

int main() {
  std::cout << factorial(5) << "\n";
}

int factorial(int x) {
  if (x == 1) {
    return 1;
  }
  return x * factorial(x - 1);
}