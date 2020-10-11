#include <string>

class Account {
public:
  void calculate() {
    amount += (amount * interest_rate);
  }
  static double get_rate() {
    return interest_rate;
  }
  static void set_rate(double new_rate) {
    interest_rate = new_rate;
  }
private:
  std::string owner;
  double amount;
  static double interest_rate;
};
