#include <iostream>

int absolute(int num);

int main(int argc, char* argv[]) {
  std::cout << absolute(-12);
  return 0;
}

int absolute(int num) {
  return num < 0 ? -num : num;
}
