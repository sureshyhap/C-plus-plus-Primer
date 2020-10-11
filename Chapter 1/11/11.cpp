#include <iostream>

int main(int argc, char* argv[]) {
  int v1 = 0, v2 = 0;
  std::cout << "Enter two integers: " << std::flush;
  std::cin >> v1 >> v2;
  if (v2 < v1) {
    int temp = v2;
    v2 = v1;
    v1 = temp;
  }
  // At this point v1 <= v2
  while (v1 <= v2) {
    std::cout << v1 << std::endl;
    ++v1;
  }
  return 0;
}
