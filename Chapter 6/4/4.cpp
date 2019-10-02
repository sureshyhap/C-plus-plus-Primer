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

int factorial(int n) {
  try {
    if (n < 0) {
      throw std::runtime_error("Factorial only works with nonnegative values.");
    }
    if (n < 2) {
      return 1;
    }
    int fact = 1;
    for (; n > 1; --n) {
      fact *= n;
    }
    return fact;
  }
  catch (const std::runtime_error& re) {
    std::cerr << re.what() << std::endl;
    exit(1);
  }
}
