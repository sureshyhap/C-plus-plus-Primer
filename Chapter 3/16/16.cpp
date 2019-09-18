#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  std::vector<int> v1;
  for (auto elem : v1) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<int> v2(10);
  for (auto elem : v2) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<int> v3(10, 42);
  for (auto elem : v3) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<int> v4{10};
  for (auto elem : v4) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<int> v5{10, 42};
  for (auto elem : v5) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<std::string> v6{10};
  for (auto elem : v6) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  std::vector<std::string> v7{10, "hi"};
  for (auto elem : v7) {
    std::cout << elem << " ";
  }



  return 0;
}
