#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return 0;
  }
  std::string s = argv[1];
  s += argv[2];
  std::cout << s;
  return 0;
}
