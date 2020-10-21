#include "Chapter6.h"
#include <stdexcept>
#include <iostream>

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
