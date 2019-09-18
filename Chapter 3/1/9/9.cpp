#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  int sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  cout << "The sum from 50 to 100 = " << sum << endl;
  return 0;
}
