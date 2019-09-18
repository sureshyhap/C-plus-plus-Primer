#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string word, long_str;
  while (std::cin >> word) {
    long_str += word;
    long_str += " ";
  }
  std::cout << long_str << std::endl;
  return 0;
}
