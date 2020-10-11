#include <iostream>
#include <string>

inline bool isShorter(const std::string s1, const std::string& s2);

int main(int argc, char* argv[]) {
  std::string s1 = "Hello", s2 = "World";
  std::cout << isShorter(s1, s2);
  return 0;
}

inline bool isShorter(const std::string s1, const std::string& s2) {
  return s1.size() < s2.size();
}
