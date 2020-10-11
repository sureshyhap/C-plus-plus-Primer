#include <iostream>

int main(int argc, char* argv[]) {
  int i = 5, j = 10, *p = &i;
  std::cout << *p << std::endl;
  p = &j;
  std::cout << *p << std::endl;
  *p = 20;
  std::cout << *p << std::endl;
  return 0;
}
