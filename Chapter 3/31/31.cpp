#include <iostream>

int main(int argc, char* argv[]) {
  int a[10];
  for (size_t i = 0; i < 10; ++i) {
    a[i] = i;
  }
  for (auto elem : a) {
    std::cout << elem << " ";
  }
  return 0;
}
