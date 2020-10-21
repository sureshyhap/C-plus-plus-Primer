#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> a(10);
  auto size = a.size();
  for (decltype(a.size()) i = 0; i < size; ++i) {
    a[i] = i;
  }
  for (auto elem : a) {
    std::cout << elem << " ";
  }
  return 0;
}
