#include <iostream>
//#include "Sales_item.h"

struct Sales_data {
  std::string book_no;
  int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  Sales_data trans, trans2;
  if (std::cin >> trans.book_no >> trans.units_sold >> trans.revenue) {
    int count = 1;
    while (std::cin >> trans2.book_no >> trans.units_sold >> trans.revenue) {
      if (trans.book_no == trans2.book_no) {
	++count;
      }
      else {
	std::cout << trans.book_no << " occurs " << count
		  << " times." << std::endl;
	trans.book_no = trans2.book_no;
	trans.units_sold = trans2.units_sold;
	trans.revenue = trans2.revenue;
	count = 1;
      }
    }
    std::cout << trans.book_no << " occurs " << count
	      << " times." << std::endl;
  }
  else {
    std::cerr << "No input!";
    return -1;
  }
  return 0;
}
