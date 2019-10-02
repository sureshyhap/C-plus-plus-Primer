#include <iostream>

inline void reset(int& i);

int main(int argc, char* argv[]) {
  int num = 5;
  reset(num);
  std::cout << num;
  return 0;
}

inline void reset(int& i) {
  i = 0;
}
