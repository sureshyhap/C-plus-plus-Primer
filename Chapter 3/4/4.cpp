#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string s1, s2;
  std::getline(std::cin, s1);
  std::getline(std::cin, s2);
  /*
  if (s1 == s2) {
    std::cout << "The strings are equal." << std::endl;
  }
  else if (s1 > s2) {
    std::cout << s1 << " is greater than " << s2 << "." << std::endl;
  }
  else if (s1 < s2){
    std::cout << s1 << " is less than " << s2 << "." << std::endl;
  }
  */
  std::string::size_type len1 = s1.length();
  auto len2 = s2.length();
  if (len1 == len2) {
    std::cout << "The strings are the same length." << std::endl;
  }
  else if (len1 > len2) {
    std::cout << s1 << " is longer than " << s2 << "." << std::endl;
  }
  else if (len1 < len2) {
    std::cout << s1 << " is shorter than " << s2 << "." << std::endl;
  }

  
  return 0;
}
