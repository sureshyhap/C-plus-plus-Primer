#include <iostream>
#include <cctype>

int main(int argc, char* argv[]) {
  int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
  char ch = char();
  while (std::cin >> ch) {
    switch (tolower(ch)) {
    case 'a':
      ++a_count;
      break;
    case 'e':
      ++e_count;
      break;
    case 'i':
      ++i_count;
      break;
    case 'o':
      ++o_count;
      break;
    case 'u':
      ++u_count;
      break;
    }
  }
  std::cout << "A's : " << a_count << std::endl;
  std::cout << "E's : " << e_count << std::endl;
  std::cout << "I's : " << i_count << std::endl;
  std::cout << "O's : " << o_count << std::endl;
  std::cout << "U's : " << u_count << std::endl;
  return 0;
}
