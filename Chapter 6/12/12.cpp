#include <iostream>

void swap(int& num1, int& num2);

int main(int argc, char* argv[]) {
  int a = 5, b = 2;
  swap(a, b);
  std::cout << a << " " << b;
  return 0;
}

void swap(int& num1, int& num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}
