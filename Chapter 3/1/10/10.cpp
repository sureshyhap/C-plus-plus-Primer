#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  int num = 10;
  while (num >= 0) {
    cout << num << endl;
    --num;
  }
  return 0;
}
