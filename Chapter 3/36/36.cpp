#include <iostream>
#include <vector>

bool comp(int* first, int* second);

int main(int argc, char* argv[]) {
  int a[7] = {4, 5, 2, 8, 4, 6, 1};
  int b[7] = {4, 5, 2, 8, 4, 6, 1};
  int c[7] = {67, 2, 7, 7, 1, 5, 4};
  int d[5] = {};
  //std::cout << comp(a, d);
  std::vector<int> v1 = {4, 7, 2}, v2(10, 2);
  if (v1 == v2) {
    std::cout << true;
  }
  else {
    std::cout << false;
  }
  return 0;
}

bool comp(int* first, int* second) {
  size_t length1 = sizeof(first) / sizeof(int);
  size_t length2 = sizeof(second) / sizeof(int);
  if (length1 != length2) {
    return false;
  }
  for (size_t i = 0; i < length1; ++i) {
    if (first[i] != second[i]) {
      return false;
    }
  }
  return true;
}
