#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v{1, 6, 2, 7, 8, 3, 1, 7, 34};
  for (int& elem : v) {
    elem = (elem % 2 != 0) ? 2 * elem : elem;
  }
  for (int elem : v) {
    std::cout << elem << " ";
  }
  return 0;
}
