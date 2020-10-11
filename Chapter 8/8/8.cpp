#include <iostream>
#include <string>
#include <fstream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char* argv[]) {
  std::string in_filename = argv[1], out_filename = argv[2];
  std::ifstream infile(in_filename);
  std::ofstream outfile(out_filename, std::ostream::app);
  Sales_data total;
  if (infile >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (infile >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
	total.units_sold += trans.units_sold;
	total.revenue += trans.revenue;
      }
      else {
	outfile << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
	total.bookNo = trans.bookNo;
	total.units_sold = trans.units_sold;
	total.revenue = trans.revenue;
      }
    }
    outfile << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
  }
  else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  infile.close();
  outfile.close();
  return 0;
}
