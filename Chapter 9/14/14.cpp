#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <cstring>

int main(int argc, char* argv[]) {
  char* first {new char[5 + 1]};
  strcpy(first, "Hello");
  char* second {new char[5 + 1]};
  strcpy(second, "World");
  std::list<char*> list1 {first, second};
  std::vector<std::string> vs;
  vs.assign(list1.cbegin(), list1.cend());
  for (const auto& element : vs) {
    std::cout << element << ' ';
  }
  std::cout << std::endl;
  return 0;
}
