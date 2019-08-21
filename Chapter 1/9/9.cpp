#include <iostream>

int main(int argc, char* argv[]) {
  int sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  std::cout << "The sum from 50 to 100 = " << sum << std::endl;
  return 0;
}
