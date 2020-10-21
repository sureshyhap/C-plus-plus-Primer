#include <iostream>
#include <string>
#include <cctype>

bool check_cap(const std::string& s);
const std::string& change_lower(std::string& s);

int main(int argc, char* argv[]) {
  std::cout << check_cap("Hello World!") << std::endl;
  std::string str = "Hello World!";
  std::cout << change_lower(str) << std::endl;
  return 0;
}

bool check_cap(const std::string& s) {
  std::string::size_type len = s.length();
  for (std::string::size_type i = 0; i < len; ++i) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      return true;
    }
  }
  return false;
}

const std::string& change_lower(std::string& s) {
  auto len = s.size();
  for (decltype(s.size()) i = 0; i < len; ++i) {
    s[i] = tolower(s[i]);
  }
  return s;
}

/*
  The parameter in the first is a const& because the string shouldn't change.
  The parameter in the second is a & because the string should change.
 */
