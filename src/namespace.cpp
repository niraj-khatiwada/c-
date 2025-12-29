#include <iostream>

namespace first {
int x = 1;

int main() { return 100; }
} // namespace first

int main() {

  std::cout << first::x << "\n";
  std::cout << first::main() << "\n";
  return 0;
}