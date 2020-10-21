#include <iostream>
#include <vector>

std::vector<int>::iterator find_in_range(std::vector<int>::iterator it1,
		   std::vector<int>::iterator it2,
		   int value);

int main(int argc, char* argv[]) {
  std::vector<int> vec {1, 2, 3, 4, 5};
  std::vector<int>::iterator it1 = vec.begin() + 1, it2 = vec.end();
  std::vector<int>::iterator it = find_in_range(it1, it2, 2);
  if (it != it2) {
    std::cout << *it << '\n';
  }
  else {
    std::cout << "Not in vector\n";
  }
  
  return 0;
}

// Returns it2 (past the end of the range) if element is not
// in the vector or if it2 is before it1
std::vector<int>::iterator find_in_range(std::vector<int>::iterator it1,
		   std::vector<int>::iterator it2,
		   int value) {
  if (it2 < it1) {
    return it2;
  }
  while (it1 != it2) {
    if (*it1 == value) {
      return it1;
    }
    ++it1;
  }
  return it2;
}
