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
  Sales_data book1, book2;
  cin >> book1.book_no >> book1.units_sold >> book1.revenue;
  cin >> book2.book_no >> book2.units_sold >> book2.revenue;
  cout << book1.book_no << " " <<  book1.units_sold + book2.units_sold
	    << " " << book1.revenue + book2.revenue << endl;
  return 0;
}
