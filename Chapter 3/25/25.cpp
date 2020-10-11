#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<unsigned int> scores(11, 0);
  unsigned int grade = 0;
  while (std::cin >> grade) {
    if (grade <= 100) {
      int placement = grade / 10;
      auto it = scores.begin();
      ++(*(it + placement));
    }
  }
  for (auto element : scores) {
    std::cout << element << " ";
  }
  return 0;
}
