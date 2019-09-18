#include <iostream>
#include <iterator>

int main(int argc, char* argv[]) {
  int a[] = {6, 2, 4, 1};
  int* b = std::begin(a), *e = std::end(a);
  while (b != e) {
    *b = 0;
    ++b;
  }
  for (auto elem : a) {
    std::cout << elem << " ";
  }
  return 0;
}
