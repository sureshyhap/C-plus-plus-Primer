#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
  std::string word;
  std::vector<std::string> words;
  while (std::cin >> word) {
    words.push_back(word);
  }
  for (auto& element : words) {
    for (decltype(element.length()) i = 0; i < element.length(); ++i) {
      element[i] = toupper(element[i]);
    }
  }
  for (decltype(words.size()) i = 0; i < words.size(); ++i) {
    std::cout << words[i] << " ";
    if (i != 0 && i % 8 == 0) {
      std::cout << std::endl;
    }
  }
  return 0;
}
