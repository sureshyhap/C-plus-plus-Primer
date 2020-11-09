#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v1 {1, 2, 3, 4, 5}, v2 {1, 2, 3, 4, 5};
  if (v1 == v2) {
    std::cout << "They are equal\n";
  }
  else {
    std::cout << "They are unequal\n";
  } 
  return 0;
}
