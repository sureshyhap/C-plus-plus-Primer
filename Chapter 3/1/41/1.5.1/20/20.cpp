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
  Sales_data book;
  while (cin >> book.book_no >> book.units_sold >> book.revenue) {
    cout << book.book_no << " " << book.units_sold
	      << " " << book.revenue << endl;
  }
  return 0;
}
