
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int grade = 91;
  std::string result;
  //result = grade < 60 ? "fail" : (grade <= 75 ? "low pass" : (grade <= 90 ? "pass" : "high pass"));
  // I think the ifs are clearer, but I kind of like the chained ?: operators
  if (grade < 60) {
    result = "fail";
  }
  else if (grade <= 75) {
    result = "low pass";
  }
  else if (grade <= 90) {
    result = "pass";
  }
  else {
    result = "high pass";
  }
  std::cout << result;
  return 0;
}
