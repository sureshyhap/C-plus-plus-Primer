#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void read_in(std::string filename, std::vector<std::string>& lines);

int main(int argc, char* argv[]) {
  std::vector<std::string> v;
  std::string f = "file1.txt";
  read_in(f, v);
  auto size = v.size();
  for (decltype(v.size()) i = 0; i < size; ++i) {
    std::cout << v[i] << std::endl;
  }
  return 0;
}

void read_in(std::string filename, std::vector<std::string>& lines) {
  std::ifstream infile(filename);
  std::string line;
  while (std::getline(infile, line)) {
    lines.push_back(line);
  }
}
