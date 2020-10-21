#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string s("Hello World!");
  decltype(s.length()) len = s.length();
  /*
  unsigned int i = 0;
  while (i < len) {
    s[i++] = 'X';
  }
  */
  for (unsigned int i = 0; i < len; ++i) {
    s[i] = 'X';
  }
  std::cout << s;
  return 0;
}

// I like them all!
