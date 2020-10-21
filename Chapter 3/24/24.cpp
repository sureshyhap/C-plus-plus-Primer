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
  for (std::vector<int>::const_iterator cit = v.cbegin();
       cit < v.cend(); cit += 2) {
    if (cit + 1 < v.cend()) {
      std::cout << (*cit) + (*(cit + 1)) << " ";
    }
    else {
      std::cout << (*cit);
    }
  }
  */

  for (auto cit = v.cbegin(); cit < v.cbegin() + ((v.cend() - v.cbegin()) / 2); ++cit) {
    std::cout << (*cit) + *(v.cend() - 1 - (cit - v.cbegin())) << " " << std::flush;
  }
  if ((v.cend() - v.cbegin()) % 2 != 0) {
    std::cout << *(v.cbegin() + ((v.cend() - v.cbegin()) / 2));
  }

  return 0;
}
