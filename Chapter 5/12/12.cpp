#include <iostream>
#include <cctype>

int main(int argc, char* argv[]) {
  int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
  int blanks = 0, newlines = 0, tabs = 0;
  int ff = 0, fl = 0, fi = 0;
  char ch = char();
  while (std::cin.get(ch)) {
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
    case ' ':
      ++blanks;
      break;
    case '\n':
      ++newlines;
      break;
    case '\t':
      ++tabs;
      break;
    case 'f':
      ch = std::cin.peek();
      switch (ch) {
      case 'f':
	++ff;
	std::cin.get();
	break;
      case 'l':
	++fl;
	std::cin.get();
	break;
      case 'i':
	++fi;
	++i_count;
	std::cin.get();
	break;
      }
    }
  }
  std::cout << "A's : " << a_count << std::endl;
  std::cout << "E's : " << e_count << std::endl;
  std::cout << "I's : " << i_count << std::endl;
  std::cout << "O's : " << o_count << std::endl;
  std::cout << "U's : " << u_count << std::endl;
  std::cout << "Blanks: " << blanks << std::endl;
  std::cout << "Newlines: " << newlines << std::endl;
  std::cout << "Tabs: " << tabs << std::endl;
  std::cout << "FF's: " << ff << std::endl;
  std::cout << "FL's: " << fl << std::endl;
  std::cout << "FI's: " << fi << std::endl;
  return 0;
}
