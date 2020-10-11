#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  std::vector<int> v1;
  for (std::vector<int>::const_iterator it = v1.cbegin();
       it != v1.cend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<int> v2(10);
  for (auto it = v2.cbegin(); it != v2.cend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<int> v3(10, 42);
  for (std::vector<int>::iterator it = v3.begin();
       it != v3.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<int> v4{10};
  for (auto it = v4.begin(); it != v4.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<int> v5{10, 42};
  for (std::vector<int>::const_iterator it = v5.begin();
       it != v5.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<std::string> v6{10};
  for (auto it = v6.cbegin(); it != v6.cend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::vector<std::string> v7{10, "hi"};
  for (std::vector<std::string>::const_iterator it = v7.cbegin();\
       it != v7.cend(); ++it) {
    std::cout << *it << " ";
  }



  return 0;
}
