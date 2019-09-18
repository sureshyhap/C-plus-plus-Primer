#include <iostream>
//#include "Sales_item.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
  string book_no;
  int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  Sales_data book_total, book;
  int i = 0;
  while (cin >> book.book_no >> book.units_sold >> book.revenue) {
    if (i == 0) {
      book_total.book_no = book.book_no;
      book_total.units_sold = book.units_sold;
      book_total.revenue = book.revenue;
      ++i;
    }
    book_total.units_sold += book.units_sold;
    book_total.revenue += book.revenue;  
  }
  cout << book_total.book_no << " " << book_total.units_sold
       << " " << book_total.revenue << endl;
  return 0;
}
