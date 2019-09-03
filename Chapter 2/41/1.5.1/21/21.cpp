#include <iostream>
//#include "Sales_item.h"

struct Sales_data {
  std::string book_no;
  int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  Sales_data book1, book2;
  std::cin >> book1.book_no >> book1.units_sold >> book1.revenue;
  std::cin >> book2.book_no >> book2.units_sold >> book2.revenue;
  std::cout << book1.book_no << " " <<  book1.units_sold + book2.units_sold
	    << " " << book1.revenue + book2.revenue << std::endl;
  return 0;
}
