#include <iostream>
#include <string>
#include <list>

int main(int argc, char* argv[]) {
  std::string word;
  std::list<std::string> l;
  while (std::cin >> word) {
    l.push_back(word);
  }
  for (std::list<std::string>::iterator it = l.begin(); it != l.end(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  return 0;
}
