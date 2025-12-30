#include <iostream>

// alias for struct
// instead of writing Point everywhere, you can just use P
typedef struct Point {
  int x;
  int y;

  void log_point() { std::printf("(%d, %d)\n", x, y); }
} P;

int main() {
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
