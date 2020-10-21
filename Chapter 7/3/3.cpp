#include <iostream>
#include <string>

class Sales_data {
public:
  std::string isbn() const {
    return bookNo;
  }
  Sales_data& combine(const Sales_data&);
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& sd) {
  units_sold += sd.units_sold;
  revenue += sd.revenue;
  return *this;
}

int main(int argc, char* argv[]) {
  Sales_data total;
  if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.isbn() == trans.isbn()) {
	total.combine(trans);
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
  return 0;
}
