/*
  Prediction:
  40 / 4 = 10
  sizeof(p) / 4
  Because it doesnt treat pointers and arrays the same.
 */
#include <iostream>

int main(int argc, char* argv[]) {
  int x[10];
  int* p = x;
  std::cout << sizeof(x) / sizeof(*x) << std::endl;
  std::cout << sizeof(p) / sizeof(*p); // -> 2
  return 0;
}
