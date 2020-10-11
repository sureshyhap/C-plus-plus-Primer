#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string again;
  do {
    std::string s1, s2;
    std::cout << "Enter two strings: ";
    std::cin >> s1 >> s2;
    if (s1 < s2) {
      std::cout << s1 << " is less than " << s2 << std::endl;
    }
    else if (s1 > s2) {
      std::cout << s2 << " is less than " << s1 << std::endl;
    }
    else {
      std::cout << s1 << " is equal to " << s2 << std::endl;
    }
    std::cout << "Try again? (yes or no): ";
    std::cin >> again;
  } while (again == "yes");
  return 0;
}
