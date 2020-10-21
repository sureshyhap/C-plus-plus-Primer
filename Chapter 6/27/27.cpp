#include <iostream>
#include <initializer_list>

void print_nums(std::initializer_list<int> list_nums);

int main(int argc, char* argv[]) {
  print_nums({5, 7, 12});
  return 0;
}

void print_nums(std::initializer_list<int> list_nums) {
  int sum = 0;
  for (const int* ln = list_nums.begin(); ln != list_nums.end(); ++ln) {
    sum += *ln;
  }
  std::cout << sum;
}
