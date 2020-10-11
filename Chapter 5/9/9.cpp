#include <iostream>

int main(int argc, char* argv[]) {
  char ch = char();
  int vowels = 0;
  while (std::cin >> ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      ++vowels;
    }
  }
  std::cout << vowels << " vowels.";
  return 0;
}
