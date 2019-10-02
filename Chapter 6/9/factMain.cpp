#include <iostream>
#include <stdexcept>
#include "Chapter6.h"

int main(int argc, char* argv[]) {
  int num = 0;
  std::cout << "Enter a nonnegative integer: ";
  std::cin >> num;
  int fact = factorial(num);
  std::cout << num << "! = " << fact;
  return 0;
}

