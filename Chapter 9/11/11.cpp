#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> a;
  std::vector<int> b(5);
  std::vector<int> c(10, 2);
  std::vector<int> d {1, 2, 3, 4, 5};
  std::vector<int> e(d.begin(), d.end() - 2);
  std::vector<int> f(b);

  for (auto element : e) {
    std::cout << element << ' ';
  }
  std::cout << '\n';
  
  return 0;
}
