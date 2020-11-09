#include <iostream>
#include <vector>
#include <list>

int main(int argc, char* argv[]) {
  std::vector<int> v1 {1, 2, 3, 4, 5};
  std::list<int> l1 {1, 2, 3, 4, 5};
  if (v1 == std::vector<int>(l1.cbegin(), l1.cend())) {
    std::cout << "Equal\n";
  }
  else {
    std::cout << "Unequal\n";
  }
  return 0;
}
