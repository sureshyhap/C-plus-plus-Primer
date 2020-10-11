#include <iostream>
#include <vector>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int divi(int x, int y);

int main(int argc, char* argv[]) {
  std::vector<int (*)(int, int)> v;
  v.push_back(&add);
  v.push_back(&sub);
  v.push_back(&mult);
  v.push_back(&divi);
  std::cout << (*(v[0]))(5, 6);
  return 0;
}

int add(int x, int y) {
  return x + y;
}

int sub(int x, int y) {
  return x - y;
}

int mult(int x, int y) {
  return x * y;
}

int divi(int x, int y) {
  return x / y;
}
