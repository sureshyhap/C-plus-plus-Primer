#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char* argv[]) {
  int num = 0, den = 1;
  std::cout << "Enter two numbers to divide: ";
  while (std::cin >> num >> den) {
    try {
      if (den != 0) {
	std::cout << static_cast<double>(num) / den;
	break;
      }
      else {
	throw std::runtime_error("Division by 0 is invalid.");
      }
    }
    catch (std::runtime_error re) {
      std::cerr << re.what() << std::endl;
      std::cout << "Would you like to try again? (yes or no)";
      std::string response;
      std::cin >> response;
      if (response == "no") {
	break;
      }
    }
  }
  return 0;
}
