#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char str1[] = "Hello";
  char str2[] = "World!";
  int required_size = (sizeof(str1) + sizeof(str2)) / sizeof(char);
  // -1 because only one '\0' is needed
  char str3[required_size - 1];
  strcpy(str3, str1);
  strcat(str3, str2);
  std::cout << str3;
}
