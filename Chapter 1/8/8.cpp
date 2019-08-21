/*
Illegal -> Incorrect (Legal)
Legal -> Correct
Illegal -> Correct
Illegal -> Incorrect (Legal)
*/

#include <iostream>

int main(int argc, char* argv[]) {
  // std::cout << "/*";
  // std::cout << "*/";
  // std::cout << /* "*/" */;
  std::cout << /* "*/" /* "/*" */;
  return 0;
}
