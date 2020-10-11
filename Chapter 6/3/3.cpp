#include <iostream>
#include <stdexcept>

int factorial(int n);

int main(int argc, char* argv[]) {
  std::cout << factorial(-1);
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
    return -1;
  }
}
