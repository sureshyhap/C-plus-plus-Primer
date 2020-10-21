#include <iostream>
//#include "Sales_item.h"

struct Sales_data {
  std::string book_no;
  int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  Sales_data book;
  while (std::cin >> book.book_no >> book.units_sold >> book.revenue) {
    std::cout << book.book_no << " " << book.units_sold
	      << " " << book.revenue << std::endl;
  }
  return 0;
}
