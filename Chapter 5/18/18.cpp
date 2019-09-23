/*
  a. The indented code after the do should be in curly braces. Also cin can't be alone
  in the while condition.

  int v1 = 0, v2 = 0;
  std::cout << "Please enter two numbers to sum: ";
  while (std::cin >> v1 >> v2) {
      std::cout << "Sum is: " << v1 + v2 << std::endl;
      std::cout << "Please enter two numbers to sum: ";
  }

  b. You can't have a variable declaration in a do while loop because it would be used
  before it was declared.

  while (int ival = get_response()) {
      ...
  }

  c. The scope of ival will end before it is used in the while.

  int val = 0;
  do {
      ival = get_response();
  } while (ival);

 */
