/*
  a. void f(int, int)
     void f(double, double = 3.14)
     Illegal because both are equally good.
  b. void f(int)
     void f(double, double = 3.14)
     It will match void f(int) because it matches and no conversion is required.
  c. void f(int, int)
     void f(double, double = 3.14)
     It will match void f(int, int) because it matches the types exactly (no conversions necessary)
  d. void f(int, int)
     void f(double, double = 3.14)
     It will match void f(double, double = 3.14) because it matches the types exactly (no conversions necessary)
 */
