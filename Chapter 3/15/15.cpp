#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  std::string word;
  std::vector<std::string> words;
  while (std::cin >> word) {
    words.push_back(word);
  }
  for (auto elem : words) {
    std::cout << elem << " ";
  }
  return 0;
}
