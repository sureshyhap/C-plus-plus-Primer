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

Sales_data add(const Sales_data& sd1, const Sales_data& sd2) {
  Sales_data sum(sd1);
  sd1.combine(sd2);
  return sd1;
}

std::istream& read(std::istream& is, Sales_data& sd) {
  return is >> sd.bookNo >> sd.units_sold >> sd.revenue;
}

std::ostream& print(std::ostream& os, const Sales_data& sd) {
  return os << sd.bookNo << " " << sd.units_sold << " "
	    << sd.revenue;
}

int main(int argc, char* argv[]) {
  return 0;
}
