#include <iostream>
#include "Sales_data.h"

int main(int argc, char* argv[]) {
  Sales_data book_total, book;
  int i = 0;
  while (std::cin >> book.book_no >> book.units_sold >> book.revenue) {
    if (i == 0) {
      book_total.book_no = book.book_no;
      book_total.units_sold = book.units_sold;
      book_total.revenue = book.revenue;
      ++i;
    }
    book_total.units_sold += book.units_sold;
    book_total.revenue += book.revenue;  
  }
  std::cout << book_total << std::endl;
  return 0;
}
