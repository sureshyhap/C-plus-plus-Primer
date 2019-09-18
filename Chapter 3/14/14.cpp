#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  int num = 0;
  std::vector<int> nums;
  while (std::cin >> num) {
    nums.push_back(num);
  }
  for (auto elem : nums) {
    std::cout << elem << " ";
  }
  return 0;
}
