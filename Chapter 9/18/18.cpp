#include <iostream>
#include <string>
#include <deque>

int main(int argc, char* argv[]) {
  std::string word;
  std::deque<std::string> d;
  while (std::cin >> word) {
    d.push_back(word);
  }
  for (std::deque<std::string>::iterator it = d.begin(); it != d.end(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  return 0;
}
