#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string letter_grade;
  int grade = 81;
  letter_grade = grade < 60 ? "F" : (grade < 70 ? "D" : (grade < 80 ? "C" : (grade < 90 ? "B" : (grade < 100 ? "A" : "A++"))));
  letter_grade += grade % 10 < 3 ? "-" : (grade % 10 > 7 ? "+" : "");
  std::cout << letter_grade;
  return 0;
}
