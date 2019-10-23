#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void read_in(std::string filename, std::vector<std::string>& words);

int main(int argc, char* argv[]) {
  std::vector<std::string> v;
  std::string f = "file1.txt";
  read_in(f, v);
  auto size = v.size();
  for (decltype(v.size()) i = 0; i < size; ++i) {
    std::cout << v[i] << " ";
  }
  return 0;
}

void read_in(std::string filename, std::vector<std::string>& words) {
  std::ifstream infile(filename);
  std::string word;
  while (infile >> word) {
    words.push_back(word);
  }
}
