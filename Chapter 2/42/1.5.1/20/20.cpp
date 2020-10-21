#include <iostream>
#include "Sales_data.h"

int main(int argc, char* argv[]) {
  Sales_data book;
  while (std::cin >> book.book_no >> book.units_sold >> book.revenue) {
    std::cout << book.book_no << " " << book.units_sold
	      << " " << book.revenue << std::endl;
  }
  return 0;
}
