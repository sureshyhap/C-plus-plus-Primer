#include <iostream>

void swap(int* p1, int* p2);

int main(int argc, char* argv[]) {
  int a = 5, b = 2;
  swap(&a, &b);
  std::cout << a << " " << b;
  return 0;
}

void swap(int* p1, int* p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
