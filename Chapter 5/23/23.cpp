#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
  int num = 0, den = 1;
  std::cin >> num >> den;
  std::cout << static_cast<double>(num) / den;
  return 0;
}
