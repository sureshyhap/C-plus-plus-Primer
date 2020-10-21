#include <iostream>

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main(int argc, char* argv[]) {
  //  f(2.56, 42);
  //  f(42);
  // f(42, 0);
  f(2.56, 3.14);
  return 0;
}

void f() {
  std::cout << "First" << std::endl;
}

void f(int) {
  std::cout << "Second" << std::endl;  
}

void f(int, int) {
  std::cout << "Third" << std::endl;
}

void f(double, double) {
  std::cout << "Fourth" << std::endl;
}
