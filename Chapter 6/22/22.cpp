#include <iostream>

inline void swap(int*& p1, int*& p2);

int main(int argc, char* argv[]) {
  int a = 0, b = 0;
  int* p1 = &a, *p2 = &b;
  std::cout << p1 << " " << p2 << std::endl;
  swap(p1, p2);
  std::cout << p1 << " " << p2 << std::endl;
  return 0;
}

inline void swap(int*& p1, int*& p2) {
  int* temp = p1;
  p1 = p2;
  p2 = temp;
}
