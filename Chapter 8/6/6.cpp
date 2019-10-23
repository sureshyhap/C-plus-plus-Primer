#include <iostream>
#include <string>
#include <fstream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  std::string filename = argv[1];
  std::ifstream infile(filename);
  Sales_data total;
  if (infile >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (infile >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
	total.units_sold += trans.units_sold;
	total.revenue += trans.revenue;
      }
      else {
	std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
	total.bookNo = trans.bookNo;
	total.units_sold = trans.units_sold;
	total.revenue = trans.revenue;
      }
    }
    std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
  }
  else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  infile.close();
  return 0;
}
