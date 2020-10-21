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

int main() {
  Sales_data total; // variable to hold data for the next transaction

  // read the first transaction and ensure that there are data to process
  if (cin >> total.book_no >> total.units_sold >> total.revenue) {
    Sales_data trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (cin >> trans.book_no >> trans.units_sold >> trans.revenue) {
      // if we're still processing the same book
      if (total.book_no == trans.book_no) {
	  total.units_sold += trans.units_sold; // update the running total
	  total.revenue += trans.revenue;
	}
      else {              
	// print results for the previous book 
	cout << total.book_no << " " <<  total.units_sold
		  << " " << total.revenue << endl;  
	total.book_no = trans.book_no;  // total now refers to the next book
	total.units_sold = trans.units_sold;
	total.revenue = trans.revenue;
      }
    }
    cout << total.book_no << " " <<  total.units_sold
	      << " " << total.revenue << endl;
  } else {
    // no input! warn the user
    cerr << "No data?!" << endl;
    return -1;  // indicate failure
  }

  return 0;
}
