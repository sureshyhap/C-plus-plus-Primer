#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string word, prev_word;
  bool repeat = false;
  while (std::cin >> word) {
    if (prev_word.empty()) {
      prev_word = word;
      continue;
    }
    if (word == prev_word) {
      std::cout << word << " was repeated." << std::endl;
      repeat = true;
      break;
    }
    else {
      prev_word = word;
    }
  }
  if (!repeat) {
    std::cout << "No word was repeated." << std::endl;
  }
  return 0;
}
