#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char* argv[]) {
  std::string s1("Hello"), s2("World!");
  if (s1 == s2) {
    std::cout << "Same";
  }
  else {
    std::cout << "Different";
  }
  std::cout << std::endl;
  char str1[] = {'F', 'N', 'Q', '\0'};
  char str2[] = "FNQ";
  std::cout << (strcmp(str1, str2) ? "Different" : "Same");
  
}
