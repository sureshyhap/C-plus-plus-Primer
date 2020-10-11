#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  int num = 0;
  std::vector<int> v;
  while (std::cin >> num) {
    v.push_back(num);
  }
  auto size = v.size();
  /*
  for (decltype(v.size()) i = 0; i < size; i += 2) {
    if (i + 1 < size) {
      std::cout << v[i] + v[i + 1] << " ";
    }
    else {
      std::cout << v[i];
    }
  }
  */
  for (decltype(v.size()) i = 0; i < size / 2; ++i) {
    std::cout << v[i] + v[size - 1 - i] << " ";
  }
  if (size % 2 != 0) {
    std::cout << v[size / 2];
  }
  return 0;
}
