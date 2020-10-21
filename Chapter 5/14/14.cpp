#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int count  = 1, most_count = 1;
  std::string word, word2, most_common;
  while (std::cin >> word) {
    // If its the first word read, continue
    if (word2.empty()) {
      word2 = word;
      continue;
    }
    if (word == word2) {
      ++count;
    }
    else {
      if (count > most_count) {
	most_common = word2;
	most_count = count;
      }
      word2 = word;
      count = 1;
    }
  }
  if (most_count == 1) {
    std::cout << "No duplicates" << std::endl;
  }
  else {
    std::cout << most_common << " occured " << most_count << " times.";
  }
  return 0;
}
