#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>

int main(int argc, char* argv[]) {
  std::ifstream infile("text.txt");
  std::string line;
  std::vector<std::string> lines;
  while (std::getline(infile, line)) {
    if (line.empty() == true) {
      break;
    }
    for (auto& c : line) {
      c = toupper(c);
    }
    lines.push_back(line);
    lines.push_back("\n");
  }
  lines.push_back("\n");
  while (std::getline(infile, line)) {
    if (lines.empty() == false) {
      lines.push_back(line);
      lines.push_back("\n");
    }
    else {
      lines.push_back("\n");
    }
  }
  std::ofstream outfile("text.txt", std::ofstream:: trunc);
  for (auto str : lines) {
    outfile << str;
  }
  return 0;
}
