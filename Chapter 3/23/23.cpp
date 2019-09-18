#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v{4, 7, 1, 6, 23, 5, 2, 3, 7, 8};
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    *it = (*it) * 2;
  }
  for (auto element : v) {
    std::cout << element << " ";
  }
  return 0;
}
