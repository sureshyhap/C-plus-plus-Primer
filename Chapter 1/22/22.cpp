#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[]) {
  Sales_item book_total, book;
  int i = 0;
  while (std::cin >> book) {
    if (i == 0) {
      book_total = book;
      ++i;
    }
    book_total += book;
  }
  std::cout << book_total << std::endl;
  return 0;
}
