#include <iostream>

template <typename T, typename U>
auto max(T a, U b) {
  return a > b ? a : b;
};

// function templates can also accept non-type arguments like `limit` shown here.
// but this non-type parameter must be a const parameter;
template <typename T, int limit>
auto array_max(T array[], int size) {
  if (size > limit) {
    throw "Size is greater than limit.";
  }
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    };
  };
  return max;
}

int main() {
  std::cout << max(1, 2) << "\n";
  std::cout << max(1.2, 2.2) << "\n";
  std::cout << max('A', 'B') << "\n";

  std::cout << max('A', 64) << "\n";
  std::cout << max(1, 2.2) << "\n";

  std::cout << max<int, double>(1, 2.9) << "\n"; // we can explicitly give the typename as well.

  int array[] = {1, 2, 3};
  const int limit = 2;
  int max = array_max<int, limit>(array, 3); // limit is const so can accept.
  std::cout << max << "\n";
}
