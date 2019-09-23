#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
  int num = 0, den = 1;
  std::cin >> num >> den;
  try {
    if (den != 0) {
      std::cout << static_cast<double>(num) / den;
    }
    else {
      throw std::runtime_error("Division by 0 is invalid.");
    }
  }
  catch (std::runtime_error re) {
    std::cout << re.what() << std::endl;
  }
  return 0;
}
