#include <iostream>
#include <vector>

bool find_in_range(std::vector<int>::iterator it1,
		   std::vector<int>::iterator it2,
		   int value);

int main(int argc, char* argv[]) {
  std::vector<int> vec {1, 2, 3, 4, 5};
  std::vector<int>::iterator it1 = vec.begin() + 1, it2 = vec.end();
  std::cout << find_in_range(it1, it2, 1);
  
  return 0;
}

bool find_in_range(std::vector<int>::iterator it1,
		   std::vector<int>::iterator it2,
		   int value) {
  if (it2 < it1) {
    return false;
  }
  while (it1 != it2) {
    if (*it1 == value) {
      return true;
    }
    ++it1;
  }
  return false;
}
