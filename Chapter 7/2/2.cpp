#include <iostream>
#include <string>

class Sales_data {
public:
  std::string isbn() const {
    return bookNo;
  }
  Sales_data& combine(const Sales_data& sd);
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& sd) {
  if (isbn() == sd.isbn()) {
    units_sold += sd.units_sold;
    revenue += sd.revenue;
  }
  return *this;
}

int main(int argc, char* argv[]) {
  return 0;
}
