#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v{4, 8, 5, 1, 2, 5, 3, 5, 7};
  int size = v.size();
  int a[size] = {};
  for (int i = 0; i < size; ++i) {
    a[i] = v[i];
  }
  for (int elem : a) {
    std::cout << elem << " ";
  }
  return 0;
}
