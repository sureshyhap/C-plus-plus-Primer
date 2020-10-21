#include <iostream>
#include <iterator>

void print(const char* pc);
void print(const int* beg, const int* end);
void print(const int a[], size_t n);
void print(int (&arr)[2]);

int main(int argc, char* argv[]) {
  const char* c = "Hello";
  print(c);
  int i = 0, j[2] = {0, 1};
  int a[4] = {6, 1, 8, 4};
  print(std::begin(j), std::end(j));
  print(j, sizeof(j) / sizeof(int));
  print(j);
  return 0;
}

void print(const char* pc) {
  if (pc) {
    while (*pc) {
      std::cout << *pc++;
    }
    std::cout << std::endl;
  }
}

void print(const int* beg, const int* end) {
  while (beg != end) {
    std::cout << *beg++ << " ";
  }
  std::cout << std::endl;
}

void print(const int a[], size_t n) {
  for (size_t i = 0; i < n; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
}

void print(int (&arr)[2]) {
  for (auto elem : arr) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}
