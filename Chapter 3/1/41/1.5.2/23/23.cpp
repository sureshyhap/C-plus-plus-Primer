#include <iostream>
//#include "Sales_item.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

struct Sales_data {
  string book_no;
  int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  Sales_data trans, trans2;
  if (cin >> trans.book_no >> trans.units_sold >> trans.revenue) {
    int count = 1;
    while (cin >> trans2.book_no >> trans.units_sold >> trans.revenue) {
      if (trans.book_no == trans2.book_no) {
	++count;
      }
      else {
	cout << trans.book_no << " occurs " << count
		  << " times." << endl;
	trans.book_no = trans2.book_no;
	trans.units_sold = trans2.units_sold;
	trans.revenue = trans2.revenue;
	count = 1;
      }
    }
    cout << trans.book_no << " occurs " << count
	      << " times." << endl;
  }
  else {
    cerr << "No input!";
    return -1;
  }
  return 0;
}
