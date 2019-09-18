#include <iostream>
#include <vector>
#include <iterator>

int main(int argc, char* argv[]) {
  int a[] = {4, 2, 7, 5, 89, 9, 1, 2, 4, 3};
  std::vector<int> v(std::begin(a), std::end(a));
  for (int elem : v) {
    std::cout << elem << " ";
  }
  return 0;
}
