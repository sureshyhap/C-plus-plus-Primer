#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string letter_grade;
  int grade = 78;
  if (grade < 60) {
    letter_grade = "F";
  }
  else {
    if (grade < 70) {
      letter_grade = "D";
    }
    else {
      if (grade < 80) {
	letter_grade = "C";
      }
      else {
	if (grade < 90) {
	  letter_grade = "B";
	}
	else {
	  if (grade < 100) {
	    letter_grade = "A";
	  }
	  else {
	    letter_grade = "A++";
	  }
	}
      }
    }
  }
  if (grade != 100 && grade >= 60) {
    if (grade % 10 < 3) {
      letter_grade += "-";
    }
    else {
      if (grade % 10 > 7) {
	letter_grade += "+";
      }
    }
  }
  std::cout << letter_grade;
  return 0;
}
