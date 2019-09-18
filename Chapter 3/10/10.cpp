#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
  char c = char();
  std::string final_word;
  while (std::cin >> c) {
    if (!ispunct(c)) {
      final_word += c;
    }
  }
  std::cout << final_word;
  return 0;
}
