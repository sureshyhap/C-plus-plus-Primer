#include <iostream>

using std::cout;
using std::flush;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
  int v1 = 0, v2 = 0;
  cout << "Enter two integers: " << flush;
  cin >> v1 >> v2;
  if (v2 < v1) {
    int temp = v2;
    v2 = v1;
    v1 = temp;
  }
  // At this point v1 <= v2
  while (v1 <= v2) {
    cout << v1 << endl;
    ++v1;
  }
  return 0;
}
