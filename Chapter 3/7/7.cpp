#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string s("Hello");
  for (char& c : s) {
    c = 'X';
  }
  std::cout << s;
  return 0;
}
