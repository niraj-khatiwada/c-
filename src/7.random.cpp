#include <iostream>
#include <random>

int main() {
  std::random_device rd;  // seed source/entropy source
  std::mt19937 gen(rd()); // Mersenne Twister (32-bit)

  // random int
  std::uniform_int_distribution<int> randint(1, 100);
  std::cout << randint(gen) << "\n";

  // random double
  std::uniform_real_distribution<double> randreal(0, 1.0);
  std::cout << randreal(gen) << "\n";

  // random bool
  std::bernoulli_distribution randbool(0.5);
  std::cout << randbool(gen) << "\n";
  return 0;
}