/*
  Prefix is more efficient. In this case the effects would be the same.
 */
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> ivec(10);
  std::vector<int>::size_type cnt = ivec.size();
  for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
    ivec[ix] = cnt;
  }
  for (int elem : ivec) {
    std::cout << elem << " ";
  }
  return 0;
}
