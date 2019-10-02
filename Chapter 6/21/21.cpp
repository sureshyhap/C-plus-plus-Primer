#include <iostream>

inline int larger(int x, const int* py);

int main(int argc, char* argv[]) {
  int a = 5, b = 78, *pb = &b;
  std::cout << larger(a, pb);
  return 0;
}

inline int larger(int x, const int* py) {
  return x > (*py) ? x : (*py);
}
