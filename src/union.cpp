#include <iostream>

union Pointer {
  int x;
  int y;
};

union Pointer2 {
  double x;
  int ar[2];
  int arr[2];
};

int main() {
  // A union allocates memory equal to the size of the largest data type within
  // the members
  // A union shares the value of same data type members
  // for eg: if there're 2 members of int/double, setting value for one member
  // will set the value for other one as well.
  Pointer p;

  std::cout << sizeof(p)
            << "\n"; // this will be 4 bytes. if it was struct, it would've been
                     // 8 bytes (2 * 4 bytes(integer))

  p.x = 10;

  std::cout << p.x << "\n";
  std::cout << p.y << "\n"; // both x and y member is shared here so the value
  // of y will also be same as x

  p.y = 11;

  // now, both x and y will have value 11.
  std::cout << p.x << "\n";
  std::cout << p.y << "\n";

  Pointer2 p2;
  p2.arr[0] = 1;
  p2.arr[1] = 2;

  for (int i = 0; i < 2; i++) {
    std::cout << p2.ar[i] << " | " << p2.arr[i] << "\n";
  }
}
