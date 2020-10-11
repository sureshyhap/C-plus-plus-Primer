#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[]) {
  Sales_item trans, trans2;
  if (std::cin >> trans) {
    int count = 1;
    while (std::cin >> trans2) {
      if (trans.isbn() == trans2.isbn()) {
	++count;
      }
      else {
	std::cout << trans.isbn() << " occurs " << count
		  << " times." << std::endl;
	trans = trans2;
	count = 1;
      }
    }
    std::cout << trans.isbn() << " occurs " << count
	      << " times." << std::endl;
  }
  else {
    std::cerr << "No input!";
    return -1;
  }
  return 0;
}
