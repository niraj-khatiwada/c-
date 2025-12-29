#include <iostream>

int main() {
  // Reference points the value within the address
  // Pointer points the address in memory.
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
}