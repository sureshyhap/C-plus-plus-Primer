/*
  i - constant int
  j - int
  k - reference to a const int
  p - pointer to a const int
  j2 - const int
  k2 - reference to a const int
 */

#include <iostream>

int main(int argc, char* argv[]) {
  const int i = 42;
  //  i = 50;
  auto j = i;
  //  j = 5;
  const auto &k = i;
  //  k = 5;
  auto *p = &i;
  //  *p = 5;
  const auto j2 = i, &k2 = i;
  //  j2 = 5;
  //  k2 = 5;
  return 0;
}
