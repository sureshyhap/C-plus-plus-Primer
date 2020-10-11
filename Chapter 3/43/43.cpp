#include <iostream>

int main(int argc, char* argv[]) {
  int ia[3][4] = {
		  {1, 6, 2, 5},
		  {3, 7, 5, 5},
		  {0, 1, 2, 1}
  };
  /*
  for (const int (&elem)[4] : ia) {
    for (int num : elem) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
  }
  */
  /*
  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 4; ++j) {
      std::cout << ia[i][j] << " ";
    }
    std::cout << std::endl;
  }
  */
  for (int (*p)[4] = ia; p != ia + 3; ++p) {
    for (int* q = *p; q != *p + 4; ++q) {
      std::cout << *q << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
