#include <iostream>
#include <string>

std::istream& funct(std::istream& is);

int main(int argc, char* argv[]) {
  funct(std::cin);
  return 0;
}

std::istream& funct(std::istream& is) {
  char ch;
  std::string s;
  while (true) {
    ch = is.get();
    if (is.eof()) {
      break;
    }
    s += ch;
  }
  std::cout << s;
  is.clear();
  return is;
}
