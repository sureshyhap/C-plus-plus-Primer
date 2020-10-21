#include <iostream>
#include <vector>
#include <sstream>

std::string print(std::vector<int>::size_type i, const std::vector<int>& v);

int main(int argc, char* argv[]) {
  std::vector<int> v{4, 1, 6, 2, 7};
  std::cout << print(0, v);
  return 0;
}

std::string print(std::vector<int>::size_type i, const std::vector<int>& v) {
  if (i == v.size()) {
    return "";
  }
  std::ostringstream oss;
  oss << v[i];
  return oss.str() + " " + print(i + 1, v);
}
