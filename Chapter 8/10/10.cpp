#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
  std::ifstream infile("infile.txt");
  std::string line;
  std::vector<std::string> lines;
  // Extract lines from file
  while (std::getline(infile, line)) {
    lines.push_back(line);
  }
  // Extract words from line
  std::string word;
  for (const std::string& elem : lines) {
    std::istringstream iss(elem);
    while (iss >> word) {
      std::cout << word << std::endl;
    }
  }
  return 0;
}
