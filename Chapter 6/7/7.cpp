#include <iostream>

int count_calls();

int main(int argc, char* argv[]) {
  for (int i = 0; i < 10; ++i) {
    std::cout << count_calls() << " ";
  }
  return 0;
}

int count_calls() {
  static int count = 0;
  return count++;
}
