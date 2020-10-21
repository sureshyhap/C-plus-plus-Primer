#include <iostream>
#include <string>

class Sales_data {
  friend Sales_data add(const Sales_data& sd1, const Sales_data& sd2);
  friend std::istream& read(std::istream& is, Sales_data& sd);
  friend std::ostream& print(std::ostream& os, const Sales_data& sd);
public:
  Sales_data() : units_sold(0), revenue(0.0) {}
  Sales_data(const std::string& s) : bookNo(s) {}
  Sales_data(const std::string& s, unsigned n, double p) :
    bookNo(s), units_sold(n), revenue(p * n) {}
  Sales_data(std::istream& is) {
    read(is, *this);
  }
  std::string isbn() const {
    return bookNo;
  }
  Sales_data& combine(const Sales_data& sd);
  inline double avg_price() const;
private:
  std::string bookNo;
  unsigned units_sold;
  double revenue;
};

Sales_data& Sales_data::combine(const Sales_data& sd) {
  if (isbn() == sd.isbn()) {
    units_sold += sd.units_sold;
    revenue += sd.revenue;
  }
  return *this;
}

double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0.0;
}

Sales_data add(const Sales_data& sd1, const Sales_data& sd2) {
  Sales_data sum(sd1);
  sum.combine(sd2);
  return sum;
}

std::istream& read(std::istream& is, Sales_data& sd) {
  return is >> sd.bookNo >> sd.units_sold >> sd.revenue;
}

std::ostream& print(std::ostream& os, const Sales_data& sd) {
  return os << sd.bookNo << " " << sd.units_sold << " "
	    << sd.revenue;
}

int main(int argc, char* argv[]) {
  Sales_data sd;
  Sales_data sd2("0-201-70353-X");
  Sales_data sd3("0-201-70353-X", 4, 24.99);
  Sales_data sd4(std::cin);
  return 0;
}
