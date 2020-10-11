#include <iostream>
#include <string>
#include <sstream>

std::istream& funct(std::istream& is);

int main(int argc, char* argv[]) {
  std::istringstream iss("Hello how are you?");
  funct(iss);
  return 0;
}

std::istream& funct(std::istream& is) {
  std::string s;
  while (is >> s) {
    std::cout << s;
  }
  is.clear();
  return is;
}
