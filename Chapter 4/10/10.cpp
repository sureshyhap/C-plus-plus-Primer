#include <iostream>

int main(int argc, char* argv[]) {
  int num = 0;
  while (num != 42) {
    std::cout << "Enter a number: ";
    std::cin >> num;
  }
  return 0;
}
