/*
  a. The second takes in a reference to const explicitly. So if a const int or a numeric literal is passed in, the second function will be called.
  b. The second takes in a pointer to const explicitly. So if a const char* or a string literal is passed in, the second function will be called.
  c. This is illegal because top level constness doesn't distinguish the function calls.
 */
