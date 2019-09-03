#include <iostream>

int main(int argc, char* argv[]) {
  int i = 0, &r = i;
  auto a = r;
  a = 42;
  std::cout << a << std::endl;
  const int ci = i, &cr = ci;
  auto b = ci;
  b = 42;
  std::cout << b << std::endl;
  auto c = cr;
  c = 42;
  std::cout << c << std::endl;
  auto d = &i;
  //  d = 42;
  std::cout << d << std::endl;
  auto e = &ci;
  //  e = 42;
  std::cout << e << std::endl;
  auto &g = ci;
  //  g = 42;
  std::cout << g << std::endl;
  return 0;
}


