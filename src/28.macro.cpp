#include <iostream>

// imagine macros like search and replace; the compiler will just replace the defined variables with the value on the right side of macro definition

#define DEBUG true
#define PI 3.1415
#define AREA(r) (PI * std::pow(r, 2)) // macros do not perform typechecking unlike templates

int main() {
#ifdef DEBUG
  std::cout << "Debug mode is ON" << "\n";
#endif

  std::cout << PI << "\n";

// conditional compilation using #ifdef and #endif
// calculate area only if PI macro is defined
#ifdef PI

  double area = AREA(2);
  std::cout << area << "\n";
#endif
  return 0;
}
