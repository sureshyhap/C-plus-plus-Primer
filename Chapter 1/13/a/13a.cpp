#include <iostream>

int main(int argc, char* argv[]) {
  int sum = 0;
  for (int i = 50; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "The sum from 50 to 100 = " << sum << std::endl;
  return 0;
}
