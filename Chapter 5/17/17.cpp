#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v1{0, 1, 1, 2}, v2{0, 1, 1, 2, 3, 5, 8};
  // Maximum size to loop through is the size of the smaller vector
  auto smaller = v1.size() < v2.size() ? v1.size() : v2.size();
  for (decltype(v1.size()) i = 0; i < smaller; ++i) {
    if (v1[i] != v2[i]) {
      std::cout << "false";
      return 0;
    }
  }
  std::cout << "true";
  return 0;
}
