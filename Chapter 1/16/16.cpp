#include <iostream>

int main(int argc, char* argv[]) {
  int sum = 0, val = 0;
  while (std::cin >> val) {
    sum += val;
  }
  std::cout << "The sum = " << sum << std::endl;
  return 0;
}
